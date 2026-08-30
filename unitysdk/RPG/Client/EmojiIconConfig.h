#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class EmojiIconAsset; }
namespace System { class String; }

#define RPG_CLIENT_EMOJIICONCONFIG_GET_EMOJIICONASSET_OFFSET UNITYSDK_OFFSET(0x1A177F20)
#define RPG_CLIENT_EMOJIICONCONFIG_GET_EMOJIICONPATH_OFFSET UNITYSDK_OFFSET(0x1A177FB0)
#define RPG_CLIENT_EMOJIICONCONFIG_GET_FLIPBOOKFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1A178290)
#define RPG_CLIENT_EMOJIICONCONFIG_GET_FLIPBOOKSPEED_OFFSET UNITYSDK_OFFSET(0x1A1781C0)
#define RPG_CLIENT_EMOJIICONCONFIG_GET_ISFLIPBOOK_OFFSET UNITYSDK_OFFSET(0x1A1780F0)
#define RPG_CLIENT_EMOJIICONCONFIG_SET_EMOJIICONASSET_OFFSET UNITYSDK_OFFSET(0x1A177F60)
#define RPG_CLIENT_EMOJIICONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A178350)

namespace RPG::Client
{
	inline static constexpr unsigned int EmojiIconConfig_TypeDefinitionIndex = 63010;

	class EmojiIconConfig : public ::System::Object
	{
	public:
		::RPG::Client::EmojiIconAsset* _EmojiIconAsset; // 0x10
		::System::Single UniformScale; // 0x18
		::UnityEngine::Vector2 Scale; // 0x1C
		::System::Boolean FlipHorizontal; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOJIICONCONFIG__CTOR_OFFSET))(this);
		}

		::RPG::Client::EmojiIconAsset* get_EmojiIconAsset()
		{
			return ((::RPG::Client::EmojiIconAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOJIICONCONFIG_GET_EMOJIICONASSET_OFFSET))(this);
		}

		::System::Void set_EmojiIconAsset(::RPG::Client::EmojiIconAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EmojiIconAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOJIICONCONFIG_SET_EMOJIICONASSET_OFFSET))(this, a1);
		}

		::System::String* get_EmojiIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOJIICONCONFIG_GET_EMOJIICONPATH_OFFSET))(this);
		}

		::System::Boolean get_IsFlipbook()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOJIICONCONFIG_GET_ISFLIPBOOK_OFFSET))(this);
		}

		::System::Single get_FlipbookSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOJIICONCONFIG_GET_FLIPBOOKSPEED_OFFSET))(this);
		}

		::System::Int32 get_FlipbookFrameCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOJIICONCONFIG_GET_FLIPBOOKFRAMECOUNT_OFFSET))(this);
		}
	};
}

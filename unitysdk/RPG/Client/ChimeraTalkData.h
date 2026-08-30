#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraTalkContent; }
namespace System { class String; }

#define RPG_CLIENT_CHIMERATALKDATA_GET_CHIMERAID_OFFSET UNITYSDK_OFFSET(0x1B611560)
#define RPG_CLIENT_CHIMERATALKDATA_GET_EMOJIPATH_OFFSET UNITYSDK_OFFSET(0x1B6115A0)
#define RPG_CLIENT_CHIMERATALKDATA_GET_EVPATH_OFFSET UNITYSDK_OFFSET(0x1B6115E0)
#define RPG_CLIENT_CHIMERATALKDATA_GET_ISEMOJI_OFFSET UNITYSDK_OFFSET(0x1B611580)
#define RPG_CLIENT_CHIMERATALKDATA_GET_TALKCONTENT_OFFSET UNITYSDK_OFFSET(0x1B6115C0)
#define RPG_CLIENT_CHIMERATALKDATA_SET_CHIMERAID_OFFSET UNITYSDK_OFFSET(0x1B611570)
#define RPG_CLIENT_CHIMERATALKDATA_SET_EMOJIPATH_OFFSET UNITYSDK_OFFSET(0x1B6115B0)
#define RPG_CLIENT_CHIMERATALKDATA_SET_EVPATH_OFFSET UNITYSDK_OFFSET(0x1B6115F0)
#define RPG_CLIENT_CHIMERATALKDATA_SET_ISEMOJI_OFFSET UNITYSDK_OFFSET(0x1B611590)
#define RPG_CLIENT_CHIMERATALKDATA_SET_TALKCONTENT_OFFSET UNITYSDK_OFFSET(0x1B6115D0)
#define RPG_CLIENT_CHIMERATALKDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B602F80)
#define RPG_CLIENT_CHIMERATALKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B602F60)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraTalkData_TypeDefinitionIndex = 63562;

	class ChimeraTalkData : public ::System::Object
	{
	public:
		::System::String* _EmojiPath_k__BackingField; // 0x10
		::System::String* _EvPath_k__BackingField; // 0x18
		::RPG::Client::TextID _TalkContent_k__BackingField; // 0x20
		::System::Boolean _IsEmoji_k__BackingField; // 0x30
		::System::UInt32 _ChimeraID_k__BackingField; // 0x34

		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::ChimeraTalkContent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChimeraTalkContent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKDATA__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_ChimeraID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKDATA_GET_CHIMERAID_OFFSET))(this);
		}

		::System::Void set_ChimeraID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKDATA_SET_CHIMERAID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEmoji()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKDATA_GET_ISEMOJI_OFFSET))(this);
		}

		::System::Void set_IsEmoji(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKDATA_SET_ISEMOJI_OFFSET))(this, a1);
		}

		::System::String* get_EmojiPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKDATA_GET_EMOJIPATH_OFFSET))(this);
		}

		::System::Void set_EmojiPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKDATA_SET_EMOJIPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_TalkContent()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKDATA_GET_TALKCONTENT_OFFSET))(this);
		}

		::System::Void set_TalkContent(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKDATA_SET_TALKCONTENT_OFFSET))(this, a1);
		}

		::System::String* get_EvPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKDATA_GET_EVPATH_OFFSET))(this);
		}

		::System::Void set_EvPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKDATA_SET_EVPATH_OFFSET))(this, a1);
		}
	};
}

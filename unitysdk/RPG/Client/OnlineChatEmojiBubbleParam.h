#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_ONLINECHATEMOJIBUBBLEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0x191CF4E0)
#define RPG_CLIENT_ONLINECHATEMOJIBUBBLEPARAM_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x191CF4B0)
#define RPG_CLIENT_ONLINECHATEMOJIBUBBLEPARAM_GET_EMOJIICONPATH_OFFSET UNITYSDK_OFFSET(0x191CF490)
#define RPG_CLIENT_ONLINECHATEMOJIBUBBLEPARAM_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x191CF470)
#define RPG_CLIENT_ONLINECHATEMOJIBUBBLEPARAM_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x191CF4C0)
#define RPG_CLIENT_ONLINECHATEMOJIBUBBLEPARAM_SET_EMOJIICONPATH_OFFSET UNITYSDK_OFFSET(0x191CF4A0)
#define RPG_CLIENT_ONLINECHATEMOJIBUBBLEPARAM_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0x191CF480)
#define RPG_CLIENT_ONLINECHATEMOJIBUBBLEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x191CF4D0)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlineChatEmojiBubbleParam_TypeDefinitionIndex = 63013;

	class OnlineChatEmojiBubbleParam : public ::System::Object
	{
	public:
		::System::String* _EmojiIconPath_k__BackingField; // 0x10
		::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x18
		::System::Single _Duration_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECHATEMOJIBUBBLEPARAM__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECHATEMOJIBUBBLEPARAM_GET_ENTITY_OFFSET))(this);
		}

		::System::Void set_Entity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECHATEMOJIBUBBLEPARAM_SET_ENTITY_OFFSET))(this, a1);
		}

		::System::String* get_EmojiIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECHATEMOJIBUBBLEPARAM_GET_EMOJIICONPATH_OFFSET))(this);
		}

		::System::Void set_EmojiIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECHATEMOJIBUBBLEPARAM_SET_EMOJIICONPATH_OFFSET))(this, a1);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECHATEMOJIBUBBLEPARAM_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_Duration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECHATEMOJIBUBBLEPARAM_SET_DURATION_OFFSET))(this, a1);
		}

		static ::RPG::Client::OnlineChatEmojiBubbleParam* Create(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::RPG::Client::OnlineChatEmojiBubbleParam*(*)(::RPG::GameCore::GameEntity*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECHATEMOJIBUBBLEPARAM_CREATE_OFFSET))(a1, a2, a3);
		}
	};
}

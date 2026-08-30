#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EmojiIconAsset; }
namespace RPG::Client { class EmojiIconConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_CREATEFROMCONFIG_OFFSET UNITYSDK_OFFSET(0x1A29EF50)
#define RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_CREATEFROMPATHS_OFFSET UNITYSDK_OFFSET(0x1A29F0E0)
#define RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_GET_BGCONFIG_OFFSET UNITYSDK_OFFSET(0x1A29EEA0)
#define RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_GET_BUBBLEROLL_OFFSET UNITYSDK_OFFSET(0x1A29EE80)
#define RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1A29EE40)
#define RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x1A29EDE0)
#define RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_GET_ICONCONFIGS_OFFSET UNITYSDK_OFFSET(0x1A29EEC0)
#define RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_GET_ISVERTICAL_OFFSET UNITYSDK_OFFSET(0x1A29EE00)
#define RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_GET_POSITIONINDEX_OFFSET UNITYSDK_OFFSET(0x1A29EE20)
#define RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_GET_USEDUMMYPOSITION_OFFSET UNITYSDK_OFFSET(0x1A29EE60)
#define RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_LOADEMOJIICONASSET_OFFSET UNITYSDK_OFFSET(0x1A29F580)
#define RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_SET_BGCONFIG_OFFSET UNITYSDK_OFFSET(0x1A29EEB0)
#define RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_SET_BUBBLEROLL_OFFSET UNITYSDK_OFFSET(0x1A29EE90)
#define RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x1A29EE50)
#define RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0x1A29EDF0)
#define RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_SET_ICONCONFIGS_OFFSET UNITYSDK_OFFSET(0x1A29EED0)
#define RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_SET_ISVERTICAL_OFFSET UNITYSDK_OFFSET(0x1A29EE10)
#define RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_SET_POSITIONINDEX_OFFSET UNITYSDK_OFFSET(0x1A29EE30)
#define RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_SET_USEDUMMYPOSITION_OFFSET UNITYSDK_OFFSET(0x1A29EE70)
#define RPG_CLIENT_CREATEEMOJIBUBBLEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A29EEE0)

namespace RPG::Client
{
	inline static constexpr unsigned int CreateEmojiBubbleParam_TypeDefinitionIndex = 63009;

	class CreateEmojiBubbleParam : public ::System::Object
	{
	public:
		::RPG::Client::EmojiIconConfig* _BgConfig_k__BackingField; // 0x10
		::Il2CppArray<::RPG::Client::EmojiIconConfig*>* _IconConfigs_k__BackingField; // 0x18
		::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x20
		::System::Single _BubbleRoll_k__BackingField; // 0x28
		::System::Single _Duration_k__BackingField; // 0x2C
		::System::UInt32 _PositionIndex_k__BackingField; // 0x30
		::System::Boolean _UseDummyPosition_k__BackingField; // 0x34
		::System::Boolean _IsVertical_k__BackingField; // 0x35

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEEMOJIBUBBLEPARAM__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_GET_ENTITY_OFFSET))(this);
		}

		::System::Void set_Entity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_SET_ENTITY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsVertical()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_GET_ISVERTICAL_OFFSET))(this);
		}

		::System::Void set_IsVertical(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_SET_ISVERTICAL_OFFSET))(this, a1);
		}

		::System::UInt32 get_PositionIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_GET_POSITIONINDEX_OFFSET))(this);
		}

		::System::Void set_PositionIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_SET_POSITIONINDEX_OFFSET))(this, a1);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_Duration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_SET_DURATION_OFFSET))(this, a1);
		}

		::System::Boolean get_UseDummyPosition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_GET_USEDUMMYPOSITION_OFFSET))(this);
		}

		::System::Void set_UseDummyPosition(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_SET_USEDUMMYPOSITION_OFFSET))(this, a1);
		}

		::System::Single get_BubbleRoll()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_GET_BUBBLEROLL_OFFSET))(this);
		}

		::System::Void set_BubbleRoll(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_SET_BUBBLEROLL_OFFSET))(this, a1);
		}

		::RPG::Client::EmojiIconConfig* get_BgConfig()
		{
			return ((::RPG::Client::EmojiIconConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_GET_BGCONFIG_OFFSET))(this);
		}

		::System::Void set_BgConfig(::RPG::Client::EmojiIconConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EmojiIconConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_SET_BGCONFIG_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::Client::EmojiIconConfig*>* get_IconConfigs()
		{
			return ((::Il2CppArray<::RPG::Client::EmojiIconConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_GET_ICONCONFIGS_OFFSET))(this);
		}

		::System::Void set_IconConfigs(::Il2CppArray<::RPG::Client::EmojiIconConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::EmojiIconConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_SET_ICONCONFIGS_OFFSET))(this, a1);
		}

		static ::RPG::Client::CreateEmojiBubbleParam* CreateFromConfig(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Single a4, ::RPG::Client::EmojiIconConfig* a5, ::Il2CppArray<::RPG::Client::EmojiIconConfig*>* a6)
		{
			return ((::RPG::Client::CreateEmojiBubbleParam*(*)(::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::Boolean, ::System::Single, ::RPG::Client::EmojiIconConfig*, ::Il2CppArray<::RPG::Client::EmojiIconConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_CREATEFROMCONFIG_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::RPG::Client::CreateEmojiBubbleParam* CreateFromPaths(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Single a4, ::System::String* a5, ::Il2CppArray<::System::String*>* a6)
		{
			return ((::RPG::Client::CreateEmojiBubbleParam*(*)(::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::Boolean, ::System::Single, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_CREATEFROMPATHS_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::RPG::Client::EmojiIconAsset* LoadEmojiIconAsset(::System::String* a1)
		{
			return ((::RPG::Client::EmojiIconAsset*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_LOADEMOJIICONASSET_OFFSET))(a1);
		}
	};
}

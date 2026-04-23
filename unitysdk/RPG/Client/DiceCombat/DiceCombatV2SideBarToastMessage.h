#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatV2SideBarToastMessage_MessageType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTMESSAGE_CREATE_OFFSET UNITYSDK_OFFSET(0xA15AC40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTMESSAGE_GET_PARAM_OFFSET UNITYSDK_OFFSET(0xA15AD00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTMESSAGE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA15ACE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTMESSAGE_SET_PARAM_OFFSET UNITYSDK_OFFSET(0xA15AD10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTMESSAGE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xA15ACF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA15ACD0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2SideBarToastMessage_TypeDefinitionIndex = 69972;

	class DiceCombatV2SideBarToastMessage : public ::System::Object
	{
	public:
		::System::Object* _Param_k__BackingField; // 0x10
		::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage_MessageType _Type_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTMESSAGE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage* Create(::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage_MessageType messageType, ::System::Object* param)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage*(*)(::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage_MessageType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTMESSAGE_CREATE_OFFSET))(messageType, param);
		}

		::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage_MessageType get_Type()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage_MessageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTMESSAGE_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage_MessageType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage_MessageType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTMESSAGE_SET_TYPE_OFFSET))(this, value);
		}

		::System::Object* get_Param()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTMESSAGE_GET_PARAM_OFFSET))(this);
		}

		::System::Void set_Param(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTMESSAGE_SET_PARAM_OFFSET))(this, value);
		}
	};
}

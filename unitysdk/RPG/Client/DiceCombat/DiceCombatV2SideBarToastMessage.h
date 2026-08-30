#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatV2SideBarToastMessage_MessageType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTMESSAGE_CREATE_OFFSET UNITYSDK_OFFSET(0x1B8C1330)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTMESSAGE_GET_PARAM_OFFSET UNITYSDK_OFFSET(0x1B8C13F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTMESSAGE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B8C13D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTMESSAGE_SET_PARAM_OFFSET UNITYSDK_OFFSET(0x1B8C1400)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTMESSAGE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B8C13E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8C13C0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2SideBarToastMessage_TypeDefinitionIndex = 75733;

	class DiceCombatV2SideBarToastMessage : public ::System::Object
	{
	public:
		::System::Object* _Param_k__BackingField; // 0x10
		::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage_MessageType _Type_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTMESSAGE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage* Create(::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage_MessageType a1, ::System::Object* a2)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage*(*)(::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage_MessageType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTMESSAGE_CREATE_OFFSET))(a1, a2);
		}

		::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage_MessageType get_Type()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage_MessageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTMESSAGE_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage_MessageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage_MessageType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTMESSAGE_SET_TYPE_OFFSET))(this, a1);
		}

		::System::Object* get_Param()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTMESSAGE_GET_PARAM_OFFSET))(this);
		}

		::System::Void set_Param(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTMESSAGE_SET_PARAM_OFFSET))(this, a1);
		}
	};
}

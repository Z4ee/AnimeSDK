#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingPrivilegeRow; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGPRIVILEGE_GETDESC_OFFSET UNITYSDK_OFFSET(0x935A270)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_ACTIVATED_OFFSET UNITYSDK_OFFSET(0x935A340)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_COST_OFFSET UNITYSDK_OFFSET(0x935A360)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_EFFECTID_OFFSET UNITYSDK_OFFSET(0x935A3A0)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x935A400)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_ID_OFFSET UNITYSDK_OFFSET(0x935A320)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x935A3C0)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_NEXTIDLIST_OFFSET UNITYSDK_OFFSET(0x935A380)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0x935A3E0)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_ACTIVATED_OFFSET UNITYSDK_OFFSET(0x935A350)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_COST_OFFSET UNITYSDK_OFFSET(0x935A370)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_EFFECTID_OFFSET UNITYSDK_OFFSET(0x935A3B0)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x935A410)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_ID_OFFSET UNITYSDK_OFFSET(0x935A330)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x935A3D0)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_NEXTIDLIST_OFFSET UNITYSDK_OFFSET(0x935A390)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0x935A3F0)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SYNCACTIVATED_OFFSET UNITYSDK_OFFSET(0x935A220)
#define RPG_CLIENT_CHENLINGPRIVILEGE__CTOR_OFFSET UNITYSDK_OFFSET(0x935A1D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingPrivilege_TypeDefinitionIndex = 49846;

	class ChenLingPrivilege : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _NextIDList_k__BackingField; // 0x18
		::System::UInt32 _EffectID_k__BackingField; // 0x20
		::System::UInt32 _Cost_k__BackingField; // 0x24
		::System::UInt32 _ID_k__BackingField; // 0x28
		::System::Boolean _Activated_k__BackingField; // 0x2C
		::RPG::Client::TextID _Name_k__BackingField; // 0x30
		::RPG::Client::TextID _SkillDesc_k__BackingField; // 0x40

		::System::Void _ctor(::RPG::GameCore::ChenLingPrivilegeRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingPrivilegeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE__CTOR_OFFSET))(this, row);
		}

		::System::Void SyncActivated(::System::Boolean activated)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_SYNCACTIVATED_OFFSET))(this, activated);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_GETDESC_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_SET_ID_OFFSET))(this, value);
		}

		::System::Boolean get_Activated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_GET_ACTIVATED_OFFSET))(this);
		}

		::System::Void set_Activated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_SET_ACTIVATED_OFFSET))(this, value);
		}

		::System::UInt32 get_Cost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_GET_COST_OFFSET))(this);
		}

		::System::Void set_Cost(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_SET_COST_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_NextIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_GET_NEXTIDLIST_OFFSET))(this);
		}

		::System::Void set_NextIDList(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_SET_NEXTIDLIST_OFFSET))(this, value);
		}

		::System::UInt32 get_EffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_GET_EFFECTID_OFFSET))(this);
		}

		::System::Void set_EffectID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_SET_EFFECTID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_SET_NAME_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_SkillDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_GET_SKILLDESC_OFFSET))(this);
		}

		::System::Void set_SkillDesc(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_SET_SKILLDESC_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_SET_ICONPATH_OFFSET))(this, value);
		}
	};
}

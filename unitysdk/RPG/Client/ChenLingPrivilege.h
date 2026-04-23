#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingPrivilegeRow; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGPRIVILEGE_GETDESC_OFFSET UNITYSDK_OFFSET(0x9FC8020)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_ACTIVATED_OFFSET UNITYSDK_OFFSET(0x9FC80F0)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_COST_OFFSET UNITYSDK_OFFSET(0x9FC8110)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_EFFECTID_OFFSET UNITYSDK_OFFSET(0x9FC8150)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9FC81B0)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_ID_OFFSET UNITYSDK_OFFSET(0x9FC80D0)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9FC8170)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_NEXTIDLIST_OFFSET UNITYSDK_OFFSET(0x9FC8130)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0x9FC8190)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_ACTIVATED_OFFSET UNITYSDK_OFFSET(0x9FC8100)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_COST_OFFSET UNITYSDK_OFFSET(0x9FC8120)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_EFFECTID_OFFSET UNITYSDK_OFFSET(0x9FC8160)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9FC81C0)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_ID_OFFSET UNITYSDK_OFFSET(0x9FC80E0)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9FC8180)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_NEXTIDLIST_OFFSET UNITYSDK_OFFSET(0x9FC8140)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0x9FC81A0)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SYNCACTIVATED_OFFSET UNITYSDK_OFFSET(0x9FC7FD0)
#define RPG_CLIENT_CHENLINGPRIVILEGE__CTOR_OFFSET UNITYSDK_OFFSET(0x9FC7F80)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingPrivilege_TypeDefinitionIndex = 56668;

	class ChenLingPrivilege : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _NextIDList_k__BackingField; // 0x18
		::RPG::Client::TextID _SkillDesc_k__BackingField; // 0x20
		::RPG::Client::TextID _Name_k__BackingField; // 0x30
		::System::UInt32 _ID_k__BackingField; // 0x40
		::System::Boolean _Activated_k__BackingField; // 0x44
		::System::UInt32 _EffectID_k__BackingField; // 0x48
		::System::UInt32 _Cost_k__BackingField; // 0x4C

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

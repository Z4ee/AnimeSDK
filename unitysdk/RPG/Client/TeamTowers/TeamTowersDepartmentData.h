#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSDEPARTMENTDATA_GET_DEPARTMENTID_OFFSET UNITYSDK_OFFSET(0xE1AA560)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSDEPARTMENTDATA_GET_HASPASSEDALLSUBSTAGEGROUPS_OFFSET UNITYSDK_OFFSET(0xE1AA5C0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSDEPARTMENTDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xE1AA5E0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSDEPARTMENTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xE1AA580)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSDEPARTMENTDATA_GET_STAGEGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0xE1AA5A0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSDEPARTMENTDATA_SET_DEPARTMENTID_OFFSET UNITYSDK_OFFSET(0xE1AA570)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSDEPARTMENTDATA_SET_HASPASSEDALLSUBSTAGEGROUPS_OFFSET UNITYSDK_OFFSET(0xE1AA5D0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSDEPARTMENTDATA_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xE1AA5F0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSDEPARTMENTDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0xE1AA590)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSDEPARTMENTDATA_SET_STAGEGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0xE1AA5B0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSDEPARTMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE1AA600)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersDepartmentData_TypeDefinitionIndex = 78559;

	class TeamTowersDepartmentData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _StageGroupIDList_k__BackingField; // 0x10
		::System::Boolean _HasPassedAllSubStageGroups_k__BackingField; // 0x18
		::System::Boolean _IsUnlocked_k__BackingField; // 0x19
		::System::UInt32 _DepartmentID_k__BackingField; // 0x1C
		::RPG::Client::TextID _Name_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSDEPARTMENTDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_DepartmentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSDEPARTMENTDATA_GET_DEPARTMENTID_OFFSET))(this);
		}

		::System::Void set_DepartmentID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSDEPARTMENTDATA_SET_DEPARTMENTID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSDEPARTMENTDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSDEPARTMENTDATA_SET_NAME_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_StageGroupIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSDEPARTMENTDATA_GET_STAGEGROUPIDLIST_OFFSET))(this);
		}

		::System::Void set_StageGroupIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSDEPARTMENTDATA_SET_STAGEGROUPIDLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_HasPassedAllSubStageGroups()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSDEPARTMENTDATA_GET_HASPASSEDALLSUBSTAGEGROUPS_OFFSET))(this);
		}

		::System::Void set_HasPassedAllSubStageGroups(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSDEPARTMENTDATA_SET_HASPASSEDALLSUBSTAGEGROUPS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSDEPARTMENTDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSDEPARTMENTDATA_SET_ISUNLOCKED_OFFSET))(this, a1);
		}
	};
}

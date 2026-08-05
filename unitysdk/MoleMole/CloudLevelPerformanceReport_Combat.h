#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CLOUDLEVELPERFORMANCEREPORT_COMBAT_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0x134E7210)
#define MOLEMOLE_CLOUDLEVELPERFORMANCEREPORT_COMBAT_GET_SCENENAME_OFFSET UNITYSDK_OFFSET(0x134E71F0)
#define MOLEMOLE_CLOUDLEVELPERFORMANCEREPORT_COMBAT_METHOD_1_2A887DFC7A5BB2CB_OFFSET UNITYSDK_OFFSET(0x134E7230)
#define MOLEMOLE_CLOUDLEVELPERFORMANCEREPORT_COMBAT_METHOD_1_64090C0E8BCAD89E_OFFSET UNITYSDK_OFFSET(0x134E76E0)
#define MOLEMOLE_CLOUDLEVELPERFORMANCEREPORT_COMBAT_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0x134E7220)
#define MOLEMOLE_CLOUDLEVELPERFORMANCEREPORT_COMBAT_SET_SCENENAME_OFFSET UNITYSDK_OFFSET(0x134E7200)
#define MOLEMOLE_CLOUDLEVELPERFORMANCEREPORT_COMBAT__CTOR_OFFSET UNITYSDK_OFFSET(0x134E7850)

namespace MoleMole
{
	inline static constexpr unsigned int CloudLevelPerformanceReport_Combat_TypeDefinitionIndex = 52831;

	class CloudLevelPerformanceReport_Combat : public ::System::Object
	{
	public:
		::System::String* _SceneName_k__BackingField; // 0x10
		::System::Int32 _LevelID_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* AvatarTemplateID; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* BuddyTemplateID; // 0x28
		::System::Int32 EndFightType; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* MonsterTemplateID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDLEVELPERFORMANCEREPORT_COMBAT__CTOR_OFFSET))(this);
		}

		::System::String* get_SceneName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDLEVELPERFORMANCEREPORT_COMBAT_GET_SCENENAME_OFFSET))(this);
		}

		::System::Void set_SceneName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDLEVELPERFORMANCEREPORT_COMBAT_SET_SCENENAME_OFFSET))(this, a1);
		}

		::System::Int32 get_LevelID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDLEVELPERFORMANCEREPORT_COMBAT_GET_LEVELID_OFFSET))(this);
		}

		::System::Void set_LevelID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDLEVELPERFORMANCEREPORT_COMBAT_SET_LEVELID_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_2A887DFC7A5BB2CB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDLEVELPERFORMANCEREPORT_COMBAT_METHOD_1_2A887DFC7A5BB2CB_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* Method_1_64090C0E8BCAD89E()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDLEVELPERFORMANCEREPORT_COMBAT_METHOD_1_64090C0E8BCAD89E_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_22;
namespace RPG::Client::ChenLingBattle { class Policy; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASEINFO_GET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0xCB11CC0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASEINFO_GET_SELECTABLEPOLICIES_OFFSET UNITYSDK_OFFSET(0xCB11CA0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASEINFO_SET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0xCB11CD0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASEINFO_SET_SELECTABLEPOLICIES_OFFSET UNITYSDK_OFFSET(0xCB11CB0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCB11700)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SelectPolicyPhaseInfo_TypeDefinitionIndex = 75917;

	class SelectPolicyPhaseInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Policy*>* _SelectablePolicies_k__BackingField; // 0x10
		::System::UInt32 _RefreshCost_k__BackingField; // 0x18

		::System::Void _ctor(::Class_1_45BB92167AED63A0_22* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_22*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASEINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Policy*>* get_SelectablePolicies()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Policy*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASEINFO_GET_SELECTABLEPOLICIES_OFFSET))(this);
		}

		::System::Void set_SelectablePolicies(::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Policy*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Policy*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASEINFO_SET_SELECTABLEPOLICIES_OFFSET))(this, a1);
		}

		::System::UInt32 get_RefreshCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASEINFO_GET_REFRESHCOST_OFFSET))(this);
		}

		::System::Void set_RefreshCost(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASEINFO_SET_REFRESHCOST_OFFSET))(this, a1);
		}
	};
}

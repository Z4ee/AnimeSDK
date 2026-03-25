#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_735612C94F558EAE_15;
namespace RPG::Client::ChenLingBattle { class Policy; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASEINFO_GET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0x9341990)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASEINFO_GET_SELECTABLEPOLICIES_OFFSET UNITYSDK_OFFSET(0x9341970)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASEINFO_SET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0x93419A0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASEINFO_SET_SELECTABLEPOLICIES_OFFSET UNITYSDK_OFFSET(0x9341980)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x93237C0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SelectPolicyPhaseInfo_TypeDefinitionIndex = 62156;

	class SelectPolicyPhaseInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Policy*>* _SelectablePolicies_k__BackingField; // 0x10
		::System::UInt32 _RefreshCost_k__BackingField; // 0x18

		::System::Void _ctor(::Class_1_735612C94F558EAE_15* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_15*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASEINFO__CTOR_OFFSET))(this, info);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Policy*>* get_SelectablePolicies()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Policy*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASEINFO_GET_SELECTABLEPOLICIES_OFFSET))(this);
		}

		::System::Void set_SelectablePolicies(::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Policy*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Policy*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASEINFO_SET_SELECTABLEPOLICIES_OFFSET))(this, value);
		}

		::System::UInt32 get_RefreshCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASEINFO_GET_REFRESHCOST_OFFSET))(this);
		}

		::System::Void set_RefreshCost(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASEINFO_SET_REFRESHCOST_OFFSET))(this, value);
		}
	};
}

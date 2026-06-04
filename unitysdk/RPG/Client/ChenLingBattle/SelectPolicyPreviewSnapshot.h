#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/PreviewSnapshot.h"

namespace RPG::Client::ChenLingBattle { class SelectPolicyPhaseInfo; }

#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPREVIEWSNAPSHOT_CREATESELECTPOLICYSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xB5C9C00)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPREVIEWSNAPSHOT_GET_PHASEINFO_OFFSET UNITYSDK_OFFSET(0xB5C9C90)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPREVIEWSNAPSHOT_SET_PHASEINFO_OFFSET UNITYSDK_OFFSET(0xB5C9CA0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPREVIEWSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0xB5C9C80)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SelectPolicyPreviewSnapshot_TypeDefinitionIndex = 70869;

	class SelectPolicyPreviewSnapshot : public ::RPG::Client::ChenLingBattle::PreviewSnapshot
	{
	public:
		::RPG::Client::ChenLingBattle::SelectPolicyPhaseInfo* _PhaseInfo_k__BackingField; // 0x18

		::System::Void _ctor(::System::Int32 a1, ::RPG::Client::ChenLingBattle::SelectPolicyPhaseInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::ChenLingBattle::SelectPolicyPhaseInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPREVIEWSNAPSHOT__CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::ChenLingBattle::SelectPolicyPreviewSnapshot* CreateSelectPolicySnapshot(::System::Int32 a1, ::RPG::Client::ChenLingBattle::SelectPolicyPhaseInfo* a2)
		{
			return ((::RPG::Client::ChenLingBattle::SelectPolicyPreviewSnapshot*(*)(::System::Int32, ::RPG::Client::ChenLingBattle::SelectPolicyPhaseInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPREVIEWSNAPSHOT_CREATESELECTPOLICYSNAPSHOT_OFFSET))(a1, a2);
		}

		::RPG::Client::ChenLingBattle::SelectPolicyPhaseInfo* get_PhaseInfo()
		{
			return ((::RPG::Client::ChenLingBattle::SelectPolicyPhaseInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPREVIEWSNAPSHOT_GET_PHASEINFO_OFFSET))(this);
		}

		::System::Void set_PhaseInfo(::RPG::Client::ChenLingBattle::SelectPolicyPhaseInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::SelectPolicyPhaseInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPREVIEWSNAPSHOT_SET_PHASEINFO_OFFSET))(this, a1);
		}
	};
}

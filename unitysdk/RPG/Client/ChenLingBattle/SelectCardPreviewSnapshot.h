#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/PreviewSnapshot.h"

namespace RPG::Client::ChenLingBattle { class SelectCardPhaseInfo; }

#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPREVIEWSNAPSHOT_CREATESELECTCARDSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xCB0F7A0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPREVIEWSNAPSHOT_GET_PHASEINFO_OFFSET UNITYSDK_OFFSET(0xCB0F830)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPREVIEWSNAPSHOT_SET_PHASEINFO_OFFSET UNITYSDK_OFFSET(0xCB0F840)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPREVIEWSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0xCB0F820)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SelectCardPreviewSnapshot_TypeDefinitionIndex = 75818;

	class SelectCardPreviewSnapshot : public ::RPG::Client::ChenLingBattle::PreviewSnapshot
	{
	public:
		::RPG::Client::ChenLingBattle::SelectCardPhaseInfo* _PhaseInfo_k__BackingField; // 0x18

		::System::Void _ctor(::System::Int32 a1, ::RPG::Client::ChenLingBattle::SelectCardPhaseInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::ChenLingBattle::SelectCardPhaseInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPREVIEWSNAPSHOT__CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::ChenLingBattle::SelectCardPreviewSnapshot* CreateSelectCardSnapshot(::System::Int32 a1, ::RPG::Client::ChenLingBattle::SelectCardPhaseInfo* a2)
		{
			return ((::RPG::Client::ChenLingBattle::SelectCardPreviewSnapshot*(*)(::System::Int32, ::RPG::Client::ChenLingBattle::SelectCardPhaseInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPREVIEWSNAPSHOT_CREATESELECTCARDSNAPSHOT_OFFSET))(a1, a2);
		}

		::RPG::Client::ChenLingBattle::SelectCardPhaseInfo* get_PhaseInfo()
		{
			return ((::RPG::Client::ChenLingBattle::SelectCardPhaseInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPREVIEWSNAPSHOT_GET_PHASEINFO_OFFSET))(this);
		}

		::System::Void set_PhaseInfo(::RPG::Client::ChenLingBattle::SelectCardPhaseInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::SelectCardPhaseInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPREVIEWSNAPSHOT_SET_PHASEINFO_OFFSET))(this, a1);
		}
	};
}

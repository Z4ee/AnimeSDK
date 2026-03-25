#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/PreviewSnapshot.h"

namespace RPG::Client::ChenLingBattle { class SelectCardPhaseInfo; }

#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPREVIEWSNAPSHOT_CREATESELECTCARDSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x933FB50)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPREVIEWSNAPSHOT_GET_PHASEINFO_OFFSET UNITYSDK_OFFSET(0x933FBE0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPREVIEWSNAPSHOT_SET_PHASEINFO_OFFSET UNITYSDK_OFFSET(0x933FBF0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPREVIEWSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x933FBD0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SelectCardPreviewSnapshot_TypeDefinitionIndex = 62057;

	class SelectCardPreviewSnapshot : public ::RPG::Client::ChenLingBattle::PreviewSnapshot
	{
	public:
		::RPG::Client::ChenLingBattle::SelectCardPhaseInfo* _PhaseInfo_k__BackingField; // 0x18

		::System::Void _ctor(::System::Int32 currentSelectCardIndex, ::RPG::Client::ChenLingBattle::SelectCardPhaseInfo* phaseInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::ChenLingBattle::SelectCardPhaseInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPREVIEWSNAPSHOT__CTOR_OFFSET))(this, currentSelectCardIndex, phaseInfo);
		}

		static ::RPG::Client::ChenLingBattle::SelectCardPreviewSnapshot* CreateSelectCardSnapshot(::System::Int32 currentSelectCardIndex, ::RPG::Client::ChenLingBattle::SelectCardPhaseInfo* phaseInfo)
		{
			return ((::RPG::Client::ChenLingBattle::SelectCardPreviewSnapshot*(*)(::System::Int32, ::RPG::Client::ChenLingBattle::SelectCardPhaseInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPREVIEWSNAPSHOT_CREATESELECTCARDSNAPSHOT_OFFSET))(currentSelectCardIndex, phaseInfo);
		}

		::RPG::Client::ChenLingBattle::SelectCardPhaseInfo* get_PhaseInfo()
		{
			return ((::RPG::Client::ChenLingBattle::SelectCardPhaseInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPREVIEWSNAPSHOT_GET_PHASEINFO_OFFSET))(this);
		}

		::System::Void set_PhaseInfo(::RPG::Client::ChenLingBattle::SelectCardPhaseInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::SelectCardPhaseInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPREVIEWSNAPSHOT_SET_PHASEINFO_OFFSET))(this, value);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatV2BattleResultInfo.h"

namespace Proto { class Item; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::DiceCombat { class DiceCombatV2PvEStage; }
namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLERESULTINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x1B8BAE80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLERESULTINFO_GET_REWARDITEMS_OFFSET UNITYSDK_OFFSET(0x1B8BC4A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLERESULTINFO_SET_REWARDITEMS_OFFSET UNITYSDK_OFFSET(0x1B8BC4B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLERESULTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8BC4C0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2PvEBattleResultInfo_TypeDefinitionIndex = 75667;

	class DiceCombatV2PvEBattleResultInfo : public ::RPG::Client::DiceCombat::DiceCombatV2BattleResultInfo
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ItemDisplayData*>* _RewardItems_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLERESULTINFO__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ItemDisplayData*>* get_RewardItems()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLERESULTINFO_GET_REWARDITEMS_OFFSET))(this);
		}

		::System::Void set_RewardItems(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ItemDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLERESULTINFO_SET_REWARDITEMS_OFFSET))(this, a1);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2PvEBattleResultInfo* Create(::System::Boolean a1, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a2, ::RPG::Client::DiceCombat::DiceCombatV2PvEStage* a3, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a4, ::System::Collections::Generic::IEnumerable_1<::Proto::Item*>* a5)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2PvEBattleResultInfo*(*)(::System::Boolean, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*, ::RPG::Client::DiceCombat::DiceCombatV2PvEStage*, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*, ::System::Collections::Generic::IEnumerable_1<::Proto::Item*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLERESULTINFO_CREATE_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TreasureChallengeTargetStatus.h"
#include "unitysdk/System/Object.h"

class Class_1_DAA5A9E9FAA73ED5;
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class TreasureChallengeSettlementExtensionData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TREASURECHALLENGESETTLEMENT_CREATESETTLEMENT_OFFSET UNITYSDK_OFFSET(0xA62AEB0)
#define RPG_CLIENT_TREASURECHALLENGESETTLEMENT_GET_EXTENSIONDATA_OFFSET UNITYSDK_OFFSET(0xA62B380)
#define RPG_CLIENT_TREASURECHALLENGESETTLEMENT_SET_EXTENSIONDATA_OFFSET UNITYSDK_OFFSET(0xA62B390)
#define RPG_CLIENT_TREASURECHALLENGESETTLEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA62B170)
#define RPG_CLIENT_TREASURECHALLENGESETTLEMENT__TRYCREATEEXTENSIONDATA_OFFSET UNITYSDK_OFFSET(0xA62B250)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureChallengeSettlement_TypeDefinitionIndex = 54340;

	class TreasureChallengeSettlement : public ::System::Object
	{
	public:
		::RPG::Client::TreasureChallengeSettlementExtensionData* _ExtensionData_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>* CurrentRaidStatus; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>* PreviousRaidStatus; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* Items; // 0x28
		::System::Boolean IsNextLevelUnlocked; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGESETTLEMENT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TreasureChallengeSettlement* CreateSettlement(::Class_1_DAA5A9E9FAA73ED5* ntf)
		{
			return ((::RPG::Client::TreasureChallengeSettlement*(*)(::Class_1_DAA5A9E9FAA73ED5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGESETTLEMENT_CREATESETTLEMENT_OFFSET))(ntf);
		}

		::System::Void _TryCreateExtensionData(::Class_1_DAA5A9E9FAA73ED5* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DAA5A9E9FAA73ED5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGESETTLEMENT__TRYCREATEEXTENSIONDATA_OFFSET))(this, ntf);
		}

		::RPG::Client::TreasureChallengeSettlementExtensionData* get_ExtensionData()
		{
			return ((::RPG::Client::TreasureChallengeSettlementExtensionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGESETTLEMENT_GET_EXTENSIONDATA_OFFSET))(this);
		}

		::System::Void set_ExtensionData(::RPG::Client::TreasureChallengeSettlementExtensionData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TreasureChallengeSettlementExtensionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGESETTLEMENT_SET_EXTENSIONDATA_OFFSET))(this, value);
		}
	};
}

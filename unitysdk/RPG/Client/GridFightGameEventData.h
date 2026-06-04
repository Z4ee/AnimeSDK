#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_768;
namespace RPG::Client { class GridFightAugmentChangeCollector; }
namespace RPG::Client { class GridFightConsumableChangeCollector; }
namespace RPG::Client { class GridFightEquipChangeCollector; }
namespace RPG::Client { class GridFightForgeChangeCollector; }
namespace RPG::Client { class GridFightNPCChangeCollector; }
namespace RPG::Client { class GridFightOrbChangeCollector; }
namespace RPG::Client { class GridFightPlayerChangeCollector; }
namespace RPG::Client { class GridFightProjectionChangeCollector; }
namespace RPG::Client { class GridFightRoleChangeCollector; }
namespace RPG::Client { class GridFightShopChangeCollector; }
namespace RPG::Client { class GridFightStageChangeCollector; }
namespace RPG::Client { class GridFightTrackChangeCollector; }
namespace RPG::Client { class GridFightTraitChangeCollector; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEEVENTDATA_DISPATCH_OFFSET UNITYSDK_OFFSET(0xBB48230)
#define RPG_CLIENT_GRIDFIGHTGAMEEVENTDATA_GETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xBB48290)
#define RPG_CLIENT_GRIDFIGHTGAMEEVENTDATA_REGISTERCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xBB48370)
#define RPG_CLIENT_GRIDFIGHTGAMEEVENTDATA_RESET_OFFSET UNITYSDK_OFFSET(0xBB47FB0)
#define RPG_CLIENT_GRIDFIGHTGAMEEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBB47BA0)
#define RPG_CLIENT_GRIDFIGHTGAMEEVENTDATA__INITDATACHANGECOLLECTOR_OFFSET UNITYSDK_OFFSET(0xBB47E40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameEventData_TypeDefinitionIndex = 60343;

	class GridFightGameEventData : public ::System::Object
	{
	public:
		// static const ::System::String* COLLECTOR_DATATYPE_EQUIP; // 0x0
		// static const ::System::String* COLLECTOR_DATATYPE_CONSUMABLE; // 0x0
		// static const ::System::String* COLLECTOR_DATATYPE_FORGE; // 0x0
		// static const ::System::String* COLLECTOR_DATATYPE_ORB; // 0x0
		// static const ::System::String* COLLECTOR_DATATYPE_ROLE; // 0x0
		// static const ::System::String* COLLECTOR_DATATYPE_TRAIT; // 0x0
		// static const ::System::String* COLLECTOR_DATATYPE_AUGMENT; // 0x0
		// static const ::System::String* COLLECTOR_DATATYPE_PLAYER; // 0x0
		// static const ::System::String* COLLECTOR_DATATYPE_STAGE; // 0x0
		// static const ::System::String* COLLECTOR_DATATYPE_SHOP; // 0x0
		// static const ::System::String* COLLECTOR_DATATYPE_NPC; // 0x0
		// static const ::System::String* COLLECTOR_DATATYPE_PROJ; // 0x0
		// static const ::System::String* COLLECTOR_DATATYPE_TRACK; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_768*>* _CollectorsLUT; // 0x10
		::RPG::Client::GridFightTrackChangeCollector* TrackData; // 0x18
		::RPG::Client::GridFightConsumableChangeCollector* ConsumableData; // 0x20
		::RPG::Client::GridFightProjectionChangeCollector* ProjData; // 0x28
		::RPG::Client::GridFightNPCChangeCollector* NPCData; // 0x30
		::RPG::Client::GridFightPlayerChangeCollector* PlayerData; // 0x38
		::RPG::Client::GridFightShopChangeCollector* ShopData; // 0x40
		::RPG::Client::GridFightStageChangeCollector* StageData; // 0x48
		::RPG::Client::GridFightOrbChangeCollector* OrbData; // 0x50
		::RPG::Client::GridFightForgeChangeCollector* ForgeData; // 0x58
		::RPG::Client::GridFightTraitChangeCollector* TraitData; // 0x60
		::RPG::Client::GridFightEquipChangeCollector* EquipData; // 0x68
		::RPG::Client::GridFightRoleChangeCollector* RoleData; // 0x70
		::RPG::Client::GridFightAugmentChangeCollector* AugmentData; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEEVENTDATA__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEEVENTDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEEVENTDATA_DISPATCH_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_768* GetCollector(::System::String* a1)
		{
			return ((::Class_0_16E4307DCC419505_768*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEEVENTDATA_GETCOLLECTOR_OFFSET))(this, a1);
		}

		::System::Void RegisterCollector(::System::String* a1, ::Class_0_16E4307DCC419505_768* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_768*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEEVENTDATA_REGISTERCOLLECTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _InitDataChangeCollector()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEEVENTDATA__INITDATACHANGECOLLECTOR_OFFSET))(this);
		}
	};
}

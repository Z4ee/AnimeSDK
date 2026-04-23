#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_717;
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

#define RPG_CLIENT_GRIDFIGHTGAMEEVENTDATA_DISPATCH_OFFSET UNITYSDK_OFFSET(0xA4A7250)
#define RPG_CLIENT_GRIDFIGHTGAMEEVENTDATA_GETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xA4A72B0)
#define RPG_CLIENT_GRIDFIGHTGAMEEVENTDATA_REGISTERCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xA4A73A0)
#define RPG_CLIENT_GRIDFIGHTGAMEEVENTDATA_RESET_OFFSET UNITYSDK_OFFSET(0xA4A6FD0)
#define RPG_CLIENT_GRIDFIGHTGAMEEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA4A6BC0)
#define RPG_CLIENT_GRIDFIGHTGAMEEVENTDATA__INITDATACHANGECOLLECTOR_OFFSET UNITYSDK_OFFSET(0xA4A6E60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameEventData_TypeDefinitionIndex = 59408;

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
		::RPG::Client::GridFightPlayerChangeCollector* PlayerData; // 0x10
		::RPG::Client::GridFightEquipChangeCollector* EquipData; // 0x18
		::RPG::Client::GridFightAugmentChangeCollector* AugmentData; // 0x20
		::RPG::Client::GridFightTrackChangeCollector* TrackData; // 0x28
		::RPG::Client::GridFightRoleChangeCollector* RoleData; // 0x30
		::RPG::Client::GridFightTraitChangeCollector* TraitData; // 0x38
		::RPG::Client::GridFightStageChangeCollector* StageData; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_717*>* _CollectorsLUT; // 0x48
		::RPG::Client::GridFightShopChangeCollector* ShopData; // 0x50
		::RPG::Client::GridFightConsumableChangeCollector* ConsumableData; // 0x58
		::RPG::Client::GridFightForgeChangeCollector* ForgeData; // 0x60
		::RPG::Client::GridFightProjectionChangeCollector* ProjData; // 0x68
		::RPG::Client::GridFightNPCChangeCollector* NPCData; // 0x70
		::RPG::Client::GridFightOrbChangeCollector* OrbData; // 0x78

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

		::Class_0_16E4307DCC419505_717* GetCollector(::System::String* dataType)
		{
			return ((::Class_0_16E4307DCC419505_717*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEEVENTDATA_GETCOLLECTOR_OFFSET))(this, dataType);
		}

		::System::Void RegisterCollector(::System::String* dataType, ::Class_0_16E4307DCC419505_717* collector)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_717*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEEVENTDATA_REGISTERCOLLECTOR_OFFSET))(this, dataType, collector);
		}

		::System::Void _InitDataChangeCollector()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEEVENTDATA__INITDATACHANGECOLLECTOR_OFFSET))(this);
		}
	};
}

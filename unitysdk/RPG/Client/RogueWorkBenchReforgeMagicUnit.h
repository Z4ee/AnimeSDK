#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncType.h"
#include "unitysdk/System/Object.h"

class Class_1_7DCEBB69B8853415;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEWORKBENCHREFORGEMAGICUNIT_GETCOSTNUM_OFFSET UNITYSDK_OFFSET(0xB12A540)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEMAGICUNIT_GETFUNCID_OFFSET UNITYSDK_OFFSET(0xB12A700)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEMAGICUNIT_GETFUNCTYPE_OFFSET UNITYSDK_OFFSET(0xB12A6B0)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEMAGICUNIT_GET_COSTCOUNT_OFFSET UNITYSDK_OFFSET(0xB12A900)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEMAGICUNIT_GET_FREECOUNT_OFFSET UNITYSDK_OFFSET(0xB12A8E0)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEMAGICUNIT_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0xB12A740)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEMAGICUNIT_REFRESH_OFFSET UNITYSDK_OFFSET(0xB12A4D0)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEMAGICUNIT_SET_COSTCOUNT_OFFSET UNITYSDK_OFFSET(0xB12A910)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEMAGICUNIT_SET_FREECOUNT_OFFSET UNITYSDK_OFFSET(0xB12A8F0)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEMAGICUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0xB12A130)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchReforgeMagicUnit_TypeDefinitionIndex = 62052;

	class RogueWorkBenchReforgeMagicUnit : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*>* _NormalUnitCostData; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* _UltraUnitCostData; // 0x18
		::System::Int32 _CostCount_k__BackingField; // 0x20
		::System::UInt32 _FuncID; // 0x24
		::System::UInt32 _FreeCount_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 funcID, ::Class_1_7DCEBB69B8853415* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_7DCEBB69B8853415*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEMAGICUNIT__CTOR_OFFSET))(this, funcID, proto);
		}

		::System::Void Refresh(::RPG::Client::RogueWorkBenchReforgeMagicUnit* detail)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchReforgeMagicUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEMAGICUNIT_REFRESH_OFFSET))(this, detail);
		}

		::System::UInt32 GetCostNum(::RPG::Client::RogueMagicUnitDataItem* unit)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEMAGICUNIT_GETCOSTNUM_OFFSET))(this, unit);
		}

		::RPG::GameCore::RogueWorkbenchFuncType GetFuncType()
		{
			return ((::RPG::GameCore::RogueWorkbenchFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEMAGICUNIT_GETFUNCTYPE_OFFSET))(this);
		}

		::System::UInt32 GetFuncID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEMAGICUNIT_GETFUNCID_OFFSET))(this);
		}

		::RPG::Client::LuaUIController* OpenFuncUIPage(::System::UInt32 propEntityID)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEMAGICUNIT_OPENFUNCUIPAGE_OFFSET))(this, propEntityID);
		}

		::System::UInt32 get_FreeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEMAGICUNIT_GET_FREECOUNT_OFFSET))(this);
		}

		::System::Void set_FreeCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEMAGICUNIT_SET_FREECOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_CostCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEMAGICUNIT_GET_COSTCOUNT_OFFSET))(this);
		}

		::System::Void set_CostCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEMAGICUNIT_SET_COSTCOUNT_OFFSET))(this, value);
		}
	};
}

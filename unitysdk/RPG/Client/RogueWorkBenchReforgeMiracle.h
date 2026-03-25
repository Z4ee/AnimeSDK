#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncType.h"
#include "unitysdk/System/Object.h"

class Class_1_E473F14F738B1BF5_15;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueWorkBenchCost; }

#define RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE_GETFUNCID_OFFSET UNITYSDK_OFFSET(0xA3F2DD0)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE_GETFUNCTYPE_OFFSET UNITYSDK_OFFSET(0xA3F2D80)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE_GET_COSTDATA_OFFSET UNITYSDK_OFFSET(0xA3F2FB0)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0xA3F2E10)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE_REFRESH_OFFSET UNITYSDK_OFFSET(0xA3F2D10)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE_SET_COSTDATA_OFFSET UNITYSDK_OFFSET(0xA3F2FC0)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE__CTOR_OFFSET UNITYSDK_OFFSET(0xA3F2C30)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchReforgeMiracle_TypeDefinitionIndex = 54869;

	class RogueWorkBenchReforgeMiracle : public ::System::Object
	{
	public:
		::RPG::Client::RogueWorkBenchCost* _CostData_k__BackingField; // 0x10
		::System::UInt32 _FuncID; // 0x18

		::System::Void _ctor(::System::UInt32 funcID, ::Class_1_E473F14F738B1BF5_15* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_E473F14F738B1BF5_15*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE__CTOR_OFFSET))(this, funcID, proto);
		}

		::System::Void Refresh(::RPG::Client::RogueWorkBenchReforgeMiracle* detail)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchReforgeMiracle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE_REFRESH_OFFSET))(this, detail);
		}

		::RPG::GameCore::RogueWorkbenchFuncType GetFuncType()
		{
			return ((::RPG::GameCore::RogueWorkbenchFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE_GETFUNCTYPE_OFFSET))(this);
		}

		::System::UInt32 GetFuncID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE_GETFUNCID_OFFSET))(this);
		}

		::RPG::Client::LuaUIController* OpenFuncUIPage(::System::UInt32 propEntityID)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE_OPENFUNCUIPAGE_OFFSET))(this, propEntityID);
		}

		::RPG::Client::RogueWorkBenchCost* get_CostData()
		{
			return ((::RPG::Client::RogueWorkBenchCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE_GET_COSTDATA_OFFSET))(this);
		}

		::System::Void set_CostData(::RPG::Client::RogueWorkBenchCost* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchCost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE_SET_COSTDATA_OFFSET))(this, value);
		}
	};
}

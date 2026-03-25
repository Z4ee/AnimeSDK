#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncType.h"
#include "unitysdk/System/Object.h"

class Class_1_1AB46FFB7CDC0351_3;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueWorkBenchCost; }

#define RPG_CLIENT_ROGUEWORKBENCHREFORGEFORMULA_GETFUNCID_OFFSET UNITYSDK_OFFSET(0xA3F2260)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEFORMULA_GETFUNCTYPE_OFFSET UNITYSDK_OFFSET(0xA3F2210)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEFORMULA_GET_COSTDATA_OFFSET UNITYSDK_OFFSET(0xA3F2440)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEFORMULA_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0xA3F22A0)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEFORMULA_REFRESH_OFFSET UNITYSDK_OFFSET(0xA3F21A0)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEFORMULA_SET_COSTDATA_OFFSET UNITYSDK_OFFSET(0xA3F2450)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEFORMULA__CTOR_OFFSET UNITYSDK_OFFSET(0xA3F20C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchReforgeFormula_TypeDefinitionIndex = 54867;

	class RogueWorkBenchReforgeFormula : public ::System::Object
	{
	public:
		::RPG::Client::RogueWorkBenchCost* _CostData_k__BackingField; // 0x10
		::System::UInt32 _FuncID; // 0x18

		::System::Void _ctor(::System::UInt32 funcID, ::Class_1_1AB46FFB7CDC0351_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_1AB46FFB7CDC0351_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEFORMULA__CTOR_OFFSET))(this, funcID, proto);
		}

		::System::Void Refresh(::RPG::Client::RogueWorkBenchReforgeFormula* detail)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchReforgeFormula*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEFORMULA_REFRESH_OFFSET))(this, detail);
		}

		::RPG::GameCore::RogueWorkbenchFuncType GetFuncType()
		{
			return ((::RPG::GameCore::RogueWorkbenchFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEFORMULA_GETFUNCTYPE_OFFSET))(this);
		}

		::System::UInt32 GetFuncID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEFORMULA_GETFUNCID_OFFSET))(this);
		}

		::RPG::Client::LuaUIController* OpenFuncUIPage(::System::UInt32 propEntityID)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEFORMULA_OPENFUNCUIPAGE_OFFSET))(this, propEntityID);
		}

		::RPG::Client::RogueWorkBenchCost* get_CostData()
		{
			return ((::RPG::Client::RogueWorkBenchCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEFORMULA_GET_COSTDATA_OFFSET))(this);
		}

		::System::Void set_CostData(::RPG::Client::RogueWorkBenchCost* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchCost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEFORMULA_SET_COSTDATA_OFFSET))(this, value);
		}
	};
}

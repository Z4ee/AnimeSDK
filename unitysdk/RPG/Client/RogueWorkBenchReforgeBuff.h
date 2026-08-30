#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncType.h"
#include "unitysdk/System/Object.h"

class Class_1_0319A031DCA9B495_20;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueBuffData; }
namespace RPG::Client { class RogueWorkBenchCost; }

#define RPG_CLIENT_ROGUEWORKBENCHREFORGEBUFF_GETFUNCID_OFFSET UNITYSDK_OFFSET(0x16A15E00)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEBUFF_GETFUNCTYPE_OFFSET UNITYSDK_OFFSET(0x16A15DB0)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEBUFF_GET_COSTDATA_OFFSET UNITYSDK_OFFSET(0x16A15FC0)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEBUFF_GET_ISDISABLE_OFFSET UNITYSDK_OFFSET(0x16A15FA0)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEBUFF_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0x16A15E40)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEBUFF_REFRESH_OFFSET UNITYSDK_OFFSET(0x16A15C40)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEBUFF_REPORTBUFFSELECTION_OFFSET UNITYSDK_OFFSET(0x16A15CB0)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEBUFF_SET_COSTDATA_OFFSET UNITYSDK_OFFSET(0x16A15FD0)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEBUFF_SET_ISDISABLE_OFFSET UNITYSDK_OFFSET(0x16A15FB0)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x16A15B50)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchReforgeBuff_TypeDefinitionIndex = 67350;

	class RogueWorkBenchReforgeBuff : public ::System::Object
	{
	public:
		::RPG::Client::RogueWorkBenchCost* _CostData_k__BackingField; // 0x10
		::System::UInt32 _FuncID; // 0x18
		::System::Boolean _IsDisable_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_0319A031DCA9B495_20* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_0319A031DCA9B495_20*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEBUFF__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Refresh(::RPG::Client::RogueWorkBenchReforgeBuff* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchReforgeBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEBUFF_REFRESH_OFFSET))(this, a1);
		}

		::System::Void ReportBuffSelection(::RPG::Client::RogueBuffData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEBUFF_REPORTBUFFSELECTION_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueWorkbenchFuncType GetFuncType()
		{
			return ((::RPG::GameCore::RogueWorkbenchFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEBUFF_GETFUNCTYPE_OFFSET))(this);
		}

		::System::UInt32 GetFuncID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEBUFF_GETFUNCID_OFFSET))(this);
		}

		::RPG::Client::LuaUIController* OpenFuncUIPage(::System::UInt32 a1)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEBUFF_OPENFUNCUIPAGE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDisable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEBUFF_GET_ISDISABLE_OFFSET))(this);
		}

		::System::Void set_IsDisable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEBUFF_SET_ISDISABLE_OFFSET))(this, a1);
		}

		::RPG::Client::RogueWorkBenchCost* get_CostData()
		{
			return ((::RPG::Client::RogueWorkBenchCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEBUFF_GET_COSTDATA_OFFSET))(this);
		}

		::System::Void set_CostData(::RPG::Client::RogueWorkBenchCost* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchCost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEBUFF_SET_COSTDATA_OFFSET))(this, a1);
		}
	};
}

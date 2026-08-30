#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncType.h"
#include "unitysdk/System/Object.h"

class Class_1_0319A031DCA9B495_22;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueWorkBenchCost; }

#define RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE_GETFUNCID_OFFSET UNITYSDK_OFFSET(0x16A16E10)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE_GETFUNCTYPE_OFFSET UNITYSDK_OFFSET(0x16A16DC0)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE_GET_COSTDATA_OFFSET UNITYSDK_OFFSET(0x16A16FD0)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE_GET_ISDISABLE_OFFSET UNITYSDK_OFFSET(0x16A16FB0)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0x16A16E50)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE_REFRESH_OFFSET UNITYSDK_OFFSET(0x16A16D50)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE_SET_COSTDATA_OFFSET UNITYSDK_OFFSET(0x16A16FE0)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE_SET_ISDISABLE_OFFSET UNITYSDK_OFFSET(0x16A16FC0)
#define RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A16C60)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchReforgeMiracle_TypeDefinitionIndex = 67353;

	class RogueWorkBenchReforgeMiracle : public ::System::Object
	{
	public:
		::RPG::Client::RogueWorkBenchCost* _CostData_k__BackingField; // 0x10
		::System::UInt32 _FuncID; // 0x18
		::System::Boolean _IsDisable_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_0319A031DCA9B495_22* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_0319A031DCA9B495_22*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Refresh(::RPG::Client::RogueWorkBenchReforgeMiracle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchReforgeMiracle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE_REFRESH_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueWorkbenchFuncType GetFuncType()
		{
			return ((::RPG::GameCore::RogueWorkbenchFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE_GETFUNCTYPE_OFFSET))(this);
		}

		::System::UInt32 GetFuncID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE_GETFUNCID_OFFSET))(this);
		}

		::RPG::Client::LuaUIController* OpenFuncUIPage(::System::UInt32 a1)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE_OPENFUNCUIPAGE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDisable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE_GET_ISDISABLE_OFFSET))(this);
		}

		::System::Void set_IsDisable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE_SET_ISDISABLE_OFFSET))(this, a1);
		}

		::RPG::Client::RogueWorkBenchCost* get_CostData()
		{
			return ((::RPG::Client::RogueWorkBenchCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE_GET_COSTDATA_OFFSET))(this);
		}

		::System::Void set_CostData(::RPG::Client::RogueWorkBenchCost* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchCost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHREFORGEMIRACLE_SET_COSTDATA_OFFSET))(this, a1);
		}
	};
}

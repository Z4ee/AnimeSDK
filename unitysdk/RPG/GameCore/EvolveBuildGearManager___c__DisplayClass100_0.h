#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E3A8B05AA1BBEE81;
namespace RPG::GameCore { class EvolveBuildGearManager; }

#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER___C__DISPLAYCLASS100_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB678360)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER___C__DISPLAYCLASS100_0__GETGEARSELECTPROGRESS_B__0_OFFSET UNITYSDK_OFFSET(0xB67C620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildGearManager___c__DisplayClass100_0_TypeDefinitionIndex = 51668;

	class EvolveBuildGearManager___c__DisplayClass100_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::EvolveBuildGearManager* __4__this; // 0x10
		::System::UInt32 nMaxCount; // 0x18
		::System::UInt32 nCurCount; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER___C__DISPLAYCLASS100_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetGearSelectProgress_b__0(::Class_1_E3A8B05AA1BBEE81* pTurnInsertAbilityInst)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E3A8B05AA1BBEE81*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER___C__DISPLAYCLASS100_0__GETGEARSELECTPROGRESS_B__0_OFFSET))(this, pTurnInsertAbilityInst);
		}
	};
}

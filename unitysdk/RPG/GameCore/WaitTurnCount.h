#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TurnCountCalcMethod.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_WAITTURNCOUNT_METHOD_3_84B56CCD64415B0A_OFFSET UNITYSDK_OFFSET(0x1910B2D0)
#define RPG_GAMECORE_WAITTURNCOUNT_METHOD_3_CED716E9171354F2_OFFSET UNITYSDK_OFFSET(0x1910B1B0)
#define RPG_GAMECORE_WAITTURNCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1910B250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitTurnCount_TypeDefinitionIndex = 22377;

	class WaitTurnCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TurnCountCalcMethod CalcMethod; // 0x18
		::RPG::GameCore::DynamicFloat* Count; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x28
		::System::Boolean IsPersistenceTasksForClient; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTURNCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CED716E9171354F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitTurnCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitTurnCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTURNCOUNT_METHOD_3_CED716E9171354F2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_84B56CCD64415B0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitTurnCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitTurnCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTURNCOUNT_METHOD_3_84B56CCD64415B0A_OFFSET))(a1, a2);
		}
	};
}

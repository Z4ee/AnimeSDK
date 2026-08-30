#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TurnCountCalcMethod.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_WAITTURNCOUNT_METHOD_3_18F0E26295C0F629_OFFSET UNITYSDK_OFFSET(0x1DEC3D20)
#define RPG_GAMECORE_WAITTURNCOUNT_METHOD_3_D1881D97049BBDD4_OFFSET UNITYSDK_OFFSET(0x1DEC3E00)
#define RPG_GAMECORE_WAITTURNCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC3DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitTurnCount_TypeDefinitionIndex = 23147;

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

		static ::System::Void Method_3_18F0E26295C0F629(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitTurnCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitTurnCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTURNCOUNT_METHOD_3_18F0E26295C0F629_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D1881D97049BBDD4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitTurnCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitTurnCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTURNCOUNT_METHOD_3_D1881D97049BBDD4_OFFSET))(a1, a2);
		}
	};
}

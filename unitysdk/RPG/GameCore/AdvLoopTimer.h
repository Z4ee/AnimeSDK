#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }

#define RPG_GAMECORE_ADVLOOPTIMER_METHOD_3_48E8688EA3BADA31_OFFSET UNITYSDK_OFFSET(0x18655240)
#define RPG_GAMECORE_ADVLOOPTIMER_METHOD_3_F935F46CA447721C_OFFSET UNITYSDK_OFFSET(0x186552C0)
#define RPG_GAMECORE_ADVLOOPTIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x18655290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvLoopTimer_TypeDefinitionIndex = 20203;

	class AdvLoopTimer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single WaitInterval; // 0x18
		::System::Boolean AllowRestart; // 0x1C
		::System::Boolean ExecuteWhenStart; // 0x1D
		::System::Boolean LoopUntilSuccess; // 0x1E
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTimeUp; // 0x20
		::RPG::GameCore::PredicateConfig* BreakCondition; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOOPTIMER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_48E8688EA3BADA31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvLoopTimer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvLoopTimer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOOPTIMER_METHOD_3_48E8688EA3BADA31_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F935F46CA447721C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvLoopTimer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvLoopTimer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOOPTIMER_METHOD_3_F935F46CA447721C_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LoopExecuteTaskList.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPEXECUTETASKLISTWITHINTERVAL_METHOD_4_1D58AC10FA929144_OFFSET UNITYSDK_OFFSET(0x198B12E0)
#define RPG_GAMECORE_LOOPEXECUTETASKLISTWITHINTERVAL_METHOD_4_C1F9F3F396CF7BEE_OFFSET UNITYSDK_OFFSET(0x198B10E0)
#define RPG_GAMECORE_LOOPEXECUTETASKLISTWITHINTERVAL__CTOR_OFFSET UNITYSDK_OFFSET(0x198B1060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopExecuteTaskListWithInterval_TypeDefinitionIndex = 21246;

	class LoopExecuteTaskListWithInterval : public ::RPG::GameCore::LoopExecuteTaskList
	{
	public:
		::System::Boolean PreciseTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPEXECUTETASKLISTWITHINTERVAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1D58AC10FA929144(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopExecuteTaskListWithInterval*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopExecuteTaskListWithInterval*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPEXECUTETASKLISTWITHINTERVAL_METHOD_4_1D58AC10FA929144_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C1F9F3F396CF7BEE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopExecuteTaskListWithInterval* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopExecuteTaskListWithInterval*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPEXECUTETASKLISTWITHINTERVAL_METHOD_4_C1F9F3F396CF7BEE_OFFSET))(a1, a2);
		}
	};
}

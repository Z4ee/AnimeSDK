#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LoopExecuteTaskList.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPEXECUTETASKLISTWITHINTERVAL_METHOD_4_CE9610C5CBC8C2EE_OFFSET UNITYSDK_OFFSET(0x18A7DF60)
#define RPG_GAMECORE_LOOPEXECUTETASKLISTWITHINTERVAL_METHOD_4_DF1F618BD86E1EFC_OFFSET UNITYSDK_OFFSET(0x18A7DD60)
#define RPG_GAMECORE_LOOPEXECUTETASKLISTWITHINTERVAL__CTOR_OFFSET UNITYSDK_OFFSET(0x18A7DCE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopExecuteTaskListWithInterval_TypeDefinitionIndex = 21352;

	class LoopExecuteTaskListWithInterval : public ::RPG::GameCore::LoopExecuteTaskList
	{
	public:
		::System::Boolean PreciseTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPEXECUTETASKLISTWITHINTERVAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CE9610C5CBC8C2EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopExecuteTaskListWithInterval*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopExecuteTaskListWithInterval*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPEXECUTETASKLISTWITHINTERVAL_METHOD_4_CE9610C5CBC8C2EE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DF1F618BD86E1EFC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopExecuteTaskListWithInterval* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopExecuteTaskListWithInterval*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPEXECUTETASKLISTWITHINTERVAL_METHOD_4_DF1F618BD86E1EFC_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_LOOPEXECUTETASKLIST_METHOD_3_164F54A8DD3B7AE7_OFFSET UNITYSDK_OFFSET(0x1D48A280)
#define RPG_GAMECORE_LOOPEXECUTETASKLIST_METHOD_3_29D005593585F4B2_OFFSET UNITYSDK_OFFSET(0x1D489FE0)
#define RPG_GAMECORE_LOOPEXECUTETASKLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D48A210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopExecuteTaskList_TypeDefinitionIndex = 22640;

	class LoopExecuteTaskList : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* MaxLoopCount; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPEXECUTETASKLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_29D005593585F4B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopExecuteTaskList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopExecuteTaskList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPEXECUTETASKLIST_METHOD_3_29D005593585F4B2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_164F54A8DD3B7AE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopExecuteTaskList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopExecuteTaskList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPEXECUTETASKLIST_METHOD_3_164F54A8DD3B7AE7_OFFSET))(a1, a2);
		}
	};
}

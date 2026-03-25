#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPWAITSERVERFLOORSAVEDVALUECHANGE_METHOD_3_CB559999FB3D3832_OFFSET UNITYSDK_OFFSET(0x17371180)
#define RPG_GAMECORE_LOOPWAITSERVERFLOORSAVEDVALUECHANGE_METHOD_3_F602185761CD823D_OFFSET UNITYSDK_OFFSET(0x173711F0)
#define RPG_GAMECORE_LOOPWAITSERVERFLOORSAVEDVALUECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x173711C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitServerFloorSavedValueChange_TypeDefinitionIndex = 20443;

	class LoopWaitServerFloorSavedValueChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERFLOORSAVEDVALUECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CB559999FB3D3832(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitServerFloorSavedValueChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitServerFloorSavedValueChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERFLOORSAVEDVALUECHANGE_METHOD_3_CB559999FB3D3832_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F602185761CD823D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitServerFloorSavedValueChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitServerFloorSavedValueChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERFLOORSAVEDVALUECHANGE_METHOD_3_F602185761CD823D_OFFSET))(a1, a2);
		}
	};
}

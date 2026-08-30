#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPWAITSERVERFLOORSAVEDVALUECHANGE_METHOD_3_A839BE1888729430_OFFSET UNITYSDK_OFFSET(0x1D215F30)
#define RPG_GAMECORE_LOOPWAITSERVERFLOORSAVEDVALUECHANGE_METHOD_3_F602185761CD823D_OFFSET UNITYSDK_OFFSET(0x1D215F70)
#define RPG_GAMECORE_LOOPWAITSERVERFLOORSAVEDVALUECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D215F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitServerFloorSavedValueChange_TypeDefinitionIndex = 22001;

	class LoopWaitServerFloorSavedValueChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERFLOORSAVEDVALUECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A839BE1888729430(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitServerFloorSavedValueChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitServerFloorSavedValueChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERFLOORSAVEDVALUECHANGE_METHOD_3_A839BE1888729430_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F602185761CD823D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitServerFloorSavedValueChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitServerFloorSavedValueChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERFLOORSAVEDVALUECHANGE_METHOD_3_F602185761CD823D_OFFSET))(a1, a2);
		}
	};
}

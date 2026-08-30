#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPWAITSERVERROTATABLEREGIONCHANGE_METHOD_3_0190D6A78DCA526F_OFFSET UNITYSDK_OFFSET(0x1D216180)
#define RPG_GAMECORE_LOOPWAITSERVERROTATABLEREGIONCHANGE_METHOD_3_BC931DEF64A1FF6B_OFFSET UNITYSDK_OFFSET(0x1D216130)
#define RPG_GAMECORE_LOOPWAITSERVERROTATABLEREGIONCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D216170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitServerRotatableRegionChange_TypeDefinitionIndex = 21007;

	class LoopWaitServerRotatableRegionChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERROTATABLEREGIONCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BC931DEF64A1FF6B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitServerRotatableRegionChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitServerRotatableRegionChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERROTATABLEREGIONCHANGE_METHOD_3_BC931DEF64A1FF6B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0190D6A78DCA526F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitServerRotatableRegionChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitServerRotatableRegionChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERROTATABLEREGIONCHANGE_METHOD_3_0190D6A78DCA526F_OFFSET))(a1, a2);
		}
	};
}

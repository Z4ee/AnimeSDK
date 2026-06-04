#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPWAITSERVERROTATABLEREGIONCHANGE_METHOD_3_0190D6A78DCA526F_OFFSET UNITYSDK_OFFSET(0x198B24E0)
#define RPG_GAMECORE_LOOPWAITSERVERROTATABLEREGIONCHANGE_METHOD_3_4A87733F6C434E9F_OFFSET UNITYSDK_OFFSET(0x198B2450)
#define RPG_GAMECORE_LOOPWAITSERVERROTATABLEREGIONCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x198B24B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitServerRotatableRegionChange_TypeDefinitionIndex = 20083;

	class LoopWaitServerRotatableRegionChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERROTATABLEREGIONCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4A87733F6C434E9F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitServerRotatableRegionChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitServerRotatableRegionChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERROTATABLEREGIONCHANGE_METHOD_3_4A87733F6C434E9F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0190D6A78DCA526F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitServerRotatableRegionChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitServerRotatableRegionChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERROTATABLEREGIONCHANGE_METHOD_3_0190D6A78DCA526F_OFFSET))(a1, a2);
		}
	};
}

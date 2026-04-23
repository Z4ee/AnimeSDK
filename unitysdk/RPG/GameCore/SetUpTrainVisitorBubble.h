#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETUPTRAINVISITORBUBBLE_METHOD_3_0930CBE4834E1E6C_OFFSET UNITYSDK_OFFSET(0x18E49730)
#define RPG_GAMECORE_SETUPTRAINVISITORBUBBLE_METHOD_3_9ABD81BAEC3245F8_OFFSET UNITYSDK_OFFSET(0x18E49840)
#define RPG_GAMECORE_SETUPTRAINVISITORBUBBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E49810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetUpTrainVisitorBubble_TypeDefinitionIndex = 20437;

	class SetUpTrainVisitorBubble : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPTRAINVISITORBUBBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0930CBE4834E1E6C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetUpTrainVisitorBubble*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetUpTrainVisitorBubble*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPTRAINVISITORBUBBLE_METHOD_3_0930CBE4834E1E6C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9ABD81BAEC3245F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetUpTrainVisitorBubble* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetUpTrainVisitorBubble*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPTRAINVISITORBUBBLE_METHOD_3_9ABD81BAEC3245F8_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPWAITHEARTDIALSCRIPTSTEPCHANGE_METHOD_3_77157DDB21FA1341_OFFSET UNITYSDK_OFFSET(0x1D215D00)
#define RPG_GAMECORE_LOOPWAITHEARTDIALSCRIPTSTEPCHANGE_METHOD_3_A2D2CECEB1A92FA5_OFFSET UNITYSDK_OFFSET(0x1D215D50)
#define RPG_GAMECORE_LOOPWAITHEARTDIALSCRIPTSTEPCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D215D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitHeartDialScriptStepChange_TypeDefinitionIndex = 20974;

	class LoopWaitHeartDialScriptStepChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITHEARTDIALSCRIPTSTEPCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_77157DDB21FA1341(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitHeartDialScriptStepChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitHeartDialScriptStepChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITHEARTDIALSCRIPTSTEPCHANGE_METHOD_3_77157DDB21FA1341_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A2D2CECEB1A92FA5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitHeartDialScriptStepChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitHeartDialScriptStepChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITHEARTDIALSCRIPTSTEPCHANGE_METHOD_3_A2D2CECEB1A92FA5_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPWAITHEARTDIALSCRIPTSTEPCHANGE_METHOD_3_A2D2CECEB1A92FA5_OFFSET UNITYSDK_OFFSET(0x198B1E00)
#define RPG_GAMECORE_LOOPWAITHEARTDIALSCRIPTSTEPCHANGE_METHOD_3_FCF9030C7CB7DF55_OFFSET UNITYSDK_OFFSET(0x198B1D70)
#define RPG_GAMECORE_LOOPWAITHEARTDIALSCRIPTSTEPCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x198B1DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitHeartDialScriptStepChange_TypeDefinitionIndex = 20050;

	class LoopWaitHeartDialScriptStepChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITHEARTDIALSCRIPTSTEPCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FCF9030C7CB7DF55(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitHeartDialScriptStepChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitHeartDialScriptStepChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITHEARTDIALSCRIPTSTEPCHANGE_METHOD_3_FCF9030C7CB7DF55_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A2D2CECEB1A92FA5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitHeartDialScriptStepChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitHeartDialScriptStepChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITHEARTDIALSCRIPTSTEPCHANGE_METHOD_3_A2D2CECEB1A92FA5_OFFSET))(a1, a2);
		}
	};
}

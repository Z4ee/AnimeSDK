#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAIEffectEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEDIFFCOUNT_METHOD_3_5A1FF4057D9E81B7_OFFSET UNITYSDK_OFFSET(0x1C10B3D0)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEDIFFCOUNT_METHOD_3_DE7FE5750B59D4C6_OFFSET UNITYSDK_OFFSET(0x1C10BEC0)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEDIFFCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C10B3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatAIEffectEvaluatorConfig_DiceDiffCount_TypeDefinitionIndex = 15562;

	class DiceCombatAIEffectEvaluatorConfig_DiceDiffCount : public ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEDIFFCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DE7FE5750B59D4C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceDiffCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceDiffCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEDIFFCOUNT_METHOD_3_DE7FE5750B59D4C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5A1FF4057D9E81B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceDiffCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceDiffCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEDIFFCOUNT_METHOD_3_5A1FF4057D9E81B7_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraEvaluationCondition; }

#define RPG_GAMECORE_CHIMERAEVALUATIONCONFIG_METHOD_2_CA8C8BC12AE779A9_OFFSET UNITYSDK_OFFSET(0x1E33EAE0)
#define RPG_GAMECORE_CHIMERAEVALUATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E33EBD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraEvaluationConfig_TypeDefinitionIndex = 15682;

	class ChimeraEvaluationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraEvaluationCondition*>* ChimeraEvaluationConditions; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAEVALUATIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CA8C8BC12AE779A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraEvaluationConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraEvaluationConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAEVALUATIONCONFIG_METHOD_2_CA8C8BC12AE779A9_OFFSET))(a1, a2);
		}
	};
}

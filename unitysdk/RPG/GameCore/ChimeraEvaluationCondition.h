#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraEvaluationConditionType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERAEVALUATIONCONDITION_METHOD_2_75945B8D8AA0A742_OFFSET UNITYSDK_OFFSET(0x170A8A60)
#define RPG_GAMECORE_CHIMERAEVALUATIONCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x170A8BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraEvaluationCondition_TypeDefinitionIndex = 14549;

	class ChimeraEvaluationCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraEvaluationConditionType Type; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* Params; // 0x18
		::System::UInt32 RelatedEvaluationID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAEVALUATIONCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_75945B8D8AA0A742(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraEvaluationCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraEvaluationCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAEVALUATIONCONDITION_METHOD_2_75945B8D8AA0A742_OFFSET))(a1, a2);
		}
	};
}

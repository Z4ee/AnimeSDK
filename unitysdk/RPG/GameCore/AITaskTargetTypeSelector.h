#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AISelector.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_AITASKTARGETTYPESELECTOR_METHOD_3_743F9A6C1BBE14AE_OFFSET UNITYSDK_OFFSET(0x1B9F64C0)
#define RPG_GAMECORE_AITASKTARGETTYPESELECTOR_METHOD_3_7B76DD661EC62FA1_OFFSET UNITYSDK_OFFSET(0x1B9F5CC0)
#define RPG_GAMECORE_AITASKTARGETTYPESELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9F5CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AITaskTargetTypeSelector_TypeDefinitionIndex = 14986;

	class AITaskTargetTypeSelector : public ::RPG::GameCore::AISelector
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x10
		::System::Boolean InverseResultFlag; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AITASKTARGETTYPESELECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_743F9A6C1BBE14AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AITaskTargetTypeSelector*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AITaskTargetTypeSelector*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AITASKTARGETTYPESELECTOR_METHOD_3_743F9A6C1BBE14AE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7B76DD661EC62FA1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AITaskTargetTypeSelector* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AITaskTargetTypeSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AITASKTARGETTYPESELECTOR_METHOD_3_7B76DD661EC62FA1_OFFSET))(a1, a2);
		}
	};
}

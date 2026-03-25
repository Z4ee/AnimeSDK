#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAICombineType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ComplexSkillAIMapper; }
namespace RPG::GameCore { class ComplexSkillAIPostProcess; }
namespace RPG::GameCore { class ComplexSkillAISource; }

#define RPG_GAMECORE_COMPLEXSKILLAIFACTOR_METHOD_2_9D6E00DF3F01E5AB_OFFSET UNITYSDK_OFFSET(0x17122990)
#define RPG_GAMECORE_COMPLEXSKILLAIFACTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17122AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIFactor_TypeDefinitionIndex = 14260;

	class ComplexSkillAIFactor : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ComplexSkillAICombineType CombineOperator; // 0x10
		::RPG::GameCore::ComplexSkillAISource* Source; // 0x18
		::RPG::GameCore::ComplexSkillAIMapper* Mapper; // 0x20
		::RPG::GameCore::ComplexSkillAIPostProcess* PostProcess; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIFACTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9D6E00DF3F01E5AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIFactor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIFactor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIFACTOR_METHOD_2_9D6E00DF3F01E5AB_OFFSET))(a1, a2);
		}
	};
}

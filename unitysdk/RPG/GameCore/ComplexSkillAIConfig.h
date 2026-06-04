#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ComplexSkillAIFactorGroupWeight; }

#define RPG_GAMECORE_COMPLEXSKILLAICONFIG_METHOD_2_938E5162BF41701C_OFFSET UNITYSDK_OFFSET(0x19669730)
#define RPG_GAMECORE_COMPLEXSKILLAICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x196698A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIConfig_TypeDefinitionIndex = 14798;

	class ComplexSkillAIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint SkillBasicPower; // 0x10
		::Il2CppArray<::RPG::GameCore::ComplexSkillAIFactorGroupWeight*>* Groups; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_938E5162BF41701C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAICONFIG_METHOD_2_938E5162BF41701C_OFFSET))(a1, a2);
		}
	};
}

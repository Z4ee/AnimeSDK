#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ComplexSkillAIFactorGroupWeightEx; }

#define RPG_GAMECORE_COMPLEXSKILLAICONFIGEX_METHOD_2_FE4342EBEB1159F2_OFFSET UNITYSDK_OFFSET(0x1D9A7FC0)
#define RPG_GAMECORE_COMPLEXSKILLAICONFIGEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A8160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIConfigEx_TypeDefinitionIndex = 17460;

	class ComplexSkillAIConfigEx : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint SkillBasicPower; // 0x10
		::Il2CppArray<::RPG::GameCore::ComplexSkillAIFactorGroupWeightEx*>* Groups; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAICONFIGEX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FE4342EBEB1159F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIConfigEx*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIConfigEx*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAICONFIGEX_METHOD_2_FE4342EBEB1159F2_OFFSET))(a1, a2);
		}
	};
}

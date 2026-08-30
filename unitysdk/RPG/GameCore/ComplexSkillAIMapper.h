#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAIMAPPER_METHOD_2_20B55D848AFD9974_OFFSET UNITYSDK_OFFSET(0x1D9A86E0)
#define RPG_GAMECORE_COMPLEXSKILLAIMAPPER_METHOD_2_593DECD717905B51_OFFSET UNITYSDK_OFFSET(0x1D9A9B70)
#define RPG_GAMECORE_COMPLEXSKILLAIMAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A9BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIMapper_TypeDefinitionIndex = 15383;

	class ComplexSkillAIMapper : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMAPPER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_20B55D848AFD9974(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIMapper*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIMapper*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMAPPER_METHOD_2_20B55D848AFD9974_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_593DECD717905B51(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIMapper* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIMapper*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMAPPER_METHOD_2_593DECD717905B51_OFFSET))(a1, a2);
		}
	};
}

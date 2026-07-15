#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESS_METHOD_2_A393DE9346B9C432_OFFSET UNITYSDK_OFFSET(0x1BC24770)
#define RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESS_METHOD_2_CE91773F645B393D_OFFSET UNITYSDK_OFFSET(0x1BC26330)
#define RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC26390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIPostProcess_TypeDefinitionIndex = 14952;

	class ComplexSkillAIPostProcess : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A393DE9346B9C432(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIPostProcess*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIPostProcess*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESS_METHOD_2_A393DE9346B9C432_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_CE91773F645B393D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIPostProcess* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIPostProcess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESS_METHOD_2_CE91773F645B393D_OFFSET))(a1, a2);
		}
	};
}

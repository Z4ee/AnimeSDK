#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraWorkPhase; }

#define RPG_GAMECORE_CHIMERAWORKPHASECONFIG_METHOD_2_4228BB14C3B29235_OFFSET UNITYSDK_OFFSET(0x1CFD5910)
#define RPG_GAMECORE_CHIMERAWORKPHASECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFD5C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraWorkPhaseConfig_TypeDefinitionIndex = 15711;

	class ChimeraWorkPhaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraWorkPhase*>* Phases; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKPHASECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4228BB14C3B29235(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraWorkPhaseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraWorkPhaseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKPHASECONFIG_METHOD_2_4228BB14C3B29235_OFFSET))(a1, a2);
		}
	};
}

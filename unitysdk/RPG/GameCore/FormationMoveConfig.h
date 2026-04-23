#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FormationPatternConfig; }

#define RPG_GAMECORE_FORMATIONMOVECONFIG_METHOD_2_A133458F4B0E3BF9_OFFSET UNITYSDK_OFFSET(0x1892ACB0)
#define RPG_GAMECORE_FORMATIONMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1892ADB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationMoveConfig_TypeDefinitionIndex = 14786;

	class FormationMoveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FormationPatternConfig*>* Patterns; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A133458F4B0E3BF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FormationMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FormationMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVECONFIG_METHOD_2_A133458F4B0E3BF9_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityEffectConfig; }
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }

#define CLASS_4_60B6F76306618700_METHOD_4_C59B8433498732A8_OFFSET UNITYSDK_OFFSET(0x19EB12B0)
#define CLASS_4_60B6F76306618700_METHOD_4_F074025B94DFED31_OFFSET UNITYSDK_OFFSET(0x19EB1230)
#define CLASS_4_60B6F76306618700__CTOR_OFFSET UNITYSDK_OFFSET(0x19EB1280)

inline static constexpr unsigned int Class_4_60B6F76306618700_TypeDefinitionIndex = 20222;

class Class_4_60B6F76306618700 : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
{
public:
	::RPG::GameCore::BaseLittleGameAbilityEffectConfig* Field_4_0; // 0x18
	::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* Field_4_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_60B6F76306618700__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_F074025B94DFED31(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_60B6F76306618700*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_60B6F76306618700*&))((::PBYTE)hIl2Cpp + CLASS_4_60B6F76306618700_METHOD_4_F074025B94DFED31_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_C59B8433498732A8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_60B6F76306618700* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_60B6F76306618700*))((::PBYTE)hIl2Cpp + CLASS_4_60B6F76306618700_METHOD_4_C59B8433498732A8_OFFSET))(a1, a2);
	}
};

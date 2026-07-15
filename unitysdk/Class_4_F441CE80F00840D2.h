#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityEffectConfig; }
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }

#define CLASS_4_F441CE80F00840D2_METHOD_4_2D9EFFF687EE2FD2_OFFSET UNITYSDK_OFFSET(0x1B50E870)
#define CLASS_4_F441CE80F00840D2_METHOD_4_BCFF597281DB664F_OFFSET UNITYSDK_OFFSET(0x1B50E830)
#define CLASS_4_F441CE80F00840D2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B50E860)

inline static constexpr unsigned int Class_4_F441CE80F00840D2_TypeDefinitionIndex = 20596;

class Class_4_F441CE80F00840D2 : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
{
public:
	::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* Field_4_0; // 0x18
	::RPG::GameCore::BaseLittleGameAbilityEffectConfig* Field_4_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F441CE80F00840D2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_BCFF597281DB664F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_F441CE80F00840D2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_F441CE80F00840D2*&))((::PBYTE)hIl2Cpp + CLASS_4_F441CE80F00840D2_METHOD_4_BCFF597281DB664F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_2D9EFFF687EE2FD2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_F441CE80F00840D2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_F441CE80F00840D2*))((::PBYTE)hIl2Cpp + CLASS_4_F441CE80F00840D2_METHOD_4_2D9EFFF687EE2FD2_OFFSET))(a1, a2);
	}
};

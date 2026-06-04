#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SilverWolf999UltraPropState.h"
#include "unitysdk/RPG/GameCore/SilverWolf999UltraPropType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_145ADC1663B806D6_METHOD_3_953B57F1CC8DAE52_OFFSET UNITYSDK_OFFSET(0x18F83B20)
#define CLASS_3_145ADC1663B806D6_METHOD_3_AC95490D1B53DE21_OFFSET UNITYSDK_OFFSET(0x18F83BA0)
#define CLASS_3_145ADC1663B806D6__CTOR_OFFSET UNITYSDK_OFFSET(0x18F83B70)

inline static constexpr unsigned int Class_3_145ADC1663B806D6_TypeDefinitionIndex = 21908;

class Class_3_145ADC1663B806D6 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::RPG::GameCore::SilverWolf999UltraPropState Field_3_1; // 0x20
	::RPG::GameCore::SilverWolf999UltraPropType Field_3_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_145ADC1663B806D6__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_953B57F1CC8DAE52(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_145ADC1663B806D6*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_145ADC1663B806D6*&))((::PBYTE)hIl2Cpp + CLASS_3_145ADC1663B806D6_METHOD_3_953B57F1CC8DAE52_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_AC95490D1B53DE21(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_145ADC1663B806D6* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_145ADC1663B806D6*))((::PBYTE)hIl2Cpp + CLASS_3_145ADC1663B806D6_METHOD_3_AC95490D1B53DE21_OFFSET))(a1, a2);
	}
};

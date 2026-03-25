#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_4_87568F4B1AE1BC50_METHOD_4_5AD5DDE87EA0455A_OFFSET UNITYSDK_OFFSET(0x16C65750)
#define CLASS_4_87568F4B1AE1BC50_METHOD_4_B193BE3C813F58CC_OFFSET UNITYSDK_OFFSET(0x16C65680)
#define CLASS_4_87568F4B1AE1BC50__CTOR_OFFSET UNITYSDK_OFFSET(0x16C65700)

inline static constexpr unsigned int Class_4_87568F4B1AE1BC50_TypeDefinitionIndex = 9943;

class Class_4_87568F4B1AE1BC50 : public ::RPG::GameCore::PredicateConfig
{
public:
	::System::UInt32 Field_4_1; // 0x20
	::System::UInt32 Field_4_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_87568F4B1AE1BC50__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_B193BE3C813F58CC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_87568F4B1AE1BC50*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_87568F4B1AE1BC50*&))((::PBYTE)hIl2Cpp + CLASS_4_87568F4B1AE1BC50_METHOD_4_B193BE3C813F58CC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_5AD5DDE87EA0455A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_87568F4B1AE1BC50* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_87568F4B1AE1BC50*))((::PBYTE)hIl2Cpp + CLASS_4_87568F4B1AE1BC50_METHOD_4_5AD5DDE87EA0455A_OFFSET))(a1, a2);
	}
};

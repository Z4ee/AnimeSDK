#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_4_FB95868337ECC493_METHOD_4_983FD205B2776A08_OFFSET UNITYSDK_OFFSET(0x18550800)
#define CLASS_4_FB95868337ECC493_METHOD_4_A6E5214ED8D05F62_OFFSET UNITYSDK_OFFSET(0x185508E0)
#define CLASS_4_FB95868337ECC493__CTOR_OFFSET UNITYSDK_OFFSET(0x18550880)

inline static constexpr unsigned int Class_4_FB95868337ECC493_TypeDefinitionIndex = 23061;

class Class_4_FB95868337ECC493 : public ::RPG::GameCore::STTaskConfig
{
public:
	::System::Boolean Field_4_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FB95868337ECC493__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_983FD205B2776A08(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_FB95868337ECC493*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_FB95868337ECC493*&))((::PBYTE)hIl2Cpp + CLASS_4_FB95868337ECC493_METHOD_4_983FD205B2776A08_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_A6E5214ED8D05F62(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_FB95868337ECC493* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_FB95868337ECC493*))((::PBYTE)hIl2Cpp + CLASS_4_FB95868337ECC493_METHOD_4_A6E5214ED8D05F62_OFFSET))(a1, a2);
	}
};

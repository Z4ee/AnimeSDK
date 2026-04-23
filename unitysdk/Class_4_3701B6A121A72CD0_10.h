#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_4_3701B6A121A72CD0_10_METHOD_4_983FD205B2776A08_OFFSET UNITYSDK_OFFSET(0x182CB350)
#define CLASS_4_3701B6A121A72CD0_10_METHOD_4_A6E5214ED8D05F62_OFFSET UNITYSDK_OFFSET(0x182CB420)
#define CLASS_4_3701B6A121A72CD0_10__CTOR_OFFSET UNITYSDK_OFFSET(0x182CB3D0)

inline static constexpr unsigned int Class_4_3701B6A121A72CD0_10_TypeDefinitionIndex = 23207;

class Class_4_3701B6A121A72CD0_10 : public ::RPG::GameCore::PredicateConfig
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3701B6A121A72CD0_10__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_983FD205B2776A08(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_3701B6A121A72CD0_10*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_3701B6A121A72CD0_10*&))((::PBYTE)hIl2Cpp + CLASS_4_3701B6A121A72CD0_10_METHOD_4_983FD205B2776A08_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_A6E5214ED8D05F62(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_3701B6A121A72CD0_10* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_3701B6A121A72CD0_10*))((::PBYTE)hIl2Cpp + CLASS_4_3701B6A121A72CD0_10_METHOD_4_A6E5214ED8D05F62_OFFSET))(a1, a2);
	}
};

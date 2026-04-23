#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_4_2173A25729E99536_METHOD_4_8C364D93F8E2B45B_OFFSET UNITYSDK_OFFSET(0x18959B60)
#define CLASS_4_2173A25729E99536_METHOD_4_D1E0C626E2B615C2_OFFSET UNITYSDK_OFFSET(0x18959A90)
#define CLASS_4_2173A25729E99536__CTOR_OFFSET UNITYSDK_OFFSET(0x18959B10)

inline static constexpr unsigned int Class_4_2173A25729E99536_TypeDefinitionIndex = 20266;

class Class_4_2173A25729E99536 : public ::RPG::GameCore::PredicateConfig
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2173A25729E99536__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_D1E0C626E2B615C2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_2173A25729E99536*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_2173A25729E99536*&))((::PBYTE)hIl2Cpp + CLASS_4_2173A25729E99536_METHOD_4_D1E0C626E2B615C2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_8C364D93F8E2B45B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_2173A25729E99536* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_2173A25729E99536*))((::PBYTE)hIl2Cpp + CLASS_4_2173A25729E99536_METHOD_4_8C364D93F8E2B45B_OFFSET))(a1, a2);
	}
};

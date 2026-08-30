#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CelestialBodyType.h"
#include "unitysdk/Class_1_C7C4EDD02A4426B2.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_535E4088B549C341;
namespace System { class String; }

#define CLASS_2_8DB50CD24D6A20BE_METHOD_2_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x16ECFA50)
#define CLASS_2_8DB50CD24D6A20BE__CTOR_OFFSET UNITYSDK_OFFSET(0x16ECF9C0)

inline static constexpr unsigned int Class_2_8DB50CD24D6A20BE_TypeDefinitionIndex = 69766;

class Class_2_8DB50CD24D6A20BE : public ::Class_1_C7C4EDD02A4426B2
{
public:
	::Class_1_535E4088B549C341* CCDHDAGPMNA; // 0x28
	::UnityEngine::Vector2 HMAGPLNGNMP; // 0x30
	::System::Single DMMINDDMKGC; // 0x38
	::CelestialBodyType DJGDEEGEPCJ; // 0x3C
	::System::Single JEJPHFEPFPN; // 0x40

	::System::Void _ctor(::System::String* a1, ::CelestialBodyType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::CelestialBodyType))((::PBYTE)hIl2Cpp + CLASS_2_8DB50CD24D6A20BE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_41AA181104E03F2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DB50CD24D6A20BE_METHOD_2_41AA181104E03F2C_OFFSET))(this);
	}
};

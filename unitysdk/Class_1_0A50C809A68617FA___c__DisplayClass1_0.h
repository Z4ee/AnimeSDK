#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9E825E3D3A62B6E0;

#define CLASS_1_0A50C809A68617FA___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F8E200)
#define CLASS_1_0A50C809A68617FA___C__DISPLAYCLASS1_0__GETPIXAIREQUIPPROPERTY_B__0_OFFSET UNITYSDK_OFFSET(0x15F8E220)

inline static constexpr unsigned int Class_1_0A50C809A68617FA___c__DisplayClass1_0_TypeDefinitionIndex = 75185;

class Class_1_0A50C809A68617FA___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::UInt32 UID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A50C809A68617FA___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetPixAirEquipProperty_b__0(::Class_1_9E825E3D3A62B6E0* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9E825E3D3A62B6E0*))((::PBYTE)hIl2Cpp + CLASS_1_0A50C809A68617FA___C__DISPLAYCLASS1_0__GETPIXAIREQUIPPROPERTY_B__0_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_416;

#define CLASS_5_FDF4BB9C053F8D5A___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC67F60)
#define CLASS_5_FDF4BB9C053F8D5A___C__DISPLAYCLASS5_0___ONTICKIMPLEMENT_B__0_OFFSET UNITYSDK_OFFSET(0x1EC685E0)

inline static constexpr unsigned int Class_5_FDF4BB9C053F8D5A___c__DisplayClass5_0_TypeDefinitionIndex = 44199;

class Class_5_FDF4BB9C053F8D5A___c__DisplayClass5_0 : public ::System::Object
{
public:
	::System::Single deltaTime; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_FDF4BB9C053F8D5A___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnTickImplement_b__0(::Class_0_16E4307DCC419505_416* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_416*))((::PBYTE)hIl2Cpp + CLASS_5_FDF4BB9C053F8D5A___C__DISPLAYCLASS5_0___ONTICKIMPLEMENT_B__0_OFFSET))(this, a1);
	}
};

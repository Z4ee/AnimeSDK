#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_60477073911AC4F6;

#define CLASS_1_60477073911AC4F6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCCCC30)
#define CLASS_1_60477073911AC4F6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCCCC60)
#define CLASS_1_60477073911AC4F6___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DCCCC70)

inline static constexpr unsigned int Class_1_60477073911AC4F6___c_TypeDefinitionIndex = 25233;

class Class_1_60477073911AC4F6___c : public ::System::Object
{
public:
	static ::Class_1_60477073911AC4F6___c** StaticGet___9()
	{
		return (::Class_1_60477073911AC4F6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_60477073911AC4F6___c_TypeDefinitionIndex)->GetStaticField(0x2C00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_60477073911AC4F6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60477073911AC4F6___C__CTOR_OFFSET))(this);
	}

	::Class_1_60477073911AC4F6* __cctor_b__43_0()
	{
		return ((::Class_1_60477073911AC4F6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60477073911AC4F6___C___CCTOR_B__43_0_OFFSET))(this);
	}
};

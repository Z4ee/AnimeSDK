#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8CC63498A6370048;

#define CLASS_1_8CC63498A6370048___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E805070)
#define CLASS_1_8CC63498A6370048___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8050A0)
#define CLASS_1_8CC63498A6370048___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E8050B0)

inline static constexpr unsigned int Class_1_8CC63498A6370048___c_TypeDefinitionIndex = 27073;

class Class_1_8CC63498A6370048___c : public ::System::Object
{
public:
	static ::Class_1_8CC63498A6370048___c** StaticGet___9()
	{
		return (::Class_1_8CC63498A6370048___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8CC63498A6370048___c_TypeDefinitionIndex)->GetStaticField(0x143E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CC63498A6370048___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CC63498A6370048___C__CTOR_OFFSET))(this);
	}

	::Class_1_8CC63498A6370048* __cctor_b__48_0()
	{
		return ((::Class_1_8CC63498A6370048*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CC63498A6370048___C___CCTOR_B__48_0_OFFSET))(this);
	}
};

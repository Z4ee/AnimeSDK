#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3E24FF02038E726C;

#define CLASS_1_3E24FF02038E726C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C77D5B0)
#define CLASS_1_3E24FF02038E726C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C77D5F0)
#define CLASS_1_3E24FF02038E726C___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1C77D600)

inline static constexpr unsigned int Class_1_3E24FF02038E726C___c_TypeDefinitionIndex = 26468;

class Class_1_3E24FF02038E726C___c : public ::System::Object
{
public:
	static ::Class_1_3E24FF02038E726C___c** StaticGet___9()
	{
		return (::Class_1_3E24FF02038E726C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3E24FF02038E726C___c_TypeDefinitionIndex)->GetStaticField(0x571D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3E24FF02038E726C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E24FF02038E726C___C__CTOR_OFFSET))(this);
	}

	::Class_1_3E24FF02038E726C* __cctor_b__68_0()
	{
		return ((::Class_1_3E24FF02038E726C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E24FF02038E726C___C___CCTOR_B__68_0_OFFSET))(this);
	}
};

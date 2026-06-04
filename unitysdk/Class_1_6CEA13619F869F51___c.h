#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6CEA13619F869F51;

#define CLASS_1_6CEA13619F869F51___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A703C30)
#define CLASS_1_6CEA13619F869F51___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A703C70)
#define CLASS_1_6CEA13619F869F51___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1A703C80)

inline static constexpr unsigned int Class_1_6CEA13619F869F51___c_TypeDefinitionIndex = 32820;

class Class_1_6CEA13619F869F51___c : public ::System::Object
{
public:
	static ::Class_1_6CEA13619F869F51___c** StaticGet___9()
	{
		return (::Class_1_6CEA13619F869F51___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6CEA13619F869F51___c_TypeDefinitionIndex)->GetStaticField(0x362D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6CEA13619F869F51___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CEA13619F869F51___C__CTOR_OFFSET))(this);
	}

	::Class_1_6CEA13619F869F51* __cctor_b__48_0()
	{
		return ((::Class_1_6CEA13619F869F51*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CEA13619F869F51___C___CCTOR_B__48_0_OFFSET))(this);
	}
};

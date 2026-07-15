#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D756F55115869660;

#define CLASS_1_D756F55115869660___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFC04E0)
#define CLASS_1_D756F55115869660___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFC0520)
#define CLASS_1_D756F55115869660___C___CCTOR_B__47_0_OFFSET UNITYSDK_OFFSET(0x1BFC0530)

inline static constexpr unsigned int Class_1_D756F55115869660___c_TypeDefinitionIndex = 30471;

class Class_1_D756F55115869660___c : public ::System::Object
{
public:
	static ::Class_1_D756F55115869660___c** StaticGet___9()
	{
		return (::Class_1_D756F55115869660___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D756F55115869660___c_TypeDefinitionIndex)->GetStaticField(0x283C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D756F55115869660___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D756F55115869660___C__CTOR_OFFSET))(this);
	}

	::Class_1_D756F55115869660* __cctor_b__47_0()
	{
		return ((::Class_1_D756F55115869660*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D756F55115869660___C___CCTOR_B__47_0_OFFSET))(this);
	}
};

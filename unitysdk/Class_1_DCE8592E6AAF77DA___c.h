#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DCE8592E6AAF77DA;

#define CLASS_1_DCE8592E6AAF77DA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9CB850)
#define CLASS_1_DCE8592E6AAF77DA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9CB880)
#define CLASS_1_DCE8592E6AAF77DA___C___CCTOR_B__40_0_OFFSET UNITYSDK_OFFSET(0x1D9CB890)

inline static constexpr unsigned int Class_1_DCE8592E6AAF77DA___c_TypeDefinitionIndex = 32596;

class Class_1_DCE8592E6AAF77DA___c : public ::System::Object
{
public:
	static ::Class_1_DCE8592E6AAF77DA___c** StaticGet___9()
	{
		return (::Class_1_DCE8592E6AAF77DA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DCE8592E6AAF77DA___c_TypeDefinitionIndex)->GetStaticField(0x12460);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DCE8592E6AAF77DA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE8592E6AAF77DA___C__CTOR_OFFSET))(this);
	}

	::Class_1_DCE8592E6AAF77DA* __cctor_b__40_0()
	{
		return ((::Class_1_DCE8592E6AAF77DA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE8592E6AAF77DA___C___CCTOR_B__40_0_OFFSET))(this);
	}
};

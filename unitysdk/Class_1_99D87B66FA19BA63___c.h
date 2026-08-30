#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_99D87B66FA19BA63;

#define CLASS_1_99D87B66FA19BA63___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D85FAD0)
#define CLASS_1_99D87B66FA19BA63___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D85FB10)
#define CLASS_1_99D87B66FA19BA63___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1D85FB20)

inline static constexpr unsigned int Class_1_99D87B66FA19BA63___c_TypeDefinitionIndex = 28353;

class Class_1_99D87B66FA19BA63___c : public ::System::Object
{
public:
	static ::Class_1_99D87B66FA19BA63___c** StaticGet___9()
	{
		return (::Class_1_99D87B66FA19BA63___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_99D87B66FA19BA63___c_TypeDefinitionIndex)->GetStaticField(0x37770);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63___C__CTOR_OFFSET))(this);
	}

	::Class_1_99D87B66FA19BA63* __cctor_b__38_0()
	{
		return ((::Class_1_99D87B66FA19BA63*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63___C___CCTOR_B__38_0_OFFSET))(this);
	}
};

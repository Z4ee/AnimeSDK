#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_97EABDA53029AA01;

#define CLASS_1_97EABDA53029AA01___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFF8030)
#define CLASS_1_97EABDA53029AA01___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF8070)
#define CLASS_1_97EABDA53029AA01___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DFF8080)

inline static constexpr unsigned int Class_1_97EABDA53029AA01___c_TypeDefinitionIndex = 26297;

class Class_1_97EABDA53029AA01___c : public ::System::Object
{
public:
	static ::Class_1_97EABDA53029AA01___c** StaticGet___9()
	{
		return (::Class_1_97EABDA53029AA01___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_97EABDA53029AA01___c_TypeDefinitionIndex)->GetStaticField(0x5DC80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_97EABDA53029AA01___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97EABDA53029AA01___C__CTOR_OFFSET))(this);
	}

	::Class_1_97EABDA53029AA01* __cctor_b__43_0()
	{
		return ((::Class_1_97EABDA53029AA01*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97EABDA53029AA01___C___CCTOR_B__43_0_OFFSET))(this);
	}
};

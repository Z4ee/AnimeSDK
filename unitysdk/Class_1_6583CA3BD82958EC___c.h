#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6583CA3BD82958EC;

#define CLASS_1_6583CA3BD82958EC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19517B10)
#define CLASS_1_6583CA3BD82958EC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19517B50)
#define CLASS_1_6583CA3BD82958EC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x19517B60)

inline static constexpr unsigned int Class_1_6583CA3BD82958EC___c_TypeDefinitionIndex = 25149;

class Class_1_6583CA3BD82958EC___c : public ::System::Object
{
public:
	static ::Class_1_6583CA3BD82958EC___c** StaticGet___9()
	{
		return (::Class_1_6583CA3BD82958EC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6583CA3BD82958EC___c_TypeDefinitionIndex)->GetStaticField(0x44FD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6583CA3BD82958EC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6583CA3BD82958EC___C__CTOR_OFFSET))(this);
	}

	::Class_1_6583CA3BD82958EC* __cctor_b__33_0()
	{
		return ((::Class_1_6583CA3BD82958EC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6583CA3BD82958EC___C___CCTOR_B__33_0_OFFSET))(this);
	}
};

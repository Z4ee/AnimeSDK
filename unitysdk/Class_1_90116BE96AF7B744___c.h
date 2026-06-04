#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_90116BE96AF7B744;

#define CLASS_1_90116BE96AF7B744___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7A3DB0)
#define CLASS_1_90116BE96AF7B744___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7A3DF0)
#define CLASS_1_90116BE96AF7B744___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1A7A3E00)

inline static constexpr unsigned int Class_1_90116BE96AF7B744___c_TypeDefinitionIndex = 24438;

class Class_1_90116BE96AF7B744___c : public ::System::Object
{
public:
	static ::Class_1_90116BE96AF7B744___c** StaticGet___9()
	{
		return (::Class_1_90116BE96AF7B744___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_90116BE96AF7B744___c_TypeDefinitionIndex)->GetStaticField(0x48D40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744___C__CTOR_OFFSET))(this);
	}

	::Class_1_90116BE96AF7B744* __cctor_b__48_0()
	{
		return ((::Class_1_90116BE96AF7B744*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744___C___CCTOR_B__48_0_OFFSET))(this);
	}
};

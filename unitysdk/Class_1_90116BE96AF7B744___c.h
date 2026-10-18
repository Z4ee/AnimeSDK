#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_90116BE96AF7B744;

#define CLASS_1_90116BE96AF7B744___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E58B7C0)
#define CLASS_1_90116BE96AF7B744___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E58B7F0)
#define CLASS_1_90116BE96AF7B744___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E58B800)

inline static constexpr unsigned int Class_1_90116BE96AF7B744___c_TypeDefinitionIndex = 33446;

class Class_1_90116BE96AF7B744___c : public ::System::Object
{
public:
	static ::Class_1_90116BE96AF7B744___c** StaticGet___9()
	{
		return (::Class_1_90116BE96AF7B744___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_90116BE96AF7B744___c_TypeDefinitionIndex)->GetStaticField(0x37780);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744___C__CTOR_OFFSET))(this);
	}

	::Class_1_90116BE96AF7B744* __cctor_b__53_0()
	{
		return ((::Class_1_90116BE96AF7B744*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744___C___CCTOR_B__53_0_OFFSET))(this);
	}
};

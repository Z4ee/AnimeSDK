#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8388853775500737;

#define CLASS_1_8388853775500737___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6EA060)
#define CLASS_1_8388853775500737___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6EA090)
#define CLASS_1_8388853775500737___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1E6EA0A0)

inline static constexpr unsigned int Class_1_8388853775500737___c_TypeDefinitionIndex = 34239;

class Class_1_8388853775500737___c : public ::System::Object
{
public:
	static ::Class_1_8388853775500737___c** StaticGet___9()
	{
		return (::Class_1_8388853775500737___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8388853775500737___c_TypeDefinitionIndex)->GetStaticField(0x5BA60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8388853775500737___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8388853775500737___C__CTOR_OFFSET))(this);
	}

	::Class_1_8388853775500737* __cctor_b__63_0()
	{
		return ((::Class_1_8388853775500737*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8388853775500737___C___CCTOR_B__63_0_OFFSET))(this);
	}
};

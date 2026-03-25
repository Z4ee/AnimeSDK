#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_60B5E5A0CB5606E4;

#define CLASS_1_0ED6B63BB337230E_METHOD_1_5C6E1CA11918F3B1_OFFSET UNITYSDK_OFFSET(0x18385E60)
#define CLASS_1_0ED6B63BB337230E__CCTOR_OFFSET UNITYSDK_OFFSET(0x18385FC0)
#define CLASS_1_0ED6B63BB337230E__CTOR_OFFSET UNITYSDK_OFFSET(0x18385E50)

inline static constexpr unsigned int Class_1_0ED6B63BB337230E_TypeDefinitionIndex = 34050;

class Class_1_0ED6B63BB337230E : public ::System::Object
{
public:
	static ::Class_1_0ED6B63BB337230E** StaticGet_Field_1_0()
	{
		return (::Class_1_0ED6B63BB337230E**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0ED6B63BB337230E_TypeDefinitionIndex)->GetStaticField(0x26760);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0ED6B63BB337230E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0ED6B63BB337230E__CCTOR_OFFSET))();
	}

	::System::Object* Method_1_5C6E1CA11918F3B1(::Class_1_60B5E5A0CB5606E4* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_1_60B5E5A0CB5606E4*))((::PBYTE)hIl2Cpp + CLASS_1_0ED6B63BB337230E_METHOD_1_5C6E1CA11918F3B1_OFFSET))(this, a1);
	}
};

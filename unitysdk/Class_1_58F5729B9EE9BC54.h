#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_60B5E5A0CB5606E4;

#define CLASS_1_58F5729B9EE9BC54_METHOD_1_1F8005968C5BFBE4_OFFSET UNITYSDK_OFFSET(0x18383350)
#define CLASS_1_58F5729B9EE9BC54__CCTOR_OFFSET UNITYSDK_OFFSET(0x18383AC0)
#define CLASS_1_58F5729B9EE9BC54__CTOR_OFFSET UNITYSDK_OFFSET(0x18383340)

inline static constexpr unsigned int Class_1_58F5729B9EE9BC54_TypeDefinitionIndex = 34024;

class Class_1_58F5729B9EE9BC54 : public ::System::Object
{
public:
	static ::Class_1_58F5729B9EE9BC54** StaticGet_Field_1_0()
	{
		return (::Class_1_58F5729B9EE9BC54**)Il2CppClass::FromTypeDefinitionIndex(Class_1_58F5729B9EE9BC54_TypeDefinitionIndex)->GetStaticField(0x26750);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58F5729B9EE9BC54__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_58F5729B9EE9BC54__CCTOR_OFFSET))();
	}

	::System::Object* Method_1_1F8005968C5BFBE4(::Class_1_60B5E5A0CB5606E4* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_1_60B5E5A0CB5606E4*))((::PBYTE)hIl2Cpp + CLASS_1_58F5729B9EE9BC54_METHOD_1_1F8005968C5BFBE4_OFFSET))(this, a1);
	}
};

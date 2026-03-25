#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_EC1575D89BE622C6_METHOD_1_1C77BEFB194FCFF1_OFFSET UNITYSDK_OFFSET(0x89E24E0)
#define CLASS_1_EC1575D89BE622C6__CTOR_OFFSET UNITYSDK_OFFSET(0x89E2840)

inline static constexpr unsigned int Class_1_EC1575D89BE622C6_TypeDefinitionIndex = 55409;

class Class_1_EC1575D89BE622C6 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EC1575D89BE622C6_TypeDefinitionIndex)->GetStaticField(0x44B20);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC1575D89BE622C6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1C77BEFB194FCFF1(::System::Object*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*&))((::PBYTE)hIl2Cpp + CLASS_1_EC1575D89BE622C6_METHOD_1_1C77BEFB194FCFF1_OFFSET))(this, a1);
	}
};

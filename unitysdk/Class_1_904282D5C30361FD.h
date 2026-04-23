#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_904282D5C30361FD_METHOD_1_C9ABB91D9E5304C8_OFFSET UNITYSDK_OFFSET(0x127CED80)
#define CLASS_1_904282D5C30361FD__CTOR_OFFSET UNITYSDK_OFFSET(0x127CF110)

inline static constexpr unsigned int Class_1_904282D5C30361FD_TypeDefinitionIndex = 62601;

class Class_1_904282D5C30361FD : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_904282D5C30361FD_TypeDefinitionIndex)->GetStaticField(0x14220);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_904282D5C30361FD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C9ABB91D9E5304C8(::System::Object*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*&))((::PBYTE)hIl2Cpp + CLASS_1_904282D5C30361FD_METHOD_1_C9ABB91D9E5304C8_OFFSET))(this, a1);
	}
};

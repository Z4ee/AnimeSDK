#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_7FD2B143A9D70951_METHOD_1_D94D446371432B5F_OFFSET UNITYSDK_OFFSET(0x17A423B0)
#define CLASS_1_7FD2B143A9D70951__CTOR_OFFSET UNITYSDK_OFFSET(0x17A42790)

inline static constexpr unsigned int Class_1_7FD2B143A9D70951_TypeDefinitionIndex = 64898;

class Class_1_7FD2B143A9D70951 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FD2B143A9D70951_TypeDefinitionIndex)->GetStaticField(0x5F0D0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FD2B143A9D70951__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D94D446371432B5F(::System::Object*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*&))((::PBYTE)hIl2Cpp + CLASS_1_7FD2B143A9D70951_METHOD_1_D94D446371432B5F_OFFSET))(this, a1);
	}
};

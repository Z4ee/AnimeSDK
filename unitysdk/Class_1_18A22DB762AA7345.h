#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_18A22DB762AA7345_METHOD_1_3FC5D2EAE16048C0_OFFSET UNITYSDK_OFFSET(0x10C82C60)
#define CLASS_1_18A22DB762AA7345__CTOR_OFFSET UNITYSDK_OFFSET(0x10C83000)

inline static constexpr unsigned int Class_1_18A22DB762AA7345_TypeDefinitionIndex = 63533;

class Class_1_18A22DB762AA7345 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_18A22DB762AA7345_TypeDefinitionIndex)->GetStaticField(0x135D0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18A22DB762AA7345__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3FC5D2EAE16048C0(::System::Object*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*&))((::PBYTE)hIl2Cpp + CLASS_1_18A22DB762AA7345_METHOD_1_3FC5D2EAE16048C0_OFFSET))(this, a1);
	}
};

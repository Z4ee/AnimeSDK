#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_1E56593EF613E0FC_METHOD_1_32FE792EB1B0F498_OFFSET UNITYSDK_OFFSET(0x8852B80)
#define CLASS_1_1E56593EF613E0FC__CTOR_OFFSET UNITYSDK_OFFSET(0x8852F40)

inline static constexpr unsigned int Class_1_1E56593EF613E0FC_TypeDefinitionIndex = 55406;

class Class_1_1E56593EF613E0FC : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E56593EF613E0FC_TypeDefinitionIndex)->GetStaticField(0x48E30);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E56593EF613E0FC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_32FE792EB1B0F498(::System::Object*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*&))((::PBYTE)hIl2Cpp + CLASS_1_1E56593EF613E0FC_METHOD_1_32FE792EB1B0F498_OFFSET))(this, a1);
	}
};

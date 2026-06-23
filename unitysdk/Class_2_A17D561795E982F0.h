#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_DB4B27FBA0545EF9.h"

class Class_2_208CC9941471731A_896;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A17D561795E982F0_METHOD_2_2376486C27388F69_OFFSET UNITYSDK_OFFSET(0x15849FE0)
#define CLASS_2_A17D561795E982F0__CTOR_OFFSET UNITYSDK_OFFSET(0x15849FD0)

inline static constexpr unsigned int Class_2_A17D561795E982F0_TypeDefinitionIndex = 80221;

class Class_2_A17D561795E982F0 : public ::Class_1_DB4B27FBA0545EF9
{
public:
	::System::Collections::Generic::List_1<::System::Char>* Field_2_1; // 0x28
	::System::Boolean Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A17D561795E982F0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2376486C27388F69(::Class_2_208CC9941471731A_896* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_896*))((::PBYTE)hIl2Cpp + CLASS_2_A17D561795E982F0_METHOD_2_2376486C27388F69_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_66.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_880;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2589AE5A98A5493C_METHOD_1_0513334DCDF3B93F_OFFSET UNITYSDK_OFFSET(0x185CE2C0)
#define CLASS_1_2589AE5A98A5493C__CTOR_OFFSET UNITYSDK_OFFSET(0x185CE2B0)

inline static constexpr unsigned int Class_1_2589AE5A98A5493C_TypeDefinitionIndex = 64158;

class Class_1_2589AE5A98A5493C : public ::System::Object
{
public:
	::Enum_3_0A3761FE34514D6C_66 Field_1_0; // 0x10

	::System::Void _ctor(::Enum_3_0A3761FE34514D6C_66 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_66))((::PBYTE)hIl2Cpp + CLASS_1_2589AE5A98A5493C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_0513334DCDF3B93F(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_880*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_880*>*))((::PBYTE)hIl2Cpp + CLASS_1_2589AE5A98A5493C_METHOD_1_0513334DCDF3B93F_OFFSET))(this, a1);
	}
};

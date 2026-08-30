#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_66.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_931;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_98274A1A3981A020_1_METHOD_1_D1AED300D3995C08_OFFSET UNITYSDK_OFFSET(0x161563C0)
#define CLASS_1_98274A1A3981A020_1__CTOR_OFFSET UNITYSDK_OFFSET(0x161563B0)

inline static constexpr unsigned int Class_1_98274A1A3981A020_1_TypeDefinitionIndex = 67134;

class Class_1_98274A1A3981A020_1 : public ::System::Object
{
public:
	::Enum_3_0A3761FE34514D6C_66 NOCPEIEHPNM; // 0x10

	::System::Void _ctor(::Enum_3_0A3761FE34514D6C_66 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_66))((::PBYTE)hIl2Cpp + CLASS_1_98274A1A3981A020_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_D1AED300D3995C08(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_931*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_931*>*))((::PBYTE)hIl2Cpp + CLASS_1_98274A1A3981A020_1_METHOD_1_D1AED300D3995C08_OFFSET))(this, a1);
	}
};

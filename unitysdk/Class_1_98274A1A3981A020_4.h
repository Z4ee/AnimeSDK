#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_63.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_791;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_98274A1A3981A020_4_METHOD_1_7362ACBFB53F5DC5_OFFSET UNITYSDK_OFFSET(0x9E27330)
#define CLASS_1_98274A1A3981A020_4__CTOR_OFFSET UNITYSDK_OFFSET(0x9E27320)

inline static constexpr unsigned int Class_1_98274A1A3981A020_4_TypeDefinitionIndex = 61858;

class Class_1_98274A1A3981A020_4 : public ::System::Object
{
public:
	::Enum_3_0A3761FE34514D6C_63 Field_1_0; // 0x10

	::System::Void _ctor(::Enum_3_0A3761FE34514D6C_63 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_63))((::PBYTE)hIl2Cpp + CLASS_1_98274A1A3981A020_4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_7362ACBFB53F5DC5(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_791*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_791*>*))((::PBYTE)hIl2Cpp + CLASS_1_98274A1A3981A020_4_METHOD_1_7362ACBFB53F5DC5_OFFSET))(this, a1);
	}
};

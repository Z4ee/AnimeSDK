#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_62.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_691;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_98274A1A3981A020_2_METHOD_1_9CD92966DD51DEAF_OFFSET UNITYSDK_OFFSET(0x10B351F0)
#define CLASS_1_98274A1A3981A020_2__CTOR_OFFSET UNITYSDK_OFFSET(0x10B351E0)

inline static constexpr unsigned int Class_1_98274A1A3981A020_2_TypeDefinitionIndex = 54656;

class Class_1_98274A1A3981A020_2 : public ::System::Object
{
public:
	::Enum_3_0A3761FE34514D6C_62 Field_1_0; // 0x10

	::System::Void _ctor(::Enum_3_0A3761FE34514D6C_62 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_62))((::PBYTE)hIl2Cpp + CLASS_1_98274A1A3981A020_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_9CD92966DD51DEAF(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_691*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_691*>*))((::PBYTE)hIl2Cpp + CLASS_1_98274A1A3981A020_2_METHOD_1_9CD92966DD51DEAF_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_63.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_791;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_98274A1A3981A020_1_METHOD_1_5345989249812B2D_OFFSET UNITYSDK_OFFSET(0x90EA800)
#define CLASS_1_98274A1A3981A020_1__CTOR_OFFSET UNITYSDK_OFFSET(0x90EA7F0)

inline static constexpr unsigned int Class_1_98274A1A3981A020_1_TypeDefinitionIndex = 61839;

class Class_1_98274A1A3981A020_1 : public ::System::Object
{
public:
	::Enum_3_0A3761FE34514D6C_63 Field_1_0; // 0x10

	::System::Void _ctor(::Enum_3_0A3761FE34514D6C_63 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_63))((::PBYTE)hIl2Cpp + CLASS_1_98274A1A3981A020_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_5345989249812B2D(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_791*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_791*>*))((::PBYTE)hIl2Cpp + CLASS_1_98274A1A3981A020_1_METHOD_1_5345989249812B2D_OFFSET))(this, a1);
	}
};

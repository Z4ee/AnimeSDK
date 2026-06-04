#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_63.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_842;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DA74864571A0573D_1_METHOD_1_18C340C2AA96D834_OFFSET UNITYSDK_OFFSET(0x13558F40)
#define CLASS_1_DA74864571A0573D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13558F30)

inline static constexpr unsigned int Class_1_DA74864571A0573D_1_TypeDefinitionIndex = 62777;

class Class_1_DA74864571A0573D_1 : public ::System::Object
{
public:
	::Enum_3_0A3761FE34514D6C_63 Field_1_0; // 0x10

	::System::Void _ctor(::Enum_3_0A3761FE34514D6C_63 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_63))((::PBYTE)hIl2Cpp + CLASS_1_DA74864571A0573D_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_18C340C2AA96D834(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_842*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_842*>*))((::PBYTE)hIl2Cpp + CLASS_1_DA74864571A0573D_1_METHOD_1_18C340C2AA96D834_OFFSET))(this, a1);
	}
};

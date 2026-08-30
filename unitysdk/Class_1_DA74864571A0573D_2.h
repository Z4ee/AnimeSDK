#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_66.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_931;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DA74864571A0573D_2_METHOD_1_18C340C2AA96D834_OFFSET UNITYSDK_OFFSET(0x17A07CA0)
#define CLASS_1_DA74864571A0573D_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17A07C90)

inline static constexpr unsigned int Class_1_DA74864571A0573D_2_TypeDefinitionIndex = 67141;

class Class_1_DA74864571A0573D_2 : public ::System::Object
{
public:
	::Enum_3_0A3761FE34514D6C_66 NOCPEIEHPNM; // 0x10

	::System::Void _ctor(::Enum_3_0A3761FE34514D6C_66 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_66))((::PBYTE)hIl2Cpp + CLASS_1_DA74864571A0573D_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_18C340C2AA96D834(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_931*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_931*>*))((::PBYTE)hIl2Cpp + CLASS_1_DA74864571A0573D_2_METHOD_1_18C340C2AA96D834_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_123;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9DFAA5A6D78EDC9A_GET_DESC_OFFSET UNITYSDK_OFFSET(0xE825E10)
#define CLASS_1_9DFAA5A6D78EDC9A__CTOR_OFFSET UNITYSDK_OFFSET(0xE826120)

inline static constexpr unsigned int Class_1_9DFAA5A6D78EDC9A_TypeDefinitionIndex = 79665;

class Class_1_9DFAA5A6D78EDC9A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_123*>* HBAKPIJAKDI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DFAA5A6D78EDC9A__CTOR_OFFSET))(this);
	}

	::System::String* get_Desc()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DFAA5A6D78EDC9A_GET_DESC_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_483;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_944BB44EEDDCA6F2_METHOD_1_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x145B3250)
#define CLASS_1_944BB44EEDDCA6F2_METHOD_1_98CD66A7F3C102A5_OFFSET UNITYSDK_OFFSET(0x145B30A0)
#define CLASS_1_944BB44EEDDCA6F2_METHOD_1_9C1F668AC136A1A1_OFFSET UNITYSDK_OFFSET(0x145B3550)
#define CLASS_1_944BB44EEDDCA6F2_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x145B3460)
#define CLASS_1_944BB44EEDDCA6F2_METHOD_1_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x145B33E0)
#define CLASS_1_944BB44EEDDCA6F2__CTOR_OFFSET UNITYSDK_OFFSET(0x145B3020)

inline static constexpr unsigned int Class_1_944BB44EEDDCA6F2_TypeDefinitionIndex = 51437;

class Class_1_944BB44EEDDCA6F2 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_1; // 0x0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_483*>* Field_1_6; // 0x10
	::System::String* Field_1_0; // 0x18
	::Class_0_16E4307DCC419505_483* Field_1_7; // 0x20
	::Foundation::Coroutine::CoroutineHandle Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_944BB44EEDDCA6F2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_98CD66A7F3C102A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_944BB44EEDDCA6F2_METHOD_1_98CD66A7F3C102A5_OFFSET))(this);
	}

	::System::Void Method_1_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_944BB44EEDDCA6F2_METHOD_1_DB67EEFB041425EC_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_944BB44EEDDCA6F2_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_9C1F668AC136A1A1(::Class_0_16E4307DCC419505_483* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_483*))((::PBYTE)hIl2Cpp + CLASS_1_944BB44EEDDCA6F2_METHOD_1_9C1F668AC136A1A1_OFFSET))(this, a1);
	}

	::System::Void Method_1_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_944BB44EEDDCA6F2_METHOD_1_60E1F7F58CCF739F_OFFSET))(this);
	}
};

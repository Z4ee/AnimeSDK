#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7FCED7C391FCF2F8;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_13D50D0521B5E431_METHOD_1_522C97A47C3F7DF2_OFFSET UNITYSDK_OFFSET(0xD397290)
#define CLASS_1_13D50D0521B5E431_METHOD_1_60B5931C93B2E56E_OFFSET UNITYSDK_OFFSET(0xD3975B0)
#define CLASS_1_13D50D0521B5E431_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xD397220)
#define CLASS_1_13D50D0521B5E431__CTOR_OFFSET UNITYSDK_OFFSET(0xD397640)

inline static constexpr unsigned int Class_1_13D50D0521B5E431_TypeDefinitionIndex = 56584;

class Class_1_13D50D0521B5E431 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13D50D0521B5E431__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13D50D0521B5E431_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_522C97A47C3F7DF2(::Class_1_7FCED7C391FCF2F8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FCED7C391FCF2F8*))((::PBYTE)hIl2Cpp + CLASS_1_13D50D0521B5E431_METHOD_1_522C97A47C3F7DF2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_60B5931C93B2E56E(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_13D50D0521B5E431_METHOD_1_60B5931C93B2E56E_OFFSET))(this, a1, a2);
	}
};

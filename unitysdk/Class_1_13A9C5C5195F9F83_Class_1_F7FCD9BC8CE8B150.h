#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_13A9C5C5195F9F83_CLASS_1_F7FCD9BC8CE8B150_METHOD_1_01C70150D3FE9541_OFFSET UNITYSDK_OFFSET(0x1C139E70)
#define CLASS_1_13A9C5C5195F9F83_CLASS_1_F7FCD9BC8CE8B150_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1C139ED0)
#define CLASS_1_13A9C5C5195F9F83_CLASS_1_F7FCD9BC8CE8B150_METHOD_1_DF36652FF6AEAAC1_OFFSET UNITYSDK_OFFSET(0x1C139D70)
#define CLASS_1_13A9C5C5195F9F83_CLASS_1_F7FCD9BC8CE8B150__CTOR_OFFSET UNITYSDK_OFFSET(0x1C139D10)

inline static constexpr unsigned int Class_1_13A9C5C5195F9F83_Class_1_F7FCD9BC8CE8B150_TypeDefinitionIndex = 42580;

class Class_1_13A9C5C5195F9F83_Class_1_F7FCD9BC8CE8B150 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13A9C5C5195F9F83_CLASS_1_F7FCD9BC8CE8B150__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_DF36652FF6AEAAC1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_13A9C5C5195F9F83_CLASS_1_F7FCD9BC8CE8B150_METHOD_1_DF36652FF6AEAAC1_OFFSET))(this, a1);
	}

	::System::Void Method_1_01C70150D3FE9541(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_13A9C5C5195F9F83_CLASS_1_F7FCD9BC8CE8B150_METHOD_1_01C70150D3FE9541_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13A9C5C5195F9F83_CLASS_1_F7FCD9BC8CE8B150_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};

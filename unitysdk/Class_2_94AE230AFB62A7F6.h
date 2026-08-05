#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_4E7CB4BEC9F51C9D;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC419505_159;

#define CLASS_2_94AE230AFB62A7F6_METHOD_2_2BE69DE531232482_OFFSET UNITYSDK_OFFSET(0x18B589D0)
#define CLASS_2_94AE230AFB62A7F6_METHOD_2_84063E5AD711736E_OFFSET UNITYSDK_OFFSET(0x18B59120)
#define CLASS_2_94AE230AFB62A7F6_METHOD_2_98CD66A7F3C102A5_OFFSET UNITYSDK_OFFSET(0x18B58F80)
#define CLASS_2_94AE230AFB62A7F6_METHOD_2_D2F3C68D4BBF8D9A_OFFSET UNITYSDK_OFFSET(0x18B58C90)
#define CLASS_2_94AE230AFB62A7F6_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x18B58840)
#define CLASS_2_94AE230AFB62A7F6__CTOR_OFFSET UNITYSDK_OFFSET(0x18B588C0)

inline static constexpr unsigned int Class_2_94AE230AFB62A7F6_TypeDefinitionIndex = 50967;

class Class_2_94AE230AFB62A7F6 : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_7; // 0x80
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_0; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_4E7CB4BEC9F51C9D*>* Field_2_1; // 0x90
	::Class_0_16E4307DCC419505_159<::System::Boolean>* Field_2_6; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94AE230AFB62A7F6__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94AE230AFB62A7F6_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_4E7CB4BEC9F51C9D*>* Method_2_2BE69DE531232482(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_4E7CB4BEC9F51C9D*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_94AE230AFB62A7F6_METHOD_2_2BE69DE531232482_OFFSET))(this, a1);
	}

	::System::Void Method_2_98CD66A7F3C102A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94AE230AFB62A7F6_METHOD_2_98CD66A7F3C102A5_OFFSET))(this);
	}

	::Class_2_4E7CB4BEC9F51C9D* Method_2_D2F3C68D4BBF8D9A(::System::Int32 a1)
	{
		return ((::Class_2_4E7CB4BEC9F51C9D*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_94AE230AFB62A7F6_METHOD_2_D2F3C68D4BBF8D9A_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_2_84063E5AD711736E(::System::Int32 a1)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_94AE230AFB62A7F6_METHOD_2_84063E5AD711736E_OFFSET))(this, a1);
	}
};

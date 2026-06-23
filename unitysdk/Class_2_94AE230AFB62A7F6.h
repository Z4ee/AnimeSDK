#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_BD3091CEC7111000;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC419505_165;

#define CLASS_2_94AE230AFB62A7F6_METHOD_2_2BC55A66CB2B0118_OFFSET UNITYSDK_OFFSET(0x14E505D0)
#define CLASS_2_94AE230AFB62A7F6_METHOD_2_2BE69DE531232482_OFFSET UNITYSDK_OFFSET(0x14E4FDF0)
#define CLASS_2_94AE230AFB62A7F6_METHOD_2_50F17398F19127AF_OFFSET UNITYSDK_OFFSET(0x14E500B0)
#define CLASS_2_94AE230AFB62A7F6_METHOD_2_EE436184CDEEF30D_OFFSET UNITYSDK_OFFSET(0x14E50390)
#define CLASS_2_94AE230AFB62A7F6_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x14E4FC20)
#define CLASS_2_94AE230AFB62A7F6__CTOR_OFFSET UNITYSDK_OFFSET(0x14E4FCA0)

inline static constexpr unsigned int Class_2_94AE230AFB62A7F6_TypeDefinitionIndex = 42638;

class Class_2_94AE230AFB62A7F6 : public ::Class_1_C331A5DC726F030A
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_2; // 0x60
	::Class_0_16E4307DCC419505_165<::System::Boolean>* Field_2_3; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_BD3091CEC7111000*>* Field_2_0; // 0x70
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_1; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94AE230AFB62A7F6__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94AE230AFB62A7F6_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_BD3091CEC7111000*>* Method_2_2BE69DE531232482(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_BD3091CEC7111000*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_94AE230AFB62A7F6_METHOD_2_2BE69DE531232482_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_2_EE436184CDEEF30D(::System::Int32 a1)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_94AE230AFB62A7F6_METHOD_2_EE436184CDEEF30D_OFFSET))(this, a1);
	}

	::System::Void Method_2_2BC55A66CB2B0118()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94AE230AFB62A7F6_METHOD_2_2BC55A66CB2B0118_OFFSET))(this);
	}

	::Class_2_BD3091CEC7111000* Method_2_50F17398F19127AF(::System::Int32 a1)
	{
		return ((::Class_2_BD3091CEC7111000*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_94AE230AFB62A7F6_METHOD_2_50F17398F19127AF_OFFSET))(this, a1);
	}
};

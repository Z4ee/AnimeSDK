#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_581762AE8CB44C88;
class Class_1_D05699509194BF9B;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T1, typename T2> class __f__AnonymousType0_2;

#define CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F22CC0)
#define CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS51_0___TRYRECOMMENDMOLDFOREXAM_B__0_OFFSET UNITYSDK_OFFSET(0x15F236E0)
#define CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS51_0___TRYRECOMMENDMOLDFOREXAM_B__2_OFFSET UNITYSDK_OFFSET(0x15F23790)
#define CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS51_0___TRYRECOMMENDMOLDFOREXAM_G__MATCHES_4_OFFSET UNITYSDK_OFFSET(0x15F238C0)

inline static constexpr unsigned int Class_1_581762AE8CB44C88___c__DisplayClass51_0_TypeDefinitionIndex = 79446;

class Class_1_581762AE8CB44C88___c__DisplayClass51_0 : public ::System::Object
{
public:
	::Class_1_D05699509194BF9B* recommendMold; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* placedCountOfChip; // 0x18
	::Class_1_581762AE8CB44C88* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS51_0__CTOR_OFFSET))(this);
	}

	::__f__AnonymousType0_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>* __TryRecommendMoldForExam_b__0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32> a1)
	{
		return ((::__f__AnonymousType0_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS51_0___TRYRECOMMENDMOLDFOREXAM_B__0_OFFSET))(this, a1);
	}

	::Class_1_D05699509194BF9B* __TryRecommendMoldForExam_b__2(::__f__AnonymousType0_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>* a1)
	{
		return ((::Class_1_D05699509194BF9B*(*)(::PVOID, ::__f__AnonymousType0_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS51_0___TRYRECOMMENDMOLDFOREXAM_B__2_OFFSET))(this, a1);
	}

	::System::Boolean __TryRecommendMoldForExam_g__Matches_4(::Class_1_D05699509194BF9B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D05699509194BF9B*))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C__DISPLAYCLASS51_0___TRYRECOMMENDMOLDFOREXAM_G__MATCHES_4_OFFSET))(this, a1);
	}
};

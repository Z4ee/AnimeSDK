#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1056;
class Class_0_16E4307DCC419505_1057;
class Class_1_F45A2864DDBB5952;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_75D3FF54F4C359AB_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xC304640)
#define CLASS_1_75D3FF54F4C359AB_METHOD_1_1943FA7E230C2956_OFFSET UNITYSDK_OFFSET(0xC304800)
#define CLASS_1_75D3FF54F4C359AB_METHOD_1_4AC38C7D74462263_OFFSET UNITYSDK_OFFSET(0xC3044F0)
#define CLASS_1_75D3FF54F4C359AB_METHOD_1_4BF6F95CB7C46B46_OFFSET UNITYSDK_OFFSET(0xC304410)
#define CLASS_1_75D3FF54F4C359AB_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xC3045B0)
#define CLASS_1_75D3FF54F4C359AB_METHOD_1_D41F2EAAA87E2BFD_OFFSET UNITYSDK_OFFSET(0xC3047A0)
#define CLASS_1_75D3FF54F4C359AB_METHOD_1_EA3781602A491EEE_OFFSET UNITYSDK_OFFSET(0xC304320)
#define CLASS_1_75D3FF54F4C359AB_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xC3046F0)
#define CLASS_1_75D3FF54F4C359AB__CTOR_OFFSET UNITYSDK_OFFSET(0xC304D10)

inline static constexpr unsigned int Class_1_75D3FF54F4C359AB_TypeDefinitionIndex = 67171;

class Class_1_75D3FF54F4C359AB : public ::System::Object
{
public:
	::Class_1_F45A2864DDBB5952* LOJPHCKIJMF; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Double>* GFOPFBIHFFE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75D3FF54F4C359AB__CTOR_OFFSET))(this);
	}

	::System::Double Method_1_EA3781602A491EEE(::System::String* a1)
	{
		return ((::System::Double(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_75D3FF54F4C359AB_METHOD_1_EA3781602A491EEE_OFFSET))(this, a1);
	}

	::System::Void Method_1_4BF6F95CB7C46B46(::System::String* a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_75D3FF54F4C359AB_METHOD_1_4BF6F95CB7C46B46_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4AC38C7D74462263(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_75D3FF54F4C359AB_METHOD_1_4AC38C7D74462263_OFFSET))(this, a1);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75D3FF54F4C359AB_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Double>>* GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Double>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75D3FF54F4C359AB_GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75D3FF54F4C359AB_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1057* Method_1_D41F2EAAA87E2BFD()
	{
		return ((::Class_0_16E4307DCC419505_1057*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75D3FF54F4C359AB_METHOD_1_D41F2EAAA87E2BFD_OFFSET))(this);
	}

	::System::Void Method_1_1943FA7E230C2956(::Class_1_75D3FF54F4C359AB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_75D3FF54F4C359AB*))((::PBYTE)hIl2Cpp + CLASS_1_75D3FF54F4C359AB_METHOD_1_1943FA7E230C2956_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_812;
class Class_0_16E4307DCC419505_813;
class Class_1_F45A2864DDBB5952;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_75D3FF54F4C359AB_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x12A629D0)
#define CLASS_1_75D3FF54F4C359AB_METHOD_1_1BB4029F51995479_OFFSET UNITYSDK_OFFSET(0x12A62870)
#define CLASS_1_75D3FF54F4C359AB_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x12A62930)
#define CLASS_1_75D3FF54F4C359AB_METHOD_1_4BF6F95CB7C46B46_OFFSET UNITYSDK_OFFSET(0x12A62790)
#define CLASS_1_75D3FF54F4C359AB_METHOD_1_D41F2EAAA87E2BFD_OFFSET UNITYSDK_OFFSET(0x12A62B30)
#define CLASS_1_75D3FF54F4C359AB_METHOD_1_DA42B87A2F252530_OFFSET UNITYSDK_OFFSET(0x12A62B90)
#define CLASS_1_75D3FF54F4C359AB_METHOD_1_E06079BC29420205_OFFSET UNITYSDK_OFFSET(0x12A626F0)
#define CLASS_1_75D3FF54F4C359AB_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x12A62A80)
#define CLASS_1_75D3FF54F4C359AB__CTOR_OFFSET UNITYSDK_OFFSET(0x12A62F00)

inline static constexpr unsigned int Class_1_75D3FF54F4C359AB_TypeDefinitionIndex = 61874;

class Class_1_75D3FF54F4C359AB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Double>* Field_1_0; // 0x10
	::Class_1_F45A2864DDBB5952* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75D3FF54F4C359AB__CTOR_OFFSET))(this);
	}

	::System::Double Method_1_E06079BC29420205(::System::String* a1)
	{
		return ((::System::Double(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_75D3FF54F4C359AB_METHOD_1_E06079BC29420205_OFFSET))(this, a1);
	}

	::System::Void Method_1_4BF6F95CB7C46B46(::System::String* a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_75D3FF54F4C359AB_METHOD_1_4BF6F95CB7C46B46_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1BB4029F51995479(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_75D3FF54F4C359AB_METHOD_1_1BB4029F51995479_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75D3FF54F4C359AB_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Double>>* GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Double>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75D3FF54F4C359AB_GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75D3FF54F4C359AB_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_813* Method_1_D41F2EAAA87E2BFD()
	{
		return ((::Class_0_16E4307DCC419505_813*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75D3FF54F4C359AB_METHOD_1_D41F2EAAA87E2BFD_OFFSET))(this);
	}

	::System::Void Method_1_DA42B87A2F252530(::Class_1_75D3FF54F4C359AB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_75D3FF54F4C359AB*))((::PBYTE)hIl2Cpp + CLASS_1_75D3FF54F4C359AB_METHOD_1_DA42B87A2F252530_OFFSET))(this, a1);
	}
};

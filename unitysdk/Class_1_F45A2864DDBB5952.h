#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_811;
class Class_0_16E4307DCC419505_812;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_F45A2864DDBB5952_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x965FFC0)
#define CLASS_1_F45A2864DDBB5952_METHOD_1_3562EFBAA8F7E504_OFFSET UNITYSDK_OFFSET(0x965FD10)
#define CLASS_1_F45A2864DDBB5952_METHOD_1_38C4144493A5FA2A_OFFSET UNITYSDK_OFFSET(0x965FE00)
#define CLASS_1_F45A2864DDBB5952_METHOD_1_3E0C0431E8452973_OFFSET UNITYSDK_OFFSET(0x965FEA0)
#define CLASS_1_F45A2864DDBB5952_METHOD_1_A5FAA41508F36154_OFFSET UNITYSDK_OFFSET(0x96601C0)
#define CLASS_1_F45A2864DDBB5952_METHOD_1_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x965FF30)
#define CLASS_1_F45A2864DDBB5952_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x96600C0)
#define CLASS_1_F45A2864DDBB5952__CTOR_OFFSET UNITYSDK_OFFSET(0x965FCC0)

inline static constexpr unsigned int Class_1_F45A2864DDBB5952_TypeDefinitionIndex = 61889;

class Class_1_F45A2864DDBB5952 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_811* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_811* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_811*))((::PBYTE)hIl2Cpp + CLASS_1_F45A2864DDBB5952__CTOR_OFFSET))(this, a1);
	}

	::System::Double Method_1_3562EFBAA8F7E504(::System::String* a1)
	{
		return ((::System::Double(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F45A2864DDBB5952_METHOD_1_3562EFBAA8F7E504_OFFSET))(this, a1);
	}

	::System::Void Method_1_38C4144493A5FA2A(::System::String* a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_F45A2864DDBB5952_METHOD_1_38C4144493A5FA2A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E0C0431E8452973(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F45A2864DDBB5952_METHOD_1_3E0C0431E8452973_OFFSET))(this, a1);
	}

	::System::Void Method_1_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F45A2864DDBB5952_METHOD_1_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Double>>* GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Double>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F45A2864DDBB5952_GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F45A2864DDBB5952_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_812* Method_1_A5FAA41508F36154()
	{
		return ((::Class_0_16E4307DCC419505_812*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F45A2864DDBB5952_METHOD_1_A5FAA41508F36154_OFFSET))(this);
	}
};

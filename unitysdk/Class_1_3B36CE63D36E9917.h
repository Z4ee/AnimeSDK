#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_628;
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3B36CE63D36E9917_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xD368010)
#define CLASS_1_3B36CE63D36E9917_METHOD_1_CC03B00D7D862660_OFFSET UNITYSDK_OFFSET(0xD367ED0)
#define CLASS_1_3B36CE63D36E9917__CTOR_OFFSET UNITYSDK_OFFSET(0xD3680B0)

inline static constexpr unsigned int Class_1_3B36CE63D36E9917_TypeDefinitionIndex = 59187;

class Class_1_3B36CE63D36E9917 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action_1<::Class_0_16E4307DCC419505_628*>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B36CE63D36E9917__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CC03B00D7D862660(::Class_0_16E4307DCC419505_628* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_628*))((::PBYTE)hIl2Cpp + CLASS_1_3B36CE63D36E9917_METHOD_1_CC03B00D7D862660_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B36CE63D36E9917_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};

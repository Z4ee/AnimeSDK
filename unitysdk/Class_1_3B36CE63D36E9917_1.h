#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_592;
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3B36CE63D36E9917_1_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x97A4BC0)
#define CLASS_1_3B36CE63D36E9917_1_METHOD_1_CC03B00D7D862660_OFFSET UNITYSDK_OFFSET(0x97A4A80)
#define CLASS_1_3B36CE63D36E9917_1__CTOR_OFFSET UNITYSDK_OFFSET(0x97A4C60)

inline static constexpr unsigned int Class_1_3B36CE63D36E9917_1_TypeDefinitionIndex = 69825;

class Class_1_3B36CE63D36E9917_1 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action_1<::Class_0_16E4307DCC419505_592*>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B36CE63D36E9917_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CC03B00D7D862660(::Class_0_16E4307DCC419505_592* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_592*))((::PBYTE)hIl2Cpp + CLASS_1_3B36CE63D36E9917_1_METHOD_1_CC03B00D7D862660_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B36CE63D36E9917_1_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B7039134DC553D20_CLASS_1_411CE7DBE5F749E8__CTOR_OFFSET UNITYSDK_OFFSET(0x8B46FB0)

inline static constexpr unsigned int Class_1_B7039134DC553D20_Class_1_411CE7DBE5F749E8_TypeDefinitionIndex = 48606;

class Class_1_B7039134DC553D20_Class_1_411CE7DBE5F749E8 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x18
	::System::Boolean Field_1_4; // 0x20
	::System::Single Field_1_3; // 0x24
	::System::UInt32 Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7039134DC553D20_CLASS_1_411CE7DBE5F749E8__CTOR_OFFSET))(this);
	}
};

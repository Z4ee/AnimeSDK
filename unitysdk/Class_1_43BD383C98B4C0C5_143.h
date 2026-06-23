#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_55;
class Class_1_CC76D1702CC17C09_1;
class Class_1_CC76D1702CC17C09_2;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_43BD383C98B4C0C5_143__CTOR_OFFSET UNITYSDK_OFFSET(0x1C284730)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_143_TypeDefinitionIndex = 87769;

class Class_1_43BD383C98B4C0C5_143 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_CC76D1702CC17C09_1*>* Field_1_19; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_CC76D1702CC17C09_2*>* Field_1_18; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_7807B2B04302CD7B_55*>*>* Field_1_17; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_16; // 0x30
	::System::Single Field_1_12; // 0x38
	::System::Int32 Field_1_4; // 0x3C
	::System::Single Field_1_8; // 0x40
	::System::Int32 Field_1_3; // 0x44
	::System::Int32 Field_1_2; // 0x48
	::System::Int32 Field_1_14; // 0x4C
	::System::Single Field_1_11; // 0x50
	::System::Int32 Field_1_15; // 0x54
	::System::Single Field_1_6; // 0x58
	::System::Int32 Field_1_13; // 0x5C
	::System::Int32 Field_1_7; // 0x60
	::System::Int32 Field_1_0; // 0x64
	::System::Single Field_1_10; // 0x68
	::System::Int32 Field_1_1; // 0x6C
	::System::Int32 Field_1_9; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_143__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_33.h"
#include "unitysdk/Enum_3_63D176C405CC7947_2.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2;
class Class_1_D975FC0407AA8C9D;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FD772F14877F45E5__CTOR_OFFSET UNITYSDK_OFFSET(0x18C70AD0)

inline static constexpr unsigned int Class_1_FD772F14877F45E5_TypeDefinitionIndex = 39685;

class Class_1_FD772F14877F45E5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2*>* Field_1_0; // 0x10
	::Class_1_D975FC0407AA8C9D* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2*>* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x29
	::System::Boolean Field_1_5; // 0x2A
	::System::Boolean Field_1_6; // 0x2B
	::Enum_3_0A3761FE34514D6C_33 Field_1_7; // 0x2C
	::System::Int32 Field_1_8; // 0x30
	::System::UInt32 Field_1_9; // 0x34
	::System::UInt32 Field_1_10; // 0x38
	::System::UInt32 Field_1_11; // 0x3C
	::System::Boolean Field_1_12; // 0x40
	::System::Boolean Field_1_13; // 0x41
	::System::UInt32 Field_1_14; // 0x44
	::System::UInt32 Field_1_15; // 0x48
	::Enum_3_63D176C405CC7947_2 Field_1_16; // 0x4C
	::System::Int32 Field_1_17; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD772F14877F45E5__CTOR_OFFSET))(this);
	}
};

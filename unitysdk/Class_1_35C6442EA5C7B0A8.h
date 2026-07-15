#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_35C6442EA5C7B0A8__CTOR_OFFSET UNITYSDK_OFFSET(0x190F2F40)

inline static constexpr unsigned int Class_1_35C6442EA5C7B0A8_TypeDefinitionIndex = 34978;

class Class_1_35C6442EA5C7B0A8 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x28
	::System::Int32 Field_1_4; // 0x2C
	::System::Int32 Field_1_5; // 0x30
	::System::Int32 Field_1_6; // 0x34
	::System::Int32 Field_1_7; // 0x38
	::System::Int32 Field_1_8; // 0x3C
	::System::Int32 Field_1_9; // 0x40
	::System::Int32 Field_1_10; // 0x44
	::System::Int32 Field_1_11; // 0x48
	::System::Int32 Field_1_12; // 0x4C
	::System::Int32 Field_1_13; // 0x50
	::System::Int32 Field_1_14; // 0x54
	::System::Int32 Field_1_15; // 0x58
	::System::Int32 Field_1_16; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35C6442EA5C7B0A8__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CABE51A322880D76_CLEAR_OFFSET UNITYSDK_OFFSET(0x17E3EE80)
#define CLASS_1_CABE51A322880D76__CTOR_OFFSET UNITYSDK_OFFSET(0x17E3EF20)

inline static constexpr unsigned int Class_1_CABE51A322880D76_TypeDefinitionIndex = 38075;

class Class_1_CABE51A322880D76 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x18
	::System::Int32 Field_1_3; // 0x20
	::System::Single Field_1_2; // 0x24
	::System::Int32 Field_1_5; // 0x28
	::System::Int32 Field_1_4; // 0x2C
	::System::Int32 Field_1_8; // 0x30
	::System::Boolean Field_1_7; // 0x34
	::System::Single Field_1_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CABE51A322880D76__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CABE51A322880D76_CLEAR_OFFSET))(this);
	}
};

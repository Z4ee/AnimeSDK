#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_629D4F26795DE047.h"
#include "unitysdk/Enum_3_C45505F592150FC5.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_07A210D994F284D8;
class Class_3_6EF456A21AE85EEC_200;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0974AE3A8361F22E__CTOR_OFFSET UNITYSDK_OFFSET(0x162F9E80)

inline static constexpr unsigned int Class_1_0974AE3A8361F22E_TypeDefinitionIndex = 50638;

class Class_1_0974AE3A8361F22E : public ::System::Object
{
public:
	::Class_3_6EF456A21AE85EEC_200* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::Class_1_07A210D994F284D8*>* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>>* Field_1_6; // 0x20
	::Enum_3_C45505F592150FC5 Field_1_5; // 0x28
	::Enum_3_629D4F26795DE047 Field_1_0; // 0x2C
	::System::UInt32 Field_1_1; // 0x30
	::System::UInt32 Field_1_2; // 0x34
	::System::Boolean Field_1_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0974AE3A8361F22E__CTOR_OFFSET))(this);
	}
};

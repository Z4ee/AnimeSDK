#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0EC2EAECBA2A9EAF.h"
#include "unitysdk/Enum_3_629D4F26795DE047.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_07A210D994F284D8_1;
class Class_3_6EF456A21AE85EEC_76;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0974AE3A8361F22E__CTOR_OFFSET UNITYSDK_OFFSET(0xA9AD480)

inline static constexpr unsigned int Class_1_0974AE3A8361F22E_TypeDefinitionIndex = 41932;

class Class_1_0974AE3A8361F22E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_07A210D994F284D8_1*>* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>>* Field_1_6; // 0x18
	::Class_3_6EF456A21AE85EEC_76* Field_1_3; // 0x20
	::Enum_3_0EC2EAECBA2A9EAF Field_1_5; // 0x28
	::System::UInt32 Field_1_2; // 0x2C
	::Enum_3_629D4F26795DE047 Field_1_0; // 0x30
	::System::UInt32 Field_1_1; // 0x34
	::System::Boolean Field_1_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0974AE3A8361F22E__CTOR_OFFSET))(this);
	}
};

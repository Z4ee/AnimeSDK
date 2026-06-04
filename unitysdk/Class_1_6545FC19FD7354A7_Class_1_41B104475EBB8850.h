#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_127EAB4936C75FCC.h"
#include "unitysdk/Struct_2_4C8316D252AABDF5.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_6545FC19FD7354A7_CLASS_1_41B104475EBB8850__CTOR_OFFSET UNITYSDK_OFFSET(0x118F45A0)

inline static constexpr unsigned int Class_1_6545FC19FD7354A7_Class_1_41B104475EBB8850_TypeDefinitionIndex = 56750;

class Class_1_6545FC19FD7354A7_Class_1_41B104475EBB8850 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Nullable_1<::Struct_2_127EAB4936C75FCC> Field_1_2; // 0x20
	::System::Nullable_1<::Struct_2_4C8316D252AABDF5> Field_1_3; // 0x38
	::System::Boolean Field_1_4; // 0x60
	::System::Boolean Field_1_5; // 0x61
	::System::Boolean Field_1_6; // 0x62
	::System::Boolean Field_1_7; // 0x63
	::UnityEngine::Quaternion Field_1_8; // 0x64
	::System::Boolean Field_1_9; // 0x74
	::System::Boolean Field_1_10; // 0x75
	::System::Boolean Field_1_11; // 0x76
	::UnityEngine::Vector3 Field_1_12; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7_CLASS_1_41B104475EBB8850__CTOR_OFFSET))(this);
	}
};

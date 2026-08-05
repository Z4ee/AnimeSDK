#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_46DB46BDC7CA5A71.h"
#include "unitysdk/Enum_3_7BE1A4BA3F00E86A.h"
#include "unitysdk/Enum_3_8F1869110E889654.h"
#include "unitysdk/Enum_3_DFF27BC302DD42E7.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define CLASS_1_7E951C32CD9CF51B_METHOD_1_0128AC2F1B19C084_OFFSET UNITYSDK_OFFSET(0x181182D0)
#define CLASS_1_7E951C32CD9CF51B_METHOD_1_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x181162E0)
#define CLASS_1_7E951C32CD9CF51B_METHOD_1_A760E63D5276C63F_OFFSET UNITYSDK_OFFSET(0x18118380)
#define CLASS_1_7E951C32CD9CF51B_METHOD_1_AC165D621C73443D_OFFSET UNITYSDK_OFFSET(0x18117C90)
#define CLASS_1_7E951C32CD9CF51B__CTOR_OFFSET UNITYSDK_OFFSET(0x181162D0)

inline static constexpr unsigned int Class_1_7E951C32CD9CF51B_TypeDefinitionIndex = 41727;

class Class_1_7E951C32CD9CF51B : public ::System::Object
{
public:
	::System::String* Field_1_14; // 0x10
	::System::String* Field_1_12; // 0x18
	::System::String* Field_1_13; // 0x20
	::System::String* Field_1_15; // 0x28
	::System::String* Field_1_19; // 0x30
	::System::String* Field_1_18; // 0x38
	::Enum_3_8F1869110E889654 Field_1_3; // 0x40
	::UnityEngine::Vector3 Field_1_6; // 0x44
	::System::Single Field_1_5; // 0x50
	::UnityEngine::Vector3 Field_1_8; // 0x54
	::Enum_3_DFF27BC302DD42E7 Field_1_11; // 0x60
	::UnityEngine::Vector3 Field_1_7; // 0x64
	::System::Single Field_1_0; // 0x70
	::UnityEngine::Vector3 Field_1_10; // 0x74
	::UnityEngine::Vector3 Field_1_9; // 0x80
	::UnityEngine::Vector3 Field_1_4; // 0x8C
	::Enum_3_46DB46BDC7CA5A71 Field_1_1; // 0x98
	::Enum_3_7BE1A4BA3F00E86A Field_1_2; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E951C32CD9CF51B__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_7E951C32CD9CF51B_METHOD_1_0578713EDB32B89E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AC165D621C73443D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7E951C32CD9CF51B_METHOD_1_AC165D621C73443D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0128AC2F1B19C084(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7E951C32CD9CF51B_METHOD_1_0128AC2F1B19C084_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A760E63D5276C63F(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_7E951C32CD9CF51B_METHOD_1_A760E63D5276C63F_OFFSET))(this, a1);
	}
};

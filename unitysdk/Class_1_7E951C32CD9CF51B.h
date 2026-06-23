#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2C55BC2669693AB8.h"
#include "unitysdk/Enum_3_46DB46BDC7CA5A71.h"
#include "unitysdk/Enum_3_7BE1A4BA3F00E86A.h"
#include "unitysdk/Enum_3_8F1869110E889654.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define CLASS_1_7E951C32CD9CF51B_METHOD_1_0128AC2F1B19C084_OFFSET UNITYSDK_OFFSET(0x151FB980)
#define CLASS_1_7E951C32CD9CF51B_METHOD_1_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x151FBB00)
#define CLASS_1_7E951C32CD9CF51B_METHOD_1_6EBD83F4296195E4_OFFSET UNITYSDK_OFFSET(0x151FB340)
#define CLASS_1_7E951C32CD9CF51B_METHOD_1_A760E63D5276C63F_OFFSET UNITYSDK_OFFSET(0x151FBA30)
#define CLASS_1_7E951C32CD9CF51B__CTOR_OFFSET UNITYSDK_OFFSET(0x151FB330)

inline static constexpr unsigned int Class_1_7E951C32CD9CF51B_TypeDefinitionIndex = 53741;

class Class_1_7E951C32CD9CF51B : public ::System::Object
{
public:
	::System::String* Field_1_15; // 0x10
	::System::String* Field_1_16; // 0x18
	::System::String* Field_1_14; // 0x20
	::System::String* Field_1_13; // 0x28
	::System::String* Field_1_12; // 0x30
	::System::String* Field_1_17; // 0x38
	::UnityEngine::Vector3 Field_1_10; // 0x40
	::Enum_3_8F1869110E889654 Field_1_0; // 0x4C
	::UnityEngine::Vector3 Field_1_11; // 0x50
	::UnityEngine::Vector3 Field_1_4; // 0x5C
	::Enum_3_2C55BC2669693AB8 Field_1_8; // 0x68
	::UnityEngine::Vector3 Field_1_9; // 0x6C
	::Enum_3_46DB46BDC7CA5A71 Field_1_2; // 0x78
	::System::Single Field_1_6; // 0x7C
	::UnityEngine::Vector3 Field_1_5; // 0x80
	::System::Single Field_1_3; // 0x8C
	::UnityEngine::Vector3 Field_1_7; // 0x90
	::Enum_3_7BE1A4BA3F00E86A Field_1_1; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E951C32CD9CF51B__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_6EBD83F4296195E4(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7E951C32CD9CF51B_METHOD_1_6EBD83F4296195E4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0128AC2F1B19C084(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7E951C32CD9CF51B_METHOD_1_0128AC2F1B19C084_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A760E63D5276C63F(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_7E951C32CD9CF51B_METHOD_1_A760E63D5276C63F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_7E951C32CD9CF51B_METHOD_1_0578713EDB32B89E_OFFSET))(this, a1);
	}
};

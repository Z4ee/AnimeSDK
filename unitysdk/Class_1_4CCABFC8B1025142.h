#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_47E3A6D916E0C7B1.h"
#include "unitysdk/Enum_3_D397B64B7014E159.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_4CCABFC8B1025142_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1519EEA0)
#define CLASS_1_4CCABFC8B1025142_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1519D380)
#define CLASS_1_4CCABFC8B1025142_METHOD_1_993A24B415B41A1C_OFFSET UNITYSDK_OFFSET(0x1519D400)
#define CLASS_1_4CCABFC8B1025142_METHOD_1_CA444252700C31C6_OFFSET UNITYSDK_OFFSET(0x1519EF00)
#define CLASS_1_4CCABFC8B1025142__CTOR_OFFSET UNITYSDK_OFFSET(0x1519F4E0)

inline static constexpr unsigned int Class_1_4CCABFC8B1025142_TypeDefinitionIndex = 59977;

class Class_1_4CCABFC8B1025142 : public ::System::Object
{
public:
	::System::String* Field_1_3; // 0x10
	::UnityEngine::AnimationCurve* Field_1_12; // 0x18
	::System::String* Field_1_1; // 0x20
	::UnityEngine::AnimationCurve* Field_1_13; // 0x28
	::UnityEngine::AnimationCurve* Field_1_15; // 0x30
	::UnityEngine::AnimationCurve* Field_1_14; // 0x38
	::System::Int32 Field_1_19; // 0x40
	::System::Single Field_1_9; // 0x44
	::System::Single Field_1_16; // 0x48
	::Enum_3_47E3A6D916E0C7B1 Field_1_0; // 0x4C
	::System::Single Field_1_18; // 0x50
	::UnityEngine::Color Field_1_5; // 0x54
	::System::Single Field_1_7; // 0x64
	::System::Single Field_1_8; // 0x68
	::Enum_3_D397B64B7014E159 Field_1_2; // 0x6C
	::System::Single Field_1_6; // 0x70
	::System::Single Field_1_10; // 0x74
	::UnityEngine::Color Field_1_11; // 0x78
	::System::Single Field_1_4; // 0x88
	::System::Single Field_1_17; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CCABFC8B1025142__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_4CCABFC8B1025142_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4CCABFC8B1025142_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_CA444252700C31C6(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4CCABFC8B1025142_METHOD_1_CA444252700C31C6_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_993A24B415B41A1C(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_4CCABFC8B1025142_METHOD_1_993A24B415B41A1C_OFFSET))(this, a1);
	}
};

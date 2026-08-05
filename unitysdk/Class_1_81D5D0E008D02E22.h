#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;

#define CLASS_1_81D5D0E008D02E22_METHOD_1_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x11248AA0)
#define CLASS_1_81D5D0E008D02E22_METHOD_1_0128AC2F1B19C084_OFFSET UNITYSDK_OFFSET(0x112489F0)
#define CLASS_1_81D5D0E008D02E22_METHOD_1_16F296F0109AB510_OFFSET UNITYSDK_OFFSET(0x11248650)
#define CLASS_1_81D5D0E008D02E22_METHOD_1_A760E63D5276C63F_OFFSET UNITYSDK_OFFSET(0x11249340)
#define CLASS_1_81D5D0E008D02E22__CTOR_OFFSET UNITYSDK_OFFSET(0x11248640)

inline static constexpr unsigned int Class_1_81D5D0E008D02E22_TypeDefinitionIndex = 61847;

class Class_1_81D5D0E008D02E22 : public ::System::Object
{
public:
	::System::Int32 Field_1_2; // 0x10
	::UnityEngine::Vector3 Field_1_5; // 0x14
	::UnityEngine::Vector3 Field_1_0; // 0x20
	::UnityEngine::Vector3 Field_1_6; // 0x2C
	::UnityEngine::Vector3 Field_1_7; // 0x38
	::System::Single Field_1_1; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81D5D0E008D02E22__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_16F296F0109AB510(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_81D5D0E008D02E22_METHOD_1_16F296F0109AB510_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0128AC2F1B19C084(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_81D5D0E008D02E22_METHOD_1_0128AC2F1B19C084_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_81D5D0E008D02E22_METHOD_1_00531776927FE5B6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A760E63D5276C63F(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_81D5D0E008D02E22_METHOD_1_A760E63D5276C63F_OFFSET))(this, a1);
	}
};

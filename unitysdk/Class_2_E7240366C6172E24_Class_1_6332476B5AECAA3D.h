#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_E7240366C6172E24_CLASS_1_6332476B5AECAA3D_METHOD_1_C1B25D3B3F94E126_1_OFFSET UNITYSDK_OFFSET(0xAA61850)
#define CLASS_2_E7240366C6172E24_CLASS_1_6332476B5AECAA3D_METHOD_1_C1B25D3B3F94E126_OFFSET UNITYSDK_OFFSET(0xAA62C40)
#define CLASS_2_E7240366C6172E24_CLASS_1_6332476B5AECAA3D__CTOR_OFFSET UNITYSDK_OFFSET(0xAA623A0)

inline static constexpr unsigned int Class_2_E7240366C6172E24_Class_1_6332476B5AECAA3D_TypeDefinitionIndex = 69627;

class Class_2_E7240366C6172E24_Class_1_6332476B5AECAA3D : public ::System::Object
{
public:
	::RPG::MVector2 Field_1_1; // 0x10
	::RPG::MVector2 Field_1_0; // 0x18
	::UnityEngine::Vector3 Field_1_4; // 0x20
	::System::Single Field_1_2; // 0x2C
	::System::Single Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7240366C6172E24_CLASS_1_6332476B5AECAA3D__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_C1B25D3B3F94E126(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_E7240366C6172E24_CLASS_1_6332476B5AECAA3D_METHOD_1_C1B25D3B3F94E126_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_C1B25D3B3F94E126_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_E7240366C6172E24_CLASS_1_6332476B5AECAA3D_METHOD_1_C1B25D3B3F94E126_1_OFFSET))(this, a1);
	}
};

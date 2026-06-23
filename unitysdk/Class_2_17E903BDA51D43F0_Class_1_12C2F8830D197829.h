#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_17E903BDA51D43F0;
namespace MoleMole { class MonoGamepadVirtualCursor; }
namespace MoleMole::Cameras { class CameraTrackBlending; }

#define CLASS_2_17E903BDA51D43F0_CLASS_1_12C2F8830D197829_METHOD_1_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x145E26B0)
#define CLASS_2_17E903BDA51D43F0_CLASS_1_12C2F8830D197829_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x145E28B0)
#define CLASS_2_17E903BDA51D43F0_CLASS_1_12C2F8830D197829_METHOD_1_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x145E28C0)
#define CLASS_2_17E903BDA51D43F0_CLASS_1_12C2F8830D197829__CTOR_OFFSET UNITYSDK_OFFSET(0x145E26A0)

inline static constexpr unsigned int Class_2_17E903BDA51D43F0_Class_1_12C2F8830D197829_TypeDefinitionIndex = 58700;

class Class_2_17E903BDA51D43F0_Class_1_12C2F8830D197829 : public ::System::Object
{
public:
	::MoleMole::MonoGamepadVirtualCursor* Field_1_6; // 0x10
	::Class_2_17E903BDA51D43F0* Field_1_4; // 0x18
	::MoleMole::Cameras::CameraTrackBlending* Field_1_3; // 0x20
	::UnityEngine::Vector3 Field_1_2; // 0x28
	::System::Single Field_1_0; // 0x34
	::UnityEngine::Vector3 Field_1_1; // 0x38
	::System::Boolean Field_1_5; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_CLASS_1_12C2F8830D197829__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_25CD86BF8626C8D9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_CLASS_1_12C2F8830D197829_METHOD_1_25CD86BF8626C8D9_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_CLASS_1_12C2F8830D197829_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_CLASS_1_12C2F8830D197829_METHOD_1_84B92802FDAFF6C8_OFFSET))(this);
	}
};

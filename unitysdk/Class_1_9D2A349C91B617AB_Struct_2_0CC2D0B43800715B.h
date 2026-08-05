#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Config { class SlideRopeCameraConfig; }
namespace System { class String; }

#define CLASS_1_9D2A349C91B617AB_STRUCT_2_0CC2D0B43800715B__CTOR_OFFSET UNITYSDK_OFFSET(0x774E30)

inline static constexpr unsigned int Class_1_9D2A349C91B617AB_Struct_2_0CC2D0B43800715B_TypeDefinitionIndex = 86939;

struct alignas(8) Class_1_9D2A349C91B617AB_Struct_2_0CC2D0B43800715B
{
	::System::Boolean Field_2_1; // 0x10
	::System::Boolean Field_2_0; // 0x11
	::System::String* Field_2_7; // 0x18
	::System::Single Field_2_6; // 0x20
	::MoleMole::Cameras::CameraTrackBlending* Field_2_5; // 0x28
	::MoleMole::Cameras::CameraTrackBlending* Field_2_4; // 0x30
	::MoleMole::Cameras::CameraTrackBlending* Field_2_11; // 0x38
	::MoleMole::Cameras::CameraTrackBlending* Field_2_10; // 0x40
	::System::Single Field_2_9; // 0x48
	::System::Single Field_2_8; // 0x4C
	::System::Single Field_2_15; // 0x50
	::System::Single Field_2_14; // 0x54
	::System::Single Field_2_13; // 0x58
	::System::Single Field_2_12; // 0x5C
	::System::Single Field_2_19; // 0x60
	::System::Single Field_2_18; // 0x64
	::System::Single Field_2_17; // 0x68
	::System::Single Field_2_16; // 0x6C
	::System::Boolean Field_2_23; // 0x70
	::System::Single Field_2_22; // 0x74
	::System::Single Field_2_21; // 0x78
	::System::Single Field_2_20; // 0x7C
	::UnityEngine::Vector3 Field_2_27; // 0x80
	::System::Single Field_2_26; // 0x8C
	::System::Single Field_2_25; // 0x90
	::UnityEngine::Vector2 Field_2_24; // 0x94
	::System::String* Field_2_31; // 0xA0
	::System::String* Field_2_30; // 0xA8
	::System::Boolean Field_2_29; // 0xB0
	::System::Boolean Field_2_28; // 0xB1
	::System::Single Field_2_35; // 0xB4
	::System::Single Field_2_34; // 0xB8
	::System::Single Field_2_33; // 0xBC
	::System::Boolean Field_2_32; // 0xC0
	::System::Single Field_2_39; // 0xC4
	::System::Single Field_2_38; // 0xC8
	::System::Single Field_2_37; // 0xCC
	::System::Single Field_2_36; // 0xD0
	::System::Boolean Field_2_43; // 0xD4

	::System::Void _ctor(::MoleMole::Config::SlideRopeCameraConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SlideRopeCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_STRUCT_2_0CC2D0B43800715B__CTOR_OFFSET))(this, a1);
	}
};

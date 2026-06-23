#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Config { class SlideRopeCameraConfig; }
namespace System { class String; }

#define CLASS_1_47F5D6980E8693FF_STRUCT_2_0CC2D0B43800715B__CTOR_OFFSET UNITYSDK_OFFSET(0x775DB0)

inline static constexpr unsigned int Class_1_47F5D6980E8693FF_Struct_2_0CC2D0B43800715B_TypeDefinitionIndex = 74550;

struct alignas(8) Class_1_47F5D6980E8693FF_Struct_2_0CC2D0B43800715B
{
	::System::Boolean Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x11
	::System::String* Field_2_2; // 0x18
	::System::Single Field_2_3; // 0x20
	::MoleMole::Cameras::CameraTrackBlending* Field_2_4; // 0x28
	::MoleMole::Cameras::CameraTrackBlending* Field_2_5; // 0x30
	::MoleMole::Cameras::CameraTrackBlending* Field_2_6; // 0x38
	::MoleMole::Cameras::CameraTrackBlending* Field_2_7; // 0x40
	::System::Single Field_2_8; // 0x48
	::System::Single Field_2_9; // 0x4C
	::System::Single Field_2_10; // 0x50
	::System::Single Field_2_11; // 0x54
	::System::Single Field_2_12; // 0x58
	::System::Single Field_2_13; // 0x5C
	::System::Single Field_2_14; // 0x60
	::System::Single Field_2_15; // 0x64
	::System::Single Field_2_16; // 0x68
	::System::Single Field_2_17; // 0x6C
	::System::Boolean Field_2_18; // 0x70
	::System::Single Field_2_19; // 0x74
	::System::Single Field_2_20; // 0x78
	::System::Single Field_2_21; // 0x7C
	::UnityEngine::Vector3 Field_2_22; // 0x80
	::System::Single Field_2_23; // 0x8C
	::System::Single Field_2_24; // 0x90
	::UnityEngine::Vector2 Field_2_25; // 0x94
	::System::String* Field_2_26; // 0xA0
	::System::String* Field_2_27; // 0xA8
	::System::Boolean Field_2_28; // 0xB0
	::System::Boolean Field_2_29; // 0xB1
	::System::Single Field_2_30; // 0xB4
	::System::Single Field_2_31; // 0xB8
	::System::Single Field_2_32; // 0xBC
	::System::Boolean Field_2_33; // 0xC0
	::System::Single Field_2_34; // 0xC4
	::System::Single Field_2_35; // 0xC8
	::System::Single Field_2_36; // 0xCC
	::System::Single Field_2_37; // 0xD0
	::System::Boolean Field_2_38; // 0xD4

	::System::Void _ctor(::MoleMole::Config::SlideRopeCameraConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SlideRopeCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_47F5D6980E8693FF_STRUCT_2_0CC2D0B43800715B__CTOR_OFFSET))(this, a1);
	}
};

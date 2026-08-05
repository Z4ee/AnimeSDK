#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Config { class SlideRopeCameraLockConfig; }
namespace System { class String; }

#define CLASS_1_70CF957D39B16068_STRUCT_2_3B980AB18C5A4B62__CTOR_OFFSET UNITYSDK_OFFSET(0x72E600)

inline static constexpr unsigned int Class_1_70CF957D39B16068_Struct_2_3B980AB18C5A4B62_TypeDefinitionIndex = 43225;

struct alignas(8) Class_1_70CF957D39B16068_Struct_2_3B980AB18C5A4B62
{
	::MoleMole::Cameras::CameraTrackBlending* Field_2_1; // 0x10
	::MoleMole::Cameras::CameraTrackBlending* Field_2_0; // 0x18
	::System::String* Field_2_7; // 0x20
	::System::Boolean Field_2_6; // 0x28
	::System::Single Field_2_5; // 0x2C
	::System::Single Field_2_4; // 0x30

	::System::Void _ctor(::MoleMole::Config::SlideRopeCameraLockConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SlideRopeCameraLockConfig*))((::PBYTE)hIl2Cpp + CLASS_1_70CF957D39B16068_STRUCT_2_3B980AB18C5A4B62__CTOR_OFFSET))(this, a1);
	}
};

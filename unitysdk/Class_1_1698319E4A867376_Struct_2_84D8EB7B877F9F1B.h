#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HighLightAirCombatCameraFollowType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Config { class HighLightAirCombatCameraConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1698319E4A867376_STRUCT_2_84D8EB7B877F9F1B__CTOR_OFFSET UNITYSDK_OFFSET(0x7F18C0)

inline static constexpr unsigned int Class_1_1698319E4A867376_Struct_2_84D8EB7B877F9F1B_TypeDefinitionIndex = 69256;

struct alignas(8) Class_1_1698319E4A867376_Struct_2_84D8EB7B877F9F1B
{
	::MoleMole::Cameras::CameraTrackBlending* Field_2_0; // 0x10
	::MoleMole::Cameras::CameraTrackBlending* Field_2_7; // 0x18
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::HighLightAirCombatCameraFollowType, ::System::Collections::Generic::List_1<::System::String*>*>* Field_2_6; // 0x20
	::System::String* Field_2_5; // 0x28
	::UnityEngine::Vector3 Field_2_4; // 0x30
	::System::Single Field_2_11; // 0x3C
	::UnityEngine::Vector2 Field_2_10; // 0x40
	::System::Single Field_2_9; // 0x48
	::System::Single Field_2_8; // 0x4C
	::System::Single Field_2_15; // 0x50
	::System::Single Field_2_14; // 0x54
	::System::Single Field_2_13; // 0x58

	::System::Void _ctor(::MoleMole::Config::HighLightAirCombatCameraConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::HighLightAirCombatCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_1698319E4A867376_STRUCT_2_84D8EB7B877F9F1B__CTOR_OFFSET))(this, a1);
	}
};

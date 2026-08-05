#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3E5380ECFB145ED5.h"
#include "unitysdk/Class_4_7F119228545D1CC8_3_Struct_2_52AD02145F5FCE36_33.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DistortionQueueType.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Timeline { class DistortionBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class Distortion; }

#define CLASS_4_7F119228545D1CC8_3_METHOD_4_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x12B11000)
#define CLASS_4_7F119228545D1CC8_3_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x12B12980)
#define CLASS_4_7F119228545D1CC8_3_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x12B12970)
#define CLASS_4_7F119228545D1CC8_3_METHOD_4_C56684D46320D793_OFFSET UNITYSDK_OFFSET(0x12B11290)
#define CLASS_4_7F119228545D1CC8_3_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x12B12960)
#define CLASS_4_7F119228545D1CC8_3_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x12B11170)
#define CLASS_4_7F119228545D1CC8_3_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x12B11FC0)
#define CLASS_4_7F119228545D1CC8_3__CTOR_OFFSET UNITYSDK_OFFSET(0x12B12930)

inline static constexpr unsigned int Class_4_7F119228545D1CC8_3_TypeDefinitionIndex = 83346;

class Class_4_7F119228545D1CC8_3 : public ::Class_3_3E5380ECFB145ED5<::UnityEngine::Rendering::Universal::Distortion*, ::MoleMole::Timeline::DistortionBehaviour*>
{
public:
	::System::Single Field_4_8; // 0x38
	::System::Boolean Field_4_14; // 0x3C
	::System::Boolean Field_4_15; // 0x3D
	::System::Boolean Field_4_5; // 0x3E
	::System::Boolean Field_4_17; // 0x3F
	::Class_4_7F119228545D1CC8_3_Struct_2_52AD02145F5FCE36_33 Field_4_0; // 0x40
	::UnityEngine::Vector3 Field_4_10; // 0x7C
	::System::Single Field_4_4; // 0x88
	::System::Boolean Field_4_19; // 0x8C
	::System::Boolean Field_4_13; // 0x8D
	::System::Boolean Field_4_11; // 0x8E
	::System::Boolean Field_4_7; // 0x8F
	::System::Boolean Field_4_9; // 0x90
	::System::Boolean Field_4_16; // 0x91
	::System::Boolean Field_4_18; // 0x92
	::UnityEngine::NAPRenderPipeline0::DistortionQueueType Field_4_12; // 0x94
	::System::Int32 Field_4_6; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_3_METHOD_4_0868EF727040C390_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_3_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_3_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_3_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_3_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_3_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_C56684D46320D793(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_3_METHOD_4_C56684D46320D793_OFFSET))(this, a1);
	}
};

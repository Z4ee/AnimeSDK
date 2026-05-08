#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9C33AF57B038AFD8.h"
#include "unitysdk/Class_4_7F119228545D1CC8_Struct_2_52AD02145F5FCE36_7.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DistortionQueueType.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Timeline { class DistortionBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class Distortion; }

#define CLASS_4_7F119228545D1CC8_METHOD_4_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x11268030)
#define CLASS_4_7F119228545D1CC8_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xE4C82B0)
#define CLASS_4_7F119228545D1CC8_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xE4C7540)
#define CLASS_4_7F119228545D1CC8_METHOD_4_C56684D46320D793_OFFSET UNITYSDK_OFFSET(0xE4C7560)
#define CLASS_4_7F119228545D1CC8_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xE4C7550)
#define CLASS_4_7F119228545D1CC8_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x11268180)
#define CLASS_4_7F119228545D1CC8_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x112682B0)
#define CLASS_4_7F119228545D1CC8__CTOR_OFFSET UNITYSDK_OFFSET(0xE4C7510)

inline static constexpr unsigned int Class_4_7F119228545D1CC8_TypeDefinitionIndex = 45287;

class Class_4_7F119228545D1CC8 : public ::Class_3_9C33AF57B038AFD8<::UnityEngine::Rendering::Universal::Distortion*, ::MoleMole::Timeline::DistortionBehaviour*>
{
public:
	::System::Boolean Field_4_14; // 0x38
	::System::Boolean Field_4_3; // 0x39
	::System::Boolean Field_4_15; // 0x3A
	::System::Boolean Field_4_1; // 0x3B
	::UnityEngine::Vector3 Field_4_6; // 0x3C
	::System::Boolean Field_4_9; // 0x48
	::System::Boolean Field_4_10; // 0x49
	::System::Boolean Field_4_13; // 0x4A
	::System::Single Field_4_8; // 0x4C
	::UnityEngine::NAPRenderPipeline0::DistortionQueueType Field_4_12; // 0x50
	::System::Int32 Field_4_2; // 0x54
	::System::Boolean Field_4_16; // 0x58
	::System::Boolean Field_4_11; // 0x59
	::System::Boolean Field_4_7; // 0x5A
	::System::Boolean Field_4_5; // 0x5B
	::Class_4_7F119228545D1CC8_Struct_2_52AD02145F5FCE36_7 Field_4_0; // 0x5C
	::System::Single Field_4_4; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_METHOD_4_0868EF727040C390_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_C56684D46320D793(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_METHOD_4_C56684D46320D793_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};

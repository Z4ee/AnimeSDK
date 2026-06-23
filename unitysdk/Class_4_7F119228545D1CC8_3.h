#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9201EB3268983C13.h"
#include "unitysdk/Class_4_7F119228545D1CC8_3_Struct_2_52AD02145F5FCE36_27.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SsrQuality.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class ScreenSpaceReflectionBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class ScreenSpaceReflection; }

#define CLASS_4_7F119228545D1CC8_3_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x1390B6D0)
#define CLASS_4_7F119228545D1CC8_3_METHOD_4_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x13909FB0)
#define CLASS_4_7F119228545D1CC8_3_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1390B6E0)
#define CLASS_4_7F119228545D1CC8_3_METHOD_4_C56684D46320D793_OFFSET UNITYSDK_OFFSET(0x1390A200)
#define CLASS_4_7F119228545D1CC8_3_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x1390B6C0)
#define CLASS_4_7F119228545D1CC8_3_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1390A0F0)
#define CLASS_4_7F119228545D1CC8_3_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1390AD70)
#define CLASS_4_7F119228545D1CC8_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1390B680)

inline static constexpr unsigned int Class_4_7F119228545D1CC8_3_TypeDefinitionIndex = 65431;

class Class_4_7F119228545D1CC8_3 : public ::Class_3_9201EB3268983C13<::UnityEngine::Rendering::Universal::ScreenSpaceReflection*, ::MoleMole::Timeline::ScreenSpaceReflectionBehaviour*>
{
public:
	::System::Boolean Field_4_11; // 0x38
	::System::Boolean Field_4_2; // 0x39
	::System::Boolean Field_4_5; // 0x3A
	::System::Boolean Field_4_7; // 0x3B
	::System::Single Field_4_8; // 0x3C
	::System::Boolean Field_4_9; // 0x40
	::System::Boolean Field_4_12; // 0x41
	::System::Boolean Field_4_13; // 0x42
	::System::Boolean Field_4_1; // 0x43
	::Class_4_7F119228545D1CC8_3_Struct_2_52AD02145F5FCE36_27 Field_4_0; // 0x44
	::System::Single Field_4_4; // 0x74
	::UnityEngine::NAPRenderPipeline0::SsrQuality Field_4_10; // 0x78
	::System::Single Field_4_6; // 0x7C
	::System::Boolean Field_4_16; // 0x80
	::System::Boolean Field_4_15; // 0x81
	::System::Boolean Field_4_3; // 0x82
	::System::Single Field_4_14; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_3_METHOD_4_79830F666EE579C0_OFFSET))(this);
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

	::System::Void Method_4_C56684D46320D793(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_3_METHOD_4_C56684D46320D793_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_3_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_3_METHOD_4_832295EC279E5994_OFFSET))(this);
	}
};

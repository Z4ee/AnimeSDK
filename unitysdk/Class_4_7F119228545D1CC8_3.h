#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9C33AF57B038AFD8.h"
#include "unitysdk/Class_4_7F119228545D1CC8_3_Struct_2_52AD02145F5FCE36_34.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SsrQuality.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class ScreenSpaceReflectionBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class ScreenSpaceReflection; }

#define CLASS_4_7F119228545D1CC8_3_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x14A6BB30)
#define CLASS_4_7F119228545D1CC8_3_METHOD_4_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x14A6A410)
#define CLASS_4_7F119228545D1CC8_3_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x14A6BB40)
#define CLASS_4_7F119228545D1CC8_3_METHOD_4_C56684D46320D793_OFFSET UNITYSDK_OFFSET(0x14A6A660)
#define CLASS_4_7F119228545D1CC8_3_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x14A6BB20)
#define CLASS_4_7F119228545D1CC8_3_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x14A6A550)
#define CLASS_4_7F119228545D1CC8_3_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x14A6B1D0)
#define CLASS_4_7F119228545D1CC8_3__CTOR_OFFSET UNITYSDK_OFFSET(0x14A6BAE0)

inline static constexpr unsigned int Class_4_7F119228545D1CC8_3_TypeDefinitionIndex = 73965;

class Class_4_7F119228545D1CC8_3 : public ::Class_3_9C33AF57B038AFD8<::UnityEngine::Rendering::Universal::ScreenSpaceReflection*, ::MoleMole::Timeline::ScreenSpaceReflectionBehaviour*>
{
public:
	::UnityEngine::NAPRenderPipeline0::SsrQuality Field_4_10; // 0x38
	::System::Single Field_4_8; // 0x3C
	::System::Single Field_4_6; // 0x40
	::System::Boolean Field_4_15; // 0x44
	::System::Boolean Field_4_1; // 0x45
	::System::Boolean Field_4_12; // 0x46
	::Class_4_7F119228545D1CC8_3_Struct_2_52AD02145F5FCE36_34 Field_4_0; // 0x48
	::System::Boolean Field_4_13; // 0x78
	::System::Boolean Field_4_2; // 0x79
	::System::Boolean Field_4_5; // 0x7A
	::System::Boolean Field_4_16; // 0x7B
	::System::Boolean Field_4_7; // 0x7C
	::System::Boolean Field_4_9; // 0x7D
	::System::Boolean Field_4_3; // 0x7E
	::System::Boolean Field_4_11; // 0x7F
	::System::Single Field_4_14; // 0x80
	::System::Single Field_4_4; // 0x84

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

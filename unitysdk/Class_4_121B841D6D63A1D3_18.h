#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9201EB3268983C13.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_18_Struct_2_52AD02145F5FCE36_31.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostLight_RenderLayerMask.h"

namespace MoleMole::Timeline { class ScreenSpacePlanarReflectionBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class ScreenSpacePlanarReflection; }

#define CLASS_4_121B841D6D63A1D3_18_METHOD_4_1CCEE7E1BF9B5B15_OFFSET UNITYSDK_OFFSET(0x17D86560)
#define CLASS_4_121B841D6D63A1D3_18_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x17D88380)
#define CLASS_4_121B841D6D63A1D3_18_METHOD_4_3E23A2EE3F65066B_OFFSET UNITYSDK_OFFSET(0x17D86120)
#define CLASS_4_121B841D6D63A1D3_18_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x17D88390)
#define CLASS_4_121B841D6D63A1D3_18_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x17D88370)
#define CLASS_4_121B841D6D63A1D3_18_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x17D863A0)
#define CLASS_4_121B841D6D63A1D3_18_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x17D876B0)
#define CLASS_4_121B841D6D63A1D3_18__CTOR_OFFSET UNITYSDK_OFFSET(0x17D88320)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_18_TypeDefinitionIndex = 74191;

class Class_4_121B841D6D63A1D3_18 : public ::Class_3_9201EB3268983C13<::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection*, ::MoleMole::Timeline::ScreenSpacePlanarReflectionBehaviour*>
{
public:
	::System::Boolean Field_4_23; // 0x38
	::System::Boolean Field_4_21; // 0x39
	::System::Boolean Field_4_11; // 0x3A
	::System::Boolean Field_4_19; // 0x3B
	::System::Boolean Field_4_7; // 0x3C
	::System::Boolean Field_4_2; // 0x3D
	::System::Boolean Field_4_1; // 0x3E
	::System::Boolean Field_4_3; // 0x3F
	::System::Single Field_4_6; // 0x40
	::UnityEngine::LayerMask Field_4_20; // 0x44
	::System::Single Field_4_10; // 0x48
	::System::Single Field_4_8; // 0x4C
	::Class_4_121B841D6D63A1D3_18_Struct_2_52AD02145F5FCE36_31 Field_4_0; // 0x50
	::System::Single Field_4_4; // 0xA8
	::System::Boolean Field_4_9; // 0xAC
	::System::Boolean Field_4_12; // 0xAD
	::System::Boolean Field_4_26; // 0xAE
	::System::Boolean Field_4_13; // 0xAF
	::System::Single Field_4_14; // 0xB0
	::UnityEngine::LayerMask Field_4_22; // 0xB4
	::System::Single Field_4_16; // 0xB8
	::System::Boolean Field_4_17; // 0xBC
	::System::Boolean Field_4_25; // 0xBD
	::System::Boolean Field_4_15; // 0xBE
	::System::Boolean Field_4_5; // 0xBF
	::System::Single Field_4_18; // 0xC0
	::UnityEngine::Rendering::Universal::Internal::PostLight_RenderLayerMask Field_4_24; // 0xC4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_18__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_3E23A2EE3F65066B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_18_METHOD_4_3E23A2EE3F65066B_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_18_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_18_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_18_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_18_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_1CCEE7E1BF9B5B15(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_18_METHOD_4_1CCEE7E1BF9B5B15_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_18_METHOD_4_832295EC279E5994_OFFSET))(this);
	}
};

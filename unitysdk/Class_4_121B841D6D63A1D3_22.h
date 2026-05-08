#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9C33AF57B038AFD8.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_22_Struct_2_52AD02145F5FCE36_41.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostLight_RenderLayerMask.h"

namespace MoleMole::Timeline { class ScreenSpacePlanarReflectionBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class ScreenSpacePlanarReflection; }

#define CLASS_4_121B841D6D63A1D3_22_METHOD_4_1CCEE7E1BF9B5B15_OFFSET UNITYSDK_OFFSET(0x1442B3A0)
#define CLASS_4_121B841D6D63A1D3_22_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x1442D1C0)
#define CLASS_4_121B841D6D63A1D3_22_METHOD_4_3E23A2EE3F65066B_OFFSET UNITYSDK_OFFSET(0x1442AF50)
#define CLASS_4_121B841D6D63A1D3_22_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1442D1B0)
#define CLASS_4_121B841D6D63A1D3_22_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x1442D1D0)
#define CLASS_4_121B841D6D63A1D3_22_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1442B1E0)
#define CLASS_4_121B841D6D63A1D3_22_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1442C4E0)
#define CLASS_4_121B841D6D63A1D3_22__CTOR_OFFSET UNITYSDK_OFFSET(0x1442D160)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_22_TypeDefinitionIndex = 80360;

class Class_4_121B841D6D63A1D3_22 : public ::Class_3_9C33AF57B038AFD8<::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection*, ::MoleMole::Timeline::ScreenSpacePlanarReflectionBehaviour*>
{
public:
	::System::Boolean Field_4_12; // 0x38
	::System::Boolean Field_4_1; // 0x39
	::System::Boolean Field_4_11; // 0x3A
	::System::Boolean Field_4_7; // 0x3B
	::Class_4_121B841D6D63A1D3_22_Struct_2_52AD02145F5FCE36_41 Field_4_0; // 0x3C
	::System::Boolean Field_4_25; // 0x94
	::System::Boolean Field_4_23; // 0x95
	::System::Boolean Field_4_2; // 0x96
	::System::Boolean Field_4_21; // 0x97
	::System::Single Field_4_8; // 0x98
	::UnityEngine::LayerMask Field_4_20; // 0x9C
	::System::Single Field_4_6; // 0xA0
	::System::Boolean Field_4_13; // 0xA4
	::System::Boolean Field_4_17; // 0xA5
	::System::Boolean Field_4_19; // 0xA6
	::System::Boolean Field_4_9; // 0xA7
	::System::Boolean Field_4_5; // 0xA8
	::System::Boolean Field_4_15; // 0xA9
	::System::Boolean Field_4_3; // 0xAA
	::System::Boolean Field_4_26; // 0xAB
	::UnityEngine::Rendering::Universal::Internal::PostLight_RenderLayerMask Field_4_24; // 0xAC
	::System::Single Field_4_16; // 0xB0
	::System::Single Field_4_4; // 0xB4
	::System::Single Field_4_18; // 0xB8
	::System::Single Field_4_10; // 0xBC
	::System::Single Field_4_14; // 0xC0
	::UnityEngine::LayerMask Field_4_22; // 0xC4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_22__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_3E23A2EE3F65066B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_22_METHOD_4_3E23A2EE3F65066B_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_22_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_22_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_22_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_22_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_1CCEE7E1BF9B5B15(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_22_METHOD_4_1CCEE7E1BF9B5B15_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_22_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};

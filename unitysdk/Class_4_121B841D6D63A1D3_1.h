#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3E5380ECFB145ED5.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_1_Struct_2_52AD02145F5FCE36.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostLight_RenderLayerMask.h"

namespace MoleMole::Timeline { class ScreenSpacePlanarReflectionBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class ScreenSpacePlanarReflection; }

#define CLASS_4_121B841D6D63A1D3_1_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x14040F80)
#define CLASS_4_121B841D6D63A1D3_1_METHOD_4_3E23A2EE3F65066B_OFFSET UNITYSDK_OFFSET(0x1403EC70)
#define CLASS_4_121B841D6D63A1D3_1_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x14040F70)
#define CLASS_4_121B841D6D63A1D3_1_METHOD_4_C56684D46320D793_OFFSET UNITYSDK_OFFSET(0x1403F0D0)
#define CLASS_4_121B841D6D63A1D3_1_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x14040F60)
#define CLASS_4_121B841D6D63A1D3_1_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1403EF00)
#define CLASS_4_121B841D6D63A1D3_1_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x14040210)
#define CLASS_4_121B841D6D63A1D3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14040F10)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_1_TypeDefinitionIndex = 42011;

class Class_4_121B841D6D63A1D3_1 : public ::Class_3_3E5380ECFB145ED5<::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection*, ::MoleMole::Timeline::ScreenSpacePlanarReflectionBehaviour*>
{
public:
	::System::Single Field_4_4; // 0x38
	::UnityEngine::Rendering::Universal::Internal::PostLight_RenderLayerMask Field_4_24; // 0x3C
	::System::Single Field_4_22; // 0x40
	::System::Single Field_4_18; // 0x44
	::System::Single Field_4_10; // 0x48
	::Class_4_121B841D6D63A1D3_1_Struct_2_52AD02145F5FCE36 Field_4_0; // 0x4C
	::System::Single Field_4_14; // 0xA4
	::UnityEngine::LayerMask Field_4_26; // 0xA8
	::System::Single Field_4_16; // 0xAC
	::System::Boolean Field_4_25; // 0xB0
	::System::Boolean Field_4_19; // 0xB1
	::System::Boolean Field_4_9; // 0xB2
	::System::Boolean Field_4_27; // 0xB3
	::UnityEngine::LayerMask Field_4_20; // 0xB4
	::System::Boolean Field_4_15; // 0xB8
	::System::Boolean Field_4_13; // 0xB9
	::System::Boolean Field_4_23; // 0xBA
	::System::Boolean Field_4_12; // 0xBB
	::System::Single Field_4_8; // 0xBC
	::System::Boolean Field_4_7; // 0xC0
	::System::Boolean Field_4_30; // 0xC1
	::System::Boolean Field_4_21; // 0xC2
	::System::Boolean Field_4_11; // 0xC3
	::System::Boolean Field_4_6; // 0xC4
	::System::Boolean Field_4_31; // 0xC5
	::System::Boolean Field_4_17; // 0xC6
	::System::Boolean Field_4_5; // 0xC7

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_3E23A2EE3F65066B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_1_METHOD_4_3E23A2EE3F65066B_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_1_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_1_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_1_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_1_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_1_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_C56684D46320D793(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_1_METHOD_4_C56684D46320D793_OFFSET))(this, a1);
	}
};

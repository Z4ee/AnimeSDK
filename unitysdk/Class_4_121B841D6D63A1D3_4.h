#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9C33AF57B038AFD8.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_4_Struct_2_52AD02145F5FCE3A_3.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class ColorCurvesBehaviour; }
namespace System { class Object; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureCurve; }
namespace UnityEngine::Rendering::Universal { class ColorCurves; }

#define CLASS_4_121B841D6D63A1D3_4_METHOD_4_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x12255B10)
#define CLASS_4_121B841D6D63A1D3_4_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x12257430)
#define CLASS_4_121B841D6D63A1D3_4_METHOD_4_6286C6E6E1522088_OFFSET UNITYSDK_OFFSET(0x12255E00)
#define CLASS_4_121B841D6D63A1D3_4_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x12257440)
#define CLASS_4_121B841D6D63A1D3_4_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x12257450)
#define CLASS_4_121B841D6D63A1D3_4_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x12255C90)
#define CLASS_4_121B841D6D63A1D3_4_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x122569B0)
#define CLASS_4_121B841D6D63A1D3_4__CTOR_OFFSET UNITYSDK_OFFSET(0x12257420)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_4_TypeDefinitionIndex = 40916;

class Class_4_121B841D6D63A1D3_4 : public ::Class_3_9C33AF57B038AFD8<::UnityEngine::Rendering::Universal::ColorCurves*, ::MoleMole::Timeline::ColorCurvesBehaviour*>
{
public:
	::UnityEngine::NAPRenderPipeline0::TextureCurve* Field_4_10; // 0x38
	::Class_4_121B841D6D63A1D3_4_Struct_2_52AD02145F5FCE3A_3 Field_4_0; // 0x40
	::UnityEngine::NAPRenderPipeline0::TextureCurve* Field_4_16; // 0xC8
	::UnityEngine::NAPRenderPipeline0::TextureCurve* Field_4_6; // 0xD0
	::UnityEngine::NAPRenderPipeline0::TextureCurve* Field_4_12; // 0xD8
	::UnityEngine::NAPRenderPipeline0::TextureCurve* Field_4_8; // 0xE0
	::UnityEngine::NAPRenderPipeline0::TextureCurve* Field_4_2; // 0xE8
	::UnityEngine::NAPRenderPipeline0::TextureCurve* Field_4_4; // 0xF0
	::UnityEngine::NAPRenderPipeline0::TextureCurve* Field_4_14; // 0xF8
	::System::Boolean Field_4_18; // 0x100
	::System::Boolean Field_4_1; // 0x101
	::System::Boolean Field_4_13; // 0x102
	::System::Boolean Field_4_11; // 0x103
	::System::Boolean Field_4_15; // 0x104
	::System::Boolean Field_4_9; // 0x105
	::System::Boolean Field_4_17; // 0x106
	::System::Boolean Field_4_3; // 0x107
	::System::Boolean Field_4_5; // 0x108
	::System::Boolean Field_4_7; // 0x109

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_4_METHOD_4_0868EF727040C390_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_4_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_4_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_4_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_4_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_6286C6E6E1522088(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_4_METHOD_4_6286C6E6E1522088_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_4_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};

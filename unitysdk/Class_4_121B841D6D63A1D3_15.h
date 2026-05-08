#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9C33AF57B038AFD8.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_15_Struct_2_52AD02145F5FCE36_24.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SampleCountLevel.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class AmplifyOcclusionBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class AmplifyOcclusion; }

#define CLASS_4_121B841D6D63A1D3_15_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x117E77C0)
#define CLASS_4_121B841D6D63A1D3_15_METHOD_4_3E06E2491B129B22_OFFSET UNITYSDK_OFFSET(0x117E4930)
#define CLASS_4_121B841D6D63A1D3_15_METHOD_4_6020519A7F0B2328_OFFSET UNITYSDK_OFFSET(0x117E4E30)
#define CLASS_4_121B841D6D63A1D3_15_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x117E77D0)
#define CLASS_4_121B841D6D63A1D3_15_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x117E77E0)
#define CLASS_4_121B841D6D63A1D3_15_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x117E4BE0)
#define CLASS_4_121B841D6D63A1D3_15_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x117E67D0)
#define CLASS_4_121B841D6D63A1D3_15__CTOR_OFFSET UNITYSDK_OFFSET(0x117E7740)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_15_TypeDefinitionIndex = 62452;

class Class_4_121B841D6D63A1D3_15 : public ::Class_3_9C33AF57B038AFD8<::UnityEngine::Rendering::Universal::AmplifyOcclusion*, ::MoleMole::Timeline::AmplifyOcclusionBehaviour*>
{
public:
	::System::Boolean Field_4_17; // 0x38
	::System::Boolean Field_4_21; // 0x39
	::System::Boolean Field_4_1; // 0x3A
	::System::Boolean Field_4_13; // 0x3B
	::UnityEngine::NAPRenderPipeline0::SampleCountLevel Field_4_6; // 0x3C
	::System::Boolean Field_4_11; // 0x40
	::System::Boolean Field_4_29; // 0x41
	::System::Boolean Field_4_9; // 0x42
	::System::Boolean Field_4_15; // 0x43
	::System::Single Field_4_12; // 0x44
	::System::Boolean Field_4_19; // 0x48
	::System::Boolean Field_4_23; // 0x49
	::System::Boolean Field_4_3; // 0x4A
	::System::Boolean Field_4_7; // 0x4B
	::System::Int32 Field_4_28; // 0x4C
	::System::Single Field_4_4; // 0x50
	::System::Single Field_4_8; // 0x54
	::UnityEngine::Color Field_4_10; // 0x58
	::System::Single Field_4_2; // 0x68
	::System::Boolean Field_4_20; // 0x6C
	::System::Boolean Field_4_27; // 0x6D
	::System::Boolean Field_4_24; // 0x6E
	::System::Boolean Field_4_5; // 0x6F
	::System::Single Field_4_30; // 0x70
	::System::Single Field_4_16; // 0x74
	::System::Int32 Field_4_26; // 0x78
	::System::Single Field_4_14; // 0x7C
	::System::Boolean Field_4_34; // 0x80
	::System::Boolean Field_4_25; // 0x81
	::Class_4_121B841D6D63A1D3_15_Struct_2_52AD02145F5FCE36_24 Field_4_0; // 0x84
	::System::Boolean Field_4_32; // 0x100
	::System::Boolean Field_4_33; // 0x101
	::System::Boolean Field_4_22; // 0x102
	::System::Boolean Field_4_31; // 0x103
	::System::Single Field_4_18; // 0x104

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_15__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_3E06E2491B129B22()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_15_METHOD_4_3E06E2491B129B22_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_15_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_15_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_6020519A7F0B2328(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_15_METHOD_4_6020519A7F0B2328_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_15_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_15_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_15_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};

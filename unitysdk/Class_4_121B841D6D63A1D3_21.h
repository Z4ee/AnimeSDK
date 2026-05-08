#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9C33AF57B038AFD8.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_21_Struct_2_52AD02145F5FCE36_40.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class CullingBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class Culling; }

#define CLASS_4_121B841D6D63A1D3_21_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xFAD3350)
#define CLASS_4_121B841D6D63A1D3_21_METHOD_4_3E06E2491B129B22_OFFSET UNITYSDK_OFFSET(0xFAD0400)
#define CLASS_4_121B841D6D63A1D3_21_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xFAD3340)
#define CLASS_4_121B841D6D63A1D3_21_METHOD_4_A88DC3524C352DE6_OFFSET UNITYSDK_OFFSET(0xFAD0940)
#define CLASS_4_121B841D6D63A1D3_21_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xFAD3330)
#define CLASS_4_121B841D6D63A1D3_21_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xFAD0740)
#define CLASS_4_121B841D6D63A1D3_21_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xFAD2440)
#define CLASS_4_121B841D6D63A1D3_21__CTOR_OFFSET UNITYSDK_OFFSET(0xFAD32E0)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_21_TypeDefinitionIndex = 78845;

class Class_4_121B841D6D63A1D3_21 : public ::Class_3_9C33AF57B038AFD8<::UnityEngine::Rendering::Universal::Culling*, ::MoleMole::Timeline::CullingBehaviour*>
{
public:
	::System::Boolean Field_4_11; // 0x38
	::System::Boolean Field_4_18; // 0x39
	::System::Boolean Field_4_13; // 0x3A
	::System::Boolean Field_4_3; // 0x3B
	::UnityEngine::Color Field_4_24; // 0x3C
	::Class_4_121B841D6D63A1D3_21_Struct_2_52AD02145F5FCE36_40 Field_4_0; // 0x4C
	::System::Boolean Field_4_1; // 0xA8
	::System::Boolean Field_4_32; // 0xA9
	::System::Boolean Field_4_25; // 0xAA
	::System::Boolean Field_4_7; // 0xAB
	::UnityEngine::Color Field_4_16; // 0xAC
	::System::Single Field_4_28; // 0xBC
	::System::Boolean Field_4_12; // 0xC0
	::System::Boolean Field_4_9; // 0xC1
	::System::Boolean Field_4_15; // 0xC2
	::System::Boolean Field_4_4; // 0xC3
	::System::Boolean Field_4_22; // 0xC4
	::System::Boolean Field_4_21; // 0xC5
	::System::Boolean Field_4_17; // 0xC6
	::System::Boolean Field_4_14; // 0xC7
	::System::Boolean Field_4_20; // 0xC8
	::System::Boolean Field_4_27; // 0xC9
	::System::Boolean Field_4_10; // 0xCA
	::System::Boolean Field_4_19; // 0xCB
	::System::Boolean Field_4_5; // 0xCC
	::System::Boolean Field_4_6; // 0xCD
	::System::Boolean Field_4_29; // 0xCE
	::System::Boolean Field_4_30; // 0xCF
	::System::Boolean Field_4_23; // 0xD0
	::System::Boolean Field_4_31; // 0xD1
	::System::Boolean Field_4_2; // 0xD2
	::System::Boolean Field_4_8; // 0xD3
	::System::Single Field_4_26; // 0xD4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_21__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_3E06E2491B129B22()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_21_METHOD_4_3E06E2491B129B22_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_21_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_21_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_21_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_21_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_A88DC3524C352DE6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_21_METHOD_4_A88DC3524C352DE6_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_21_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};

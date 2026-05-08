#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9C33AF57B038AFD8.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_2_Struct_2_52AD02145F5FCE36_1.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DepthOfFieldMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DofDebugMode.h"

namespace MoleMole::Timeline { class DepthOfFieldBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class DepthOfField; }

#define CLASS_4_121B841D6D63A1D3_2_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x11EE6F00)
#define CLASS_4_121B841D6D63A1D3_2_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x11EE6EF0)
#define CLASS_4_121B841D6D63A1D3_2_METHOD_4_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0x11EE43D0)
#define CLASS_4_121B841D6D63A1D3_2_METHOD_4_A88DC3524C352DE6_OFFSET UNITYSDK_OFFSET(0x11EE48A0)
#define CLASS_4_121B841D6D63A1D3_2_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x11EE6F10)
#define CLASS_4_121B841D6D63A1D3_2_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x11EE4670)
#define CLASS_4_121B841D6D63A1D3_2_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x11EE5FB0)
#define CLASS_4_121B841D6D63A1D3_2__CTOR_OFFSET UNITYSDK_OFFSET(0x11EE6EA0)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_2_TypeDefinitionIndex = 38847;

class Class_4_121B841D6D63A1D3_2 : public ::Class_3_9C33AF57B038AFD8<::UnityEngine::Rendering::Universal::DepthOfField*, ::MoleMole::Timeline::DepthOfFieldBehaviour*>
{
public:
	::System::Single Field_4_8; // 0x38
	::System::Single Field_4_16; // 0x3C
	::System::Boolean Field_4_17; // 0x40
	::System::Boolean Field_4_9; // 0x41
	::System::Boolean Field_4_13; // 0x42
	::System::Boolean Field_4_19; // 0x43
	::UnityEngine::Rendering::Universal::DofDebugMode Field_4_24; // 0x44
	::System::Boolean Field_4_30; // 0x48
	::System::Boolean Field_4_32; // 0x49
	::UnityEngine::Rendering::Universal::DepthOfFieldMode Field_4_2; // 0x4C
	::System::Single Field_4_14; // 0x50
	::Class_4_121B841D6D63A1D3_2_Struct_2_52AD02145F5FCE36_1 Field_4_0; // 0x54
	::System::Boolean Field_4_5; // 0xBC
	::System::Boolean Field_4_27; // 0xBD
	::System::Boolean Field_4_7; // 0xBE
	::System::Boolean Field_4_31; // 0xBF
	::System::Single Field_4_12; // 0xC0
	::System::Single Field_4_6; // 0xC4
	::System::Single Field_4_4; // 0xC8
	::System::Boolean Field_4_15; // 0xCC
	::System::Boolean Field_4_29; // 0xCD
	::System::Boolean Field_4_10; // 0xCE
	::System::Boolean Field_4_25; // 0xCF
	::System::Boolean Field_4_26; // 0xD0
	::System::Boolean Field_4_3; // 0xD1
	::System::Boolean Field_4_21; // 0xD2
	::System::Boolean Field_4_1; // 0xD3
	::System::Boolean Field_4_23; // 0xD4
	::System::Boolean Field_4_28; // 0xD5
	::System::Boolean Field_4_11; // 0xD6
	::System::Single Field_4_20; // 0xD8
	::System::Int32 Field_4_18; // 0xDC
	::System::Single Field_4_22; // 0xE0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9D8CB5E47C1952BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_2_METHOD_4_9D8CB5E47C1952BD_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_2_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_2_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_2_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_2_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_2_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_A88DC3524C352DE6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_2_METHOD_4_A88DC3524C352DE6_OFFSET))(this, a1);
	}
};

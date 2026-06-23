#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9201EB3268983C13.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_4_Struct_2_52AD02145F5FCE36_10.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class ScreenSpaceAmbientOcclusionBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class ScreenSpaceAmbientOcclusion; }

#define CLASS_4_121B841D6D63A1D3_4_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x12C1D9A0)
#define CLASS_4_121B841D6D63A1D3_4_METHOD_4_7D6892BF6B9D89CF_OFFSET UNITYSDK_OFFSET(0x12C1B040)
#define CLASS_4_121B841D6D63A1D3_4_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x12C1D980)
#define CLASS_4_121B841D6D63A1D3_4_METHOD_4_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0x12C1AB90)
#define CLASS_4_121B841D6D63A1D3_4_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x12C1D990)
#define CLASS_4_121B841D6D63A1D3_4_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x12C1AE20)
#define CLASS_4_121B841D6D63A1D3_4_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x12C1CA20)
#define CLASS_4_121B841D6D63A1D3_4__CTOR_OFFSET UNITYSDK_OFFSET(0x12C1D920)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_4_TypeDefinitionIndex = 50227;

class Class_4_121B841D6D63A1D3_4 : public ::Class_3_9201EB3268983C13<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion*, ::MoleMole::Timeline::ScreenSpaceAmbientOcclusionBehaviour*>
{
public:
	::System::Single Field_4_2; // 0x38
	::System::Int32 Field_4_16; // 0x3C
	::System::Int32 Field_4_22; // 0x40
	::System::Boolean Field_4_3; // 0x44
	::System::Boolean Field_4_11; // 0x45
	::System::Boolean Field_4_15; // 0x46
	::System::Boolean Field_4_23; // 0x47
	::System::Int32 Field_4_28; // 0x48
	::System::Boolean Field_4_5; // 0x4C
	::System::Boolean Field_4_13; // 0x4D
	::System::Single Field_4_4; // 0x50
	::System::Single Field_4_6; // 0x54
	::Class_4_121B841D6D63A1D3_4_Struct_2_52AD02145F5FCE36_10 Field_4_0; // 0x58
	::System::Single Field_4_12; // 0xBC
	::System::Single Field_4_14; // 0xC0
	::System::Single Field_4_20; // 0xC4
	::System::Boolean Field_4_27; // 0xC8
	::System::Boolean Field_4_32; // 0xC9
	::System::Boolean Field_4_1; // 0xCA
	::System::Boolean Field_4_29; // 0xCB
	::System::Boolean Field_4_24; // 0xCC
	::System::Boolean Field_4_9; // 0xCD
	::System::Boolean Field_4_7; // 0xCE
	::System::Boolean Field_4_21; // 0xCF
	::System::Int32 Field_4_26; // 0xD0
	::System::Boolean Field_4_10; // 0xD4
	::System::Boolean Field_4_19; // 0xD5
	::System::Boolean Field_4_8; // 0xD6
	::System::Boolean Field_4_17; // 0xD7
	::System::Boolean Field_4_18; // 0xD8
	::System::Boolean Field_4_25; // 0xD9
	::System::Boolean Field_4_30; // 0xDA
	::System::Boolean Field_4_31; // 0xDB

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9D8CB5E47C1952BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_4_METHOD_4_9D8CB5E47C1952BD_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_4_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_4_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_4_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_7D6892BF6B9D89CF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_4_METHOD_4_7D6892BF6B9D89CF_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_4_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_4_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9C33AF57B038AFD8.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_17_Struct_2_52AD02145F5FCE36_27.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class ScreenSpaceAmbientOcclusionBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class ScreenSpaceAmbientOcclusion; }

#define CLASS_4_121B841D6D63A1D3_17_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x15909F40)
#define CLASS_4_121B841D6D63A1D3_17_METHOD_4_7D6892BF6B9D89CF_OFFSET UNITYSDK_OFFSET(0x159075E0)
#define CLASS_4_121B841D6D63A1D3_17_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x15909F30)
#define CLASS_4_121B841D6D63A1D3_17_METHOD_4_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0x15907140)
#define CLASS_4_121B841D6D63A1D3_17_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x15909F50)
#define CLASS_4_121B841D6D63A1D3_17_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x159073D0)
#define CLASS_4_121B841D6D63A1D3_17_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15908FB0)
#define CLASS_4_121B841D6D63A1D3_17__CTOR_OFFSET UNITYSDK_OFFSET(0x15909ED0)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_17_TypeDefinitionIndex = 68246;

class Class_4_121B841D6D63A1D3_17 : public ::Class_3_9C33AF57B038AFD8<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion*, ::MoleMole::Timeline::ScreenSpaceAmbientOcclusionBehaviour*>
{
public:
	::System::Boolean Field_4_3; // 0x38
	::System::Boolean Field_4_30; // 0x39
	::System::Boolean Field_4_24; // 0x3A
	::System::Boolean Field_4_7; // 0x3B
	::System::Int32 Field_4_26; // 0x3C
	::System::Single Field_4_4; // 0x40
	::System::Boolean Field_4_8; // 0x44
	::System::Boolean Field_4_9; // 0x45
	::System::Boolean Field_4_10; // 0x46
	::System::Boolean Field_4_32; // 0x47
	::System::Single Field_4_12; // 0x48
	::Class_4_121B841D6D63A1D3_17_Struct_2_52AD02145F5FCE36_27 Field_4_0; // 0x4C
	::System::Single Field_4_20; // 0xB0
	::System::Boolean Field_4_21; // 0xB4
	::System::Boolean Field_4_18; // 0xB5
	::System::Single Field_4_2; // 0xB8
	::System::Single Field_4_14; // 0xBC
	::System::Int32 Field_4_28; // 0xC0
	::System::Single Field_4_6; // 0xC4
	::System::Int32 Field_4_16; // 0xC8
	::System::Boolean Field_4_15; // 0xCC
	::System::Boolean Field_4_11; // 0xCD
	::System::Boolean Field_4_17; // 0xCE
	::System::Boolean Field_4_23; // 0xCF
	::System::Boolean Field_4_29; // 0xD0
	::System::Boolean Field_4_19; // 0xD1
	::System::Boolean Field_4_31; // 0xD2
	::System::Boolean Field_4_5; // 0xD3
	::System::Boolean Field_4_13; // 0xD4
	::System::Boolean Field_4_27; // 0xD5
	::System::Boolean Field_4_25; // 0xD6
	::System::Boolean Field_4_1; // 0xD7
	::System::Int32 Field_4_22; // 0xD8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_17__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9D8CB5E47C1952BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_17_METHOD_4_9D8CB5E47C1952BD_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_17_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_17_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_7D6892BF6B9D89CF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_17_METHOD_4_7D6892BF6B9D89CF_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_17_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_17_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_17_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};

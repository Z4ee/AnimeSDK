#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9C33AF57B038AFD8.h"
#include "unitysdk/Class_4_BB909F0A59CC66B5_2_Struct_2_E658502528B7C034_4.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class FXComicDotBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class FXComicDot; }

#define CLASS_4_BB909F0A59CC66B5_2_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x15691620)
#define CLASS_4_BB909F0A59CC66B5_2_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x15691630)
#define CLASS_4_BB909F0A59CC66B5_2_METHOD_4_9CD983CE0B05D2C7_OFFSET UNITYSDK_OFFSET(0x15690A70)
#define CLASS_4_BB909F0A59CC66B5_2_METHOD_4_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x15690940)
#define CLASS_4_BB909F0A59CC66B5_2_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x15691640)
#define CLASS_4_BB909F0A59CC66B5_2_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x156909D0)
#define CLASS_4_BB909F0A59CC66B5_2_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15690FB0)
#define CLASS_4_BB909F0A59CC66B5_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15691600)

inline static constexpr unsigned int Class_4_BB909F0A59CC66B5_2_TypeDefinitionIndex = 63245;

class Class_4_BB909F0A59CC66B5_2 : public ::Class_3_9C33AF57B038AFD8<::UnityEngine::Rendering::Universal::FXComicDot*, ::MoleMole::Timeline::FXComicDotBehaviour*>
{
public:
	::System::Single Field_4_4; // 0x38
	::Class_4_BB909F0A59CC66B5_2_Struct_2_E658502528B7C034_4 Field_4_0; // 0x3C
	::System::Boolean Field_4_5; // 0x48
	::System::Boolean Field_4_6; // 0x49
	::System::Boolean Field_4_1; // 0x4A
	::System::Boolean Field_4_3; // 0x4B
	::System::Boolean Field_4_2; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BB909F0A59CC66B5_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BB909F0A59CC66B5_2_METHOD_4_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_BB909F0A59CC66B5_2_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_BB909F0A59CC66B5_2_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_9CD983CE0B05D2C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_BB909F0A59CC66B5_2_METHOD_4_9CD983CE0B05D2C7_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_BB909F0A59CC66B5_2_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BB909F0A59CC66B5_2_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_BB909F0A59CC66B5_2_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};

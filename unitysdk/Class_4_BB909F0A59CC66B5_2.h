#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9201EB3268983C13.h"
#include "unitysdk/Class_4_BB909F0A59CC66B5_2_Struct_2_E658502528B7C034_11.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class FXComicDotBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class FXComicDot; }

#define CLASS_4_BB909F0A59CC66B5_2_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x1507C620)
#define CLASS_4_BB909F0A59CC66B5_2_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1507C610)
#define CLASS_4_BB909F0A59CC66B5_2_METHOD_4_9CD983CE0B05D2C7_OFFSET UNITYSDK_OFFSET(0x1507BA60)
#define CLASS_4_BB909F0A59CC66B5_2_METHOD_4_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1507B930)
#define CLASS_4_BB909F0A59CC66B5_2_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x1507C630)
#define CLASS_4_BB909F0A59CC66B5_2_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1507B9C0)
#define CLASS_4_BB909F0A59CC66B5_2_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1507BFA0)
#define CLASS_4_BB909F0A59CC66B5_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1507C5F0)

inline static constexpr unsigned int Class_4_BB909F0A59CC66B5_2_TypeDefinitionIndex = 79300;

class Class_4_BB909F0A59CC66B5_2 : public ::Class_3_9201EB3268983C13<::UnityEngine::Rendering::Universal::FXComicDot*, ::MoleMole::Timeline::FXComicDotBehaviour*>
{
public:
	::Class_4_BB909F0A59CC66B5_2_Struct_2_E658502528B7C034_11 Field_4_0; // 0x38
	::System::Boolean Field_4_5; // 0x44
	::System::Boolean Field_4_1; // 0x45
	::System::Boolean Field_4_2; // 0x46
	::System::Single Field_4_4; // 0x48
	::System::Boolean Field_4_3; // 0x4C
	::System::Boolean Field_4_6; // 0x4D

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

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BB909F0A59CC66B5_2_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_BB909F0A59CC66B5_2_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_BB909F0A59CC66B5_2_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_9CD983CE0B05D2C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_BB909F0A59CC66B5_2_METHOD_4_9CD983CE0B05D2C7_OFFSET))(this, a1);
	}
};

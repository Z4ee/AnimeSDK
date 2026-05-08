#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9C33AF57B038AFD8.h"
#include "unitysdk/Class_4_29838489D16EE9EE_Struct_2_E658502528B7C034_8.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class CharacterVolumeProxyBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class CharacterVolumeProxy; }

#define CLASS_4_29838489D16EE9EE_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x139D1B10)
#define CLASS_4_29838489D16EE9EE_METHOD_4_6E520D7D4D494BBE_OFFSET UNITYSDK_OFFSET(0x139D11C0)
#define CLASS_4_29838489D16EE9EE_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x139D1B30)
#define CLASS_4_29838489D16EE9EE_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x139D10C0)
#define CLASS_4_29838489D16EE9EE_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x139D1B20)
#define CLASS_4_29838489D16EE9EE_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x139D1130)
#define CLASS_4_29838489D16EE9EE_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x139D1520)
#define CLASS_4_29838489D16EE9EE__CTOR_OFFSET UNITYSDK_OFFSET(0x139D1B00)

inline static constexpr unsigned int Class_4_29838489D16EE9EE_TypeDefinitionIndex = 77932;

class Class_4_29838489D16EE9EE : public ::Class_3_9C33AF57B038AFD8<::UnityEngine::Rendering::Universal::CharacterVolumeProxy*, ::MoleMole::Timeline::CharacterVolumeProxyBehaviour*>
{
public:
	::System::Boolean Field_4_4; // 0x38
	::System::Boolean Field_4_3; // 0x39
	::System::Boolean Field_4_1; // 0x3A
	::System::Single Field_4_2; // 0x3C
	::Class_4_29838489D16EE9EE_Struct_2_E658502528B7C034_8 Field_4_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_29838489D16EE9EE__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_29838489D16EE9EE_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_29838489D16EE9EE_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_29838489D16EE9EE_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_29838489D16EE9EE_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_29838489D16EE9EE_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_29838489D16EE9EE_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_6E520D7D4D494BBE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_29838489D16EE9EE_METHOD_4_6E520D7D4D494BBE_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }

#define CLASS_2_873D916646FC7B55_METHOD_2_324AEE341AAA7A1B_1_OFFSET UNITYSDK_OFFSET(0x12781310)
#define CLASS_2_873D916646FC7B55_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x12781300)
#define CLASS_2_873D916646FC7B55_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x12781320)
#define CLASS_2_873D916646FC7B55_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x12781250)
#define CLASS_2_873D916646FC7B55_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x127812A0)
#define CLASS_2_873D916646FC7B55_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x127811C0)
#define CLASS_2_873D916646FC7B55__CTOR_OFFSET UNITYSDK_OFFSET(0x127812F0)

inline static constexpr unsigned int Class_2_873D916646FC7B55_TypeDefinitionIndex = 42523;

class Class_2_873D916646FC7B55 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_873D916646FC7B55__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_873D916646FC7B55_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_873D916646FC7B55_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_873D916646FC7B55_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_873D916646FC7B55_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B_1(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_873D916646FC7B55_METHOD_2_324AEE341AAA7A1B_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_873D916646FC7B55_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};

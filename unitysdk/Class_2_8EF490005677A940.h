#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_2_7A4D3608A08D50F9;
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_8EF490005677A940_GET_CLEARONSKIP_OFFSET UNITYSDK_OFFSET(0x9C3C4B0)
#define CLASS_2_8EF490005677A940_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x9C3C4F0)
#define CLASS_2_8EF490005677A940_GET_EXTERNALSOURCENAME_OFFSET UNITYSDK_OFFSET(0x9C3C510)
#define CLASS_2_8EF490005677A940_GET_ISEXTERNALSOURCEVO_OFFSET UNITYSDK_OFFSET(0x9C3C530)
#define CLASS_2_8EF490005677A940_GET_USEEXTERNALSOURCE_OFFSET UNITYSDK_OFFSET(0x9C3C4D0)
#define CLASS_2_8EF490005677A940_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x9C3C550)
#define CLASS_2_8EF490005677A940_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x9C3C5D0)
#define CLASS_2_8EF490005677A940_SET_CLEARONSKIP_OFFSET UNITYSDK_OFFSET(0x9C3C4C0)
#define CLASS_2_8EF490005677A940_SET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x9C3C500)
#define CLASS_2_8EF490005677A940_SET_EXTERNALSOURCENAME_OFFSET UNITYSDK_OFFSET(0x9C3C520)
#define CLASS_2_8EF490005677A940_SET_ISEXTERNALSOURCEVO_OFFSET UNITYSDK_OFFSET(0x9C3C540)
#define CLASS_2_8EF490005677A940_SET_USEEXTERNALSOURCE_OFFSET UNITYSDK_OFFSET(0x9C3C4E0)
#define CLASS_2_8EF490005677A940__CTOR_OFFSET UNITYSDK_OFFSET(0x9C3C660)
#define CLASS_2_8EF490005677A940___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x9C3C670)
#define CLASS_2_8EF490005677A940___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x9C3C680)

inline static constexpr unsigned int Class_2_8EF490005677A940_TypeDefinitionIndex = 39596;

class Class_2_8EF490005677A940 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Class_2_7A4D3608A08D50F9* Field_2_0; // 0x10
	::System::String* _EventName_k__BackingField; // 0x18
	::System::String* _ExternalSourceName_k__BackingField; // 0x20
	::System::Boolean _ClearOnSkip_k__BackingField; // 0x28
	::System::Boolean _IsExternalSourceVO_k__BackingField; // 0x29
	::System::Boolean _UseExternalSource_k__BackingField; // 0x2A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EF490005677A940__CTOR_OFFSET))(this);
	}

	::System::Boolean get_ClearOnSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EF490005677A940_GET_CLEARONSKIP_OFFSET))(this);
	}

	::System::Void set_ClearOnSkip(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8EF490005677A940_SET_CLEARONSKIP_OFFSET))(this, value);
	}

	::System::Boolean get_UseExternalSource()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EF490005677A940_GET_USEEXTERNALSOURCE_OFFSET))(this);
	}

	::System::Void set_UseExternalSource(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8EF490005677A940_SET_USEEXTERNALSOURCE_OFFSET))(this, value);
	}

	::System::String* get_EventName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EF490005677A940_GET_EVENTNAME_OFFSET))(this);
	}

	::System::Void set_EventName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8EF490005677A940_SET_EVENTNAME_OFFSET))(this, value);
	}

	::System::String* get_ExternalSourceName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EF490005677A940_GET_EXTERNALSOURCENAME_OFFSET))(this);
	}

	::System::Void set_ExternalSourceName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8EF490005677A940_SET_EXTERNALSOURCENAME_OFFSET))(this, value);
	}

	::System::Boolean get_IsExternalSourceVO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EF490005677A940_GET_ISEXTERNALSOURCEVO_OFFSET))(this);
	}

	::System::Void set_IsExternalSourceVO(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8EF490005677A940_SET_ISEXTERNALSOURCEVO_OFFSET))(this, value);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_8EF490005677A940_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8EF490005677A940_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_8EF490005677A940___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8EF490005677A940___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
	}
};

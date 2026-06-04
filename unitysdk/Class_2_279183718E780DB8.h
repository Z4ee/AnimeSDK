#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_2_E535003312C99D9D;
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_279183718E780DB8_GET_CLEARONSKIP_OFFSET UNITYSDK_OFFSET(0x14346E60)
#define CLASS_2_279183718E780DB8_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x14346EA0)
#define CLASS_2_279183718E780DB8_GET_EXTERNALSOURCENAME_OFFSET UNITYSDK_OFFSET(0x14346EC0)
#define CLASS_2_279183718E780DB8_GET_ISEXTERNALSOURCEVO_OFFSET UNITYSDK_OFFSET(0x14346EE0)
#define CLASS_2_279183718E780DB8_GET_USEEXTERNALSOURCE_OFFSET UNITYSDK_OFFSET(0x14346E80)
#define CLASS_2_279183718E780DB8_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x14346F00)
#define CLASS_2_279183718E780DB8_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x14346F80)
#define CLASS_2_279183718E780DB8_SET_CLEARONSKIP_OFFSET UNITYSDK_OFFSET(0x14346E70)
#define CLASS_2_279183718E780DB8_SET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x14346EB0)
#define CLASS_2_279183718E780DB8_SET_EXTERNALSOURCENAME_OFFSET UNITYSDK_OFFSET(0x14346ED0)
#define CLASS_2_279183718E780DB8_SET_ISEXTERNALSOURCEVO_OFFSET UNITYSDK_OFFSET(0x14346EF0)
#define CLASS_2_279183718E780DB8_SET_USEEXTERNALSOURCE_OFFSET UNITYSDK_OFFSET(0x14346E90)
#define CLASS_2_279183718E780DB8__CTOR_OFFSET UNITYSDK_OFFSET(0x14347010)
#define CLASS_2_279183718E780DB8___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x14347020)
#define CLASS_2_279183718E780DB8___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x14347030)

inline static constexpr unsigned int Class_2_279183718E780DB8_TypeDefinitionIndex = 46088;

class Class_2_279183718E780DB8 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::String* _ExternalSourceName_k__BackingField; // 0x10
	::System::String* _EventName_k__BackingField; // 0x18
	::Class_2_E535003312C99D9D* Field_2_2; // 0x20
	::System::Boolean _ClearOnSkip_k__BackingField; // 0x28
	::System::Boolean _IsExternalSourceVO_k__BackingField; // 0x29
	::System::Boolean _UseExternalSource_k__BackingField; // 0x2A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_279183718E780DB8__CTOR_OFFSET))(this);
	}

	::System::Boolean get_ClearOnSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_279183718E780DB8_GET_CLEARONSKIP_OFFSET))(this);
	}

	::System::Void set_ClearOnSkip(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_279183718E780DB8_SET_CLEARONSKIP_OFFSET))(this, a1);
	}

	::System::Boolean get_UseExternalSource()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_279183718E780DB8_GET_USEEXTERNALSOURCE_OFFSET))(this);
	}

	::System::Void set_UseExternalSource(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_279183718E780DB8_SET_USEEXTERNALSOURCE_OFFSET))(this, a1);
	}

	::System::String* get_EventName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_279183718E780DB8_GET_EVENTNAME_OFFSET))(this);
	}

	::System::Void set_EventName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_279183718E780DB8_SET_EVENTNAME_OFFSET))(this, a1);
	}

	::System::String* get_ExternalSourceName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_279183718E780DB8_GET_EXTERNALSOURCENAME_OFFSET))(this);
	}

	::System::Void set_ExternalSourceName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_279183718E780DB8_SET_EXTERNALSOURCENAME_OFFSET))(this, a1);
	}

	::System::Boolean get_IsExternalSourceVO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_279183718E780DB8_GET_ISEXTERNALSOURCEVO_OFFSET))(this);
	}

	::System::Void set_IsExternalSourceVO(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_279183718E780DB8_SET_ISEXTERNALSOURCEVO_OFFSET))(this, a1);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_279183718E780DB8_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_279183718E780DB8_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_279183718E780DB8___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_279183718E780DB8___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}
};

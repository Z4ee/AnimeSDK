#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3AED00A354FF7FA1.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPGTools::Timeline::VFX { class VFXOverlayCharacterBackgroundClip; }
namespace System { class Object; }
namespace UnityEngine { class Texture2D; }

#define CLASS_3_893AEA32E309E10E_GET_OVERLAYCLIP_OFFSET UNITYSDK_OFFSET(0x1146AC40)
#define CLASS_3_893AEA32E309E10E_METHOD_3_25DEA5C65A602671_1_OFFSET UNITYSDK_OFFSET(0x1146AED0)
#define CLASS_3_893AEA32E309E10E_METHOD_3_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1146AFF0)
#define CLASS_3_893AEA32E309E10E_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1146AE60)
#define CLASS_3_893AEA32E309E10E_METHOD_3_479759059E440327_OFFSET UNITYSDK_OFFSET(0x1146C4F0)
#define CLASS_3_893AEA32E309E10E_METHOD_3_73D70CF7573CE802_OFFSET UNITYSDK_OFFSET(0x1146C740)
#define CLASS_3_893AEA32E309E10E_METHOD_3_8C3F79E1E85EBE71_OFFSET UNITYSDK_OFFSET(0x1146C5A0)
#define CLASS_3_893AEA32E309E10E_METHOD_3_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x1146C230)
#define CLASS_3_893AEA32E309E10E_METHOD_3_9681042564541CD6_2_OFFSET UNITYSDK_OFFSET(0x1146AE00)
#define CLASS_3_893AEA32E309E10E_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1146C8B0)
#define CLASS_3_893AEA32E309E10E_METHOD_3_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0x1146B140)
#define CLASS_3_893AEA32E309E10E_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1146AC60)
#define CLASS_3_893AEA32E309E10E_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x1146C0B0)
#define CLASS_3_893AEA32E309E10E_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1146C290)
#define CLASS_3_893AEA32E309E10E_SET_OVERLAYCLIP_OFFSET UNITYSDK_OFFSET(0x1146AC50)
#define CLASS_3_893AEA32E309E10E__CTOR_OFFSET UNITYSDK_OFFSET(0x1146C930)
#define CLASS_3_893AEA32E309E10E___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1146C940)
#define CLASS_3_893AEA32E309E10E___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x1146C990)
#define CLASS_3_893AEA32E309E10E___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1146CA40)

inline static constexpr unsigned int Class_3_893AEA32E309E10E_TypeDefinitionIndex = 39470;

class Class_3_893AEA32E309E10E : public ::Class_2_3AED00A354FF7FA1
{
public:
	::RPGTools::Timeline::VFX::VFXOverlayCharacterBackgroundClip* _OverlayClip_k__BackingField; // 0x68
	::UnityEngine::Texture2D* Field_3_2; // 0x70
	::UnityEngine::Texture2D* Field_3_3; // 0x78
	::System::Single Field_3_1; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_893AEA32E309E10E__CTOR_OFFSET))(this);
	}

	::RPGTools::Timeline::VFX::VFXOverlayCharacterBackgroundClip* get_OverlayClip()
	{
		return ((::RPGTools::Timeline::VFX::VFXOverlayCharacterBackgroundClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_893AEA32E309E10E_GET_OVERLAYCLIP_OFFSET))(this);
	}

	::System::Void set_OverlayClip(::RPGTools::Timeline::VFX::VFXOverlayCharacterBackgroundClip* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VFX::VFXOverlayCharacterBackgroundClip*))((::PBYTE)hIl2Cpp + CLASS_3_893AEA32E309E10E_SET_OVERLAYCLIP_OFFSET))(this, value);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_3_893AEA32E309E10E_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_893AEA32E309E10E_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_893AEA32E309E10E_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_893AEA32E309E10E_METHOD_3_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_3_8C3F79E1E85EBE71(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_893AEA32E309E10E_METHOD_3_8C3F79E1E85EBE71_OFFSET))(this, a1);
	}

	::System::Void Method_3_CEA32FF190776922()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_893AEA32E309E10E_METHOD_3_CEA32FF190776922_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_893AEA32E309E10E_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_893AEA32E309E10E_METHOD_3_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_3_73D70CF7573CE802(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_893AEA32E309E10E_METHOD_3_73D70CF7573CE802_OFFSET))(this, a1);
	}

	::System::Void Method_3_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_893AEA32E309E10E_METHOD_3_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_3_25DEA5C65A602671_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_893AEA32E309E10E_METHOD_3_25DEA5C65A602671_1_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_893AEA32E309E10E_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_893AEA32E309E10E_METHOD_3_9681042564541CD6_2_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_3_893AEA32E309E10E___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_893AEA32E309E10E___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_893AEA32E309E10E___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
	}
};

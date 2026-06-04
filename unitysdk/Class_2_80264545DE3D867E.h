#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class String; }

#define CLASS_2_80264545DE3D867E_GET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xA986D40)
#define CLASS_2_80264545DE3D867E_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xA986D60)
#define CLASS_2_80264545DE3D867E_SET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xA986D50)
#define CLASS_2_80264545DE3D867E__CTOR_OFFSET UNITYSDK_OFFSET(0xA986E50)
#define CLASS_2_80264545DE3D867E___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xA986E60)

inline static constexpr unsigned int Class_2_80264545DE3D867E_TypeDefinitionIndex = 45390;

class Class_2_80264545DE3D867E : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::String* _CharacterUniqueName_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80264545DE3D867E__CTOR_OFFSET))(this);
	}

	::System::String* get_CharacterUniqueName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80264545DE3D867E_GET_CHARACTERUNIQUENAME_OFFSET))(this);
	}

	::System::Void set_CharacterUniqueName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_80264545DE3D867E_SET_CHARACTERUNIQUENAME_OFFSET))(this, a1);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_80264545DE3D867E_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_80264545DE3D867E___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}
};

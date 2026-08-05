#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace MoleMole::Timeline { class ZNetEffectPlayableAsset; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_2_301B48028993CEC0_METHOD_2_570F3A4565DFAC7B_OFFSET UNITYSDK_OFFSET(0x18CA3F30)
#define CLASS_2_301B48028993CEC0_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x18CA3F90)
#define CLASS_2_301B48028993CEC0_METHOD_2_EAE1168075E3DC90_OFFSET UNITYSDK_OFFSET(0x18CA3FA0)
#define CLASS_2_301B48028993CEC0_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x18CA3BA0)
#define CLASS_2_301B48028993CEC0__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA3F20)

inline static constexpr unsigned int Class_2_301B48028993CEC0_TypeDefinitionIndex = 64450;

class Class_2_301B48028993CEC0 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x10
	::MoleMole::Timeline::ZNetEffectPlayableAsset* Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_301B48028993CEC0__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_301B48028993CEC0_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_570F3A4565DFAC7B(::UnityEngine::Transform* a1, ::MoleMole::Timeline::ZNetEffectPlayableAsset* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::MoleMole::Timeline::ZNetEffectPlayableAsset*))((::PBYTE)hIl2Cpp + CLASS_2_301B48028993CEC0_METHOD_2_570F3A4565DFAC7B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_301B48028993CEC0_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	static ::UnityEngine::Playables::ScriptPlayable_1<::Class_2_301B48028993CEC0*> Method_2_EAE1168075E3DC90(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Transform* a2, ::MoleMole::Timeline::ZNetEffectPlayableAsset* a3)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::Class_2_301B48028993CEC0*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Transform*, ::MoleMole::Timeline::ZNetEffectPlayableAsset*))((::PBYTE)hIl2Cpp + CLASS_2_301B48028993CEC0_METHOD_2_EAE1168075E3DC90_OFFSET))(a1, a2, a3);
	}
};

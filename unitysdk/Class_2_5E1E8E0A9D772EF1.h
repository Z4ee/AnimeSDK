#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace MoleMole::Timeline { class MihoyoControlPlayableAsset; }
namespace UnityEngine { class ParticleSystem; }

#define CLASS_2_5E1E8E0A9D772EF1_METHOD_2_04B9881CDCB3C78D_OFFSET UNITYSDK_OFFSET(0x1353F930)
#define CLASS_2_5E1E8E0A9D772EF1_METHOD_2_3217ED96CCB7AF34_OFFSET UNITYSDK_OFFSET(0x1353F8A0)
#define CLASS_2_5E1E8E0A9D772EF1_METHOD_2_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0x1353F720)
#define CLASS_2_5E1E8E0A9D772EF1_METHOD_2_6349F8BECC5FCFA0_OFFSET UNITYSDK_OFFSET(0x1353FC10)
#define CLASS_2_5E1E8E0A9D772EF1_METHOD_2_79ED6854413CA2F4_1_OFFSET UNITYSDK_OFFSET(0x1353F910)
#define CLASS_2_5E1E8E0A9D772EF1_METHOD_2_79ED6854413CA2F4_2_OFFSET UNITYSDK_OFFSET(0x1353F920)
#define CLASS_2_5E1E8E0A9D772EF1_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x1353F890)
#define CLASS_2_5E1E8E0A9D772EF1_METHOD_2_BBEE8C0801828E89_OFFSET UNITYSDK_OFFSET(0x1353F710)
#define CLASS_2_5E1E8E0A9D772EF1_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1353F680)
#define CLASS_2_5E1E8E0A9D772EF1_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1353F600)
#define CLASS_2_5E1E8E0A9D772EF1_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x1353EE80)
#define CLASS_2_5E1E8E0A9D772EF1__CTOR_OFFSET UNITYSDK_OFFSET(0x1353F700)

inline static constexpr unsigned int Class_2_5E1E8E0A9D772EF1_TypeDefinitionIndex = 77145;

class Class_2_5E1E8E0A9D772EF1 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	::UnityEngine::ParticleSystem* Field_2_5; // 0x10
	::System::Single Field_2_4; // 0x18
	::System::Single Field_2_1; // 0x1C
	::System::Single Field_2_3; // 0x20
	::System::UInt32 Field_2_2; // 0x24
	::System::Single Field_2_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E1E8E0A9D772EF1__CTOR_OFFSET))(this);
	}

	::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_5E1E8E0A9D772EF1_PREPAREFRAME_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_5E1E8E0A9D772EF1_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_5E1E8E0A9D772EF1_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BBEE8C0801828E89(::UnityEngine::ParticleSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + CLASS_2_5E1E8E0A9D772EF1_METHOD_2_BBEE8C0801828E89_OFFSET))(this, a1);
	}

	::System::Void Method_2_51AC7912135C5E23()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E1E8E0A9D772EF1_METHOD_2_51AC7912135C5E23_OFFSET))(this);
	}

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_5E1E8E0A9D772EF1_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3217ED96CCB7AF34(::UnityEngine::ParticleSystem* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5E1E8E0A9D772EF1_METHOD_2_3217ED96CCB7AF34_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_79ED6854413CA2F4_1(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_5E1E8E0A9D772EF1_METHOD_2_79ED6854413CA2F4_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_79ED6854413CA2F4_2(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_5E1E8E0A9D772EF1_METHOD_2_79ED6854413CA2F4_2_OFFSET))(this, a1, a2);
	}

	static ::UnityEngine::Playables::ScriptPlayable_1<::Class_2_5E1E8E0A9D772EF1*> Method_2_04B9881CDCB3C78D(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::ParticleSystem* a2, ::System::UInt32 a3, ::MoleMole::Timeline::MihoyoControlPlayableAsset* a4)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::Class_2_5E1E8E0A9D772EF1*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::ParticleSystem*, ::System::UInt32, ::MoleMole::Timeline::MihoyoControlPlayableAsset*))((::PBYTE)hIl2Cpp + CLASS_2_5E1E8E0A9D772EF1_METHOD_2_04B9881CDCB3C78D_OFFSET))(a1, a2, a3, a4);
	}

	::UnityEngine::ParticleSystem* Method_2_6349F8BECC5FCFA0()
	{
		return ((::UnityEngine::ParticleSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E1E8E0A9D772EF1_METHOD_2_6349F8BECC5FCFA0_OFFSET))(this);
	}
};

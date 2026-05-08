#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace MoleMole { class MonoEffectPluginFade; }
namespace MoleMole::EffectSimulate { class ESAvatarMatChange_RendererPartInfo; }
namespace MoleMole::EffectSimulate { class NapEffectSimulatorMgr; }
namespace MoleMole::Timeline { class ZNetEffectPlayableAsset; }
namespace MoleMole::Timeline { class ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define CLASS_2_0F0FB8223F56DE89_METHOD_2_054556D93B15C423_OFFSET UNITYSDK_OFFSET(0xFDACDC0)
#define CLASS_2_0F0FB8223F56DE89_METHOD_2_09C6BFF344CB41CE_OFFSET UNITYSDK_OFFSET(0xFDACD80)
#define CLASS_2_0F0FB8223F56DE89_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xFDAC7C0)
#define CLASS_2_0F0FB8223F56DE89_METHOD_2_399F0AAAE38D9F0F_OFFSET UNITYSDK_OFFSET(0xFDACA00)
#define CLASS_2_0F0FB8223F56DE89_METHOD_2_4D10873DB5CC58E4_OFFSET UNITYSDK_OFFSET(0xFDAC9F0)
#define CLASS_2_0F0FB8223F56DE89_METHOD_2_511A5370BBBB9CEA_OFFSET UNITYSDK_OFFSET(0xFDAC1D0)
#define CLASS_2_0F0FB8223F56DE89_METHOD_2_5B0648C68D148A64_OFFSET UNITYSDK_OFFSET(0xFDAC7E0)
#define CLASS_2_0F0FB8223F56DE89_METHOD_2_79ED6854413CA2F4_1_OFFSET UNITYSDK_OFFSET(0xFDACDB0)
#define CLASS_2_0F0FB8223F56DE89_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0xFDAC7B0)
#define CLASS_2_0F0FB8223F56DE89_METHOD_2_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0xFDAC1C0)
#define CLASS_2_0F0FB8223F56DE89_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xFDABF80)
#define CLASS_2_0F0FB8223F56DE89_METHOD_2_C318DBAEB6BFCF96_OFFSET UNITYSDK_OFFSET(0xFDABB10)
#define CLASS_2_0F0FB8223F56DE89_METHOD_2_D2E2C702CB29918C_OFFSET UNITYSDK_OFFSET(0xFDACDA0)
#define CLASS_2_0F0FB8223F56DE89_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xFDACD90)
#define CLASS_2_0F0FB8223F56DE89_METHOD_2_FBB628B83974252D_OFFSET UNITYSDK_OFFSET(0xFDAC7D0)
#define CLASS_2_0F0FB8223F56DE89_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xFDAC010)
#define CLASS_2_0F0FB8223F56DE89_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xFDABE70)
#define CLASS_2_0F0FB8223F56DE89_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xFDAC150)
#define CLASS_2_0F0FB8223F56DE89_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xFDAB7C0)
#define CLASS_2_0F0FB8223F56DE89__CTOR_OFFSET UNITYSDK_OFFSET(0xFDAC1A0)

inline static constexpr unsigned int Class_2_0F0FB8223F56DE89_TypeDefinitionIndex = 42931;

class Class_2_0F0FB8223F56DE89 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	::MoleMole::EffectSimulate::NapEffectSimulatorMgr* Field_2_7; // 0x10
	::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo* Field_2_5; // 0x18
	::MoleMole::Timeline::ZNetEffectPlayableAsset* Field_2_10; // 0x20
	::UnityEngine::GameObject* Field_2_2; // 0x28
	::Il2CppArray<::UnityEngine::ParticleSystem*>* Field_2_1; // 0x30
	::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower* Field_2_9; // 0x38
	::MoleMole::MonoEffectPluginFade* Field_2_8; // 0x40
	::System::Boolean Field_2_6; // 0x48
	::System::Single Field_2_3; // 0x4C
	::System::Single Field_2_4; // 0x50
	::System::Single Field_2_11; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB8223F56DE89__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB8223F56DE89_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB8223F56DE89_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB8223F56DE89_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB8223F56DE89_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB8223F56DE89_METHOD_2_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::System::Void Method_2_C318DBAEB6BFCF96(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB8223F56DE89_METHOD_2_C318DBAEB6BFCF96_OFFSET))(this, a1);
	}

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB8223F56DE89_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB8223F56DE89_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB8223F56DE89_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::MoleMole::EffectSimulate::NapEffectSimulatorMgr* Method_2_FBB628B83974252D()
	{
		return ((::MoleMole::EffectSimulate::NapEffectSimulatorMgr*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB8223F56DE89_METHOD_2_FBB628B83974252D_OFFSET))(this);
	}

	::System::Void Method_2_5B0648C68D148A64(::MoleMole::EffectSimulate::NapEffectSimulatorMgr* a1, ::UnityEngine::GameObject* a2, ::System::UInt32 a3, ::System::Single a4, ::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo* a5, ::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower* a6, ::System::Boolean a7, ::MoleMole::Timeline::ZNetEffectPlayableAsset* a8)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::NapEffectSimulatorMgr*, ::UnityEngine::GameObject*, ::System::UInt32, ::System::Single, ::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo*, ::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower*, ::System::Boolean, ::MoleMole::Timeline::ZNetEffectPlayableAsset*))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB8223F56DE89_METHOD_2_5B0648C68D148A64_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_4D10873DB5CC58E4(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB8223F56DE89_METHOD_2_4D10873DB5CC58E4_OFFSET))(this, a1);
	}

	static ::UnityEngine::Playables::ScriptPlayable_1<::Class_2_0F0FB8223F56DE89*> Method_2_399F0AAAE38D9F0F(::UnityEngine::Playables::PlayableGraph a1, ::MoleMole::EffectSimulate::NapEffectSimulatorMgr* a2, ::UnityEngine::GameObject* a3, ::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo* a4, ::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower* a5, ::System::UInt32 a6, ::System::Single a7, ::System::Boolean a8, ::MoleMole::Timeline::ZNetEffectPlayableAsset* a9)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::Class_2_0F0FB8223F56DE89*>(*)(::UnityEngine::Playables::PlayableGraph, ::MoleMole::EffectSimulate::NapEffectSimulatorMgr*, ::UnityEngine::GameObject*, ::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo*, ::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower*, ::System::UInt32, ::System::Single, ::System::Boolean, ::MoleMole::Timeline::ZNetEffectPlayableAsset*))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB8223F56DE89_METHOD_2_399F0AAAE38D9F0F_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_09C6BFF344CB41CE(::MoleMole::EffectSimulate::NapEffectSimulatorMgr* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::NapEffectSimulatorMgr*))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB8223F56DE89_METHOD_2_09C6BFF344CB41CE_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB8223F56DE89_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::MonoEffectPluginFade* Method_2_D2E2C702CB29918C()
	{
		return ((::MoleMole::MonoEffectPluginFade*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB8223F56DE89_METHOD_2_D2E2C702CB29918C_OFFSET))(this);
	}

	::System::Void Method_2_511A5370BBBB9CEA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB8223F56DE89_METHOD_2_511A5370BBBB9CEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_79ED6854413CA2F4_1(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB8223F56DE89_METHOD_2_79ED6854413CA2F4_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_054556D93B15C423(::MoleMole::MonoEffectPluginFade* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginFade*))((::PBYTE)hIl2Cpp + CLASS_2_0F0FB8223F56DE89_METHOD_2_054556D93B15C423_OFFSET))(this, a1);
	}
};

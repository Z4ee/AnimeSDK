#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_69EDF57FCDC7C5D3.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_167BB37617B940E3;
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Timeline { class ZNetEffectPlayableAsset; }
namespace MoleMole::Timeline { class ZNetEffectPlayableAsset_AbilityScriptParm; }
namespace MoleMole::Timeline { class ZNetEffectPlayableAsset_FollowControl; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define CLASS_2_EEC5400033C8DCB9_METHOD_2_108CB16C9117D532_OFFSET UNITYSDK_OFFSET(0x1432E560)
#define CLASS_2_EEC5400033C8DCB9_METHOD_2_3408BD828C25497E_OFFSET UNITYSDK_OFFSET(0x1432FCA0)
#define CLASS_2_EEC5400033C8DCB9_METHOD_2_44AC3F3C85C7CAA3_OFFSET UNITYSDK_OFFSET(0x1432DDB0)
#define CLASS_2_EEC5400033C8DCB9_METHOD_2_552F4D6C1B9410CE_OFFSET UNITYSDK_OFFSET(0x1432DF00)
#define CLASS_2_EEC5400033C8DCB9_METHOD_2_6349F8BECC5FCFA0_OFFSET UNITYSDK_OFFSET(0x14330DB0)
#define CLASS_2_EEC5400033C8DCB9_METHOD_2_74DBEBE39D47D5DC_OFFSET UNITYSDK_OFFSET(0x14330990)
#define CLASS_2_EEC5400033C8DCB9_METHOD_2_760CB67957711620_OFFSET UNITYSDK_OFFSET(0x14330B10)
#define CLASS_2_EEC5400033C8DCB9_METHOD_2_79ED6854413CA2F4_1_OFFSET UNITYSDK_OFFSET(0x14330B00)
#define CLASS_2_EEC5400033C8DCB9_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x1432E540)
#define CLASS_2_EEC5400033C8DCB9_METHOD_2_8E47CC7464F72BF5_OFFSET UNITYSDK_OFFSET(0x1432F130)
#define CLASS_2_EEC5400033C8DCB9_METHOD_2_9CB456FE1AB720E7_OFFSET UNITYSDK_OFFSET(0x1432E1D0)
#define CLASS_2_EEC5400033C8DCB9_METHOD_2_BBEE8C0801828E89_OFFSET UNITYSDK_OFFSET(0x14330DC0)
#define CLASS_2_EEC5400033C8DCB9_METHOD_2_BF19054FAF7D84A7_OFFSET UNITYSDK_OFFSET(0x1432DA60)
#define CLASS_2_EEC5400033C8DCB9_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x1432E550)
#define CLASS_2_EEC5400033C8DCB9_METHOD_2_EF1C0CDC8394724D_OFFSET UNITYSDK_OFFSET(0x1432F150)
#define CLASS_2_EEC5400033C8DCB9_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1432DD10)
#define CLASS_2_EEC5400033C8DCB9_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1432DC90)
#define CLASS_2_EEC5400033C8DCB9_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1432D300)
#define CLASS_2_EEC5400033C8DCB9__CTOR_OFFSET UNITYSDK_OFFSET(0x1432DD90)

inline static constexpr unsigned int Class_2_EEC5400033C8DCB9_TypeDefinitionIndex = 61612;

class Class_2_EEC5400033C8DCB9 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	::UnityEngine::ParticleSystem* Field_2_7; // 0x10
	::MoleMole::Timeline::ZNetEffectPlayableAsset* Field_2_4; // 0x18
	::UnityEngine::GameObject* Field_2_6; // 0x20
	::System::Single Field_2_3; // 0x28
	::System::Boolean Field_2_5; // 0x2C
	::System::UInt32 Field_2_2; // 0x30
	::System::Single Field_2_1; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEC5400033C8DCB9__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EEC5400033C8DCB9_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_EEC5400033C8DCB9_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_EEC5400033C8DCB9_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_44AC3F3C85C7CAA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEC5400033C8DCB9_METHOD_2_44AC3F3C85C7CAA3_OFFSET))(this);
	}

	static ::UnityEngine::Playables::ScriptPlayable_1<::Class_2_EEC5400033C8DCB9*> Method_2_552F4D6C1B9410CE(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::ParticleSystem* a3, ::System::Boolean a4, ::System::UInt32 a5, ::MoleMole::Timeline::ZNetEffectPlayableAsset* a6)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::Class_2_EEC5400033C8DCB9*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::ParticleSystem*, ::System::Boolean, ::System::UInt32, ::MoleMole::Timeline::ZNetEffectPlayableAsset*))((::PBYTE)hIl2Cpp + CLASS_2_EEC5400033C8DCB9_METHOD_2_552F4D6C1B9410CE_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_EEC5400033C8DCB9_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EEC5400033C8DCB9_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_2_108CB16C9117D532(::UnityEngine::Transform* a1, ::MoleMole::Timeline::ZNetEffectPlayableAsset_FollowControl* a2, ::UnityEngine::Transform* a3, ::UnityEngine::Transform* a4)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::MoleMole::Timeline::ZNetEffectPlayableAsset_FollowControl*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_EEC5400033C8DCB9_METHOD_2_108CB16C9117D532_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_2_9CB456FE1AB720E7(::UnityEngine::GameObject* a1, ::UnityEngine::ParticleSystem* a2, ::System::Boolean a3, ::System::UInt32 a4, ::MoleMole::Timeline::ZNetEffectPlayableAsset* a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::ParticleSystem*, ::System::Boolean, ::System::UInt32, ::MoleMole::Timeline::ZNetEffectPlayableAsset*))((::PBYTE)hIl2Cpp + CLASS_2_EEC5400033C8DCB9_METHOD_2_9CB456FE1AB720E7_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::MoleMole::Timeline::ZNetEffectPlayableAsset_FollowControl* Method_2_8E47CC7464F72BF5()
	{
		return ((::MoleMole::Timeline::ZNetEffectPlayableAsset_FollowControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEC5400033C8DCB9_METHOD_2_8E47CC7464F72BF5_OFFSET))(this);
	}

	static ::System::Void Method_2_EF1C0CDC8394724D(::UnityEngine::Transform* a1, ::MoleMole::Timeline::ZNetEffectPlayableAsset* a2, ::UnityEngine::Transform* a3, ::UnityEngine::Transform* a4, ::System::Boolean a5, ::MoleMole::Timeline::ZNetEffectPlayableAsset_AbilityScriptParm* a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::MoleMole::Timeline::ZNetEffectPlayableAsset*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean, ::MoleMole::Timeline::ZNetEffectPlayableAsset_AbilityScriptParm*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EEC5400033C8DCB9_METHOD_2_EF1C0CDC8394724D_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_2_3408BD828C25497E(::UnityEngine::Transform* a1, ::MoleMole::Config::ConfigPosRot* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::Struct_2_69EDF57FCDC7C5D3 a5, ::Struct_2_FC595D1A561D8C6F& a6, ::UnityEngine::Vector3 a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Boolean a10, ::System::Boolean a11)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::MoleMole::Config::ConfigPosRot*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Struct_2_69EDF57FCDC7C5D3, ::Struct_2_FC595D1A561D8C6F&, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EEC5400033C8DCB9_METHOD_2_3408BD828C25497E_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::System::Void Method_2_BF19054FAF7D84A7(::UnityEngine::Transform* a1, ::MoleMole::Timeline::ZNetEffectPlayableAsset_AbilityScriptParm* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::MoleMole::Timeline::ZNetEffectPlayableAsset_AbilityScriptParm*))((::PBYTE)hIl2Cpp + CLASS_2_EEC5400033C8DCB9_METHOD_2_BF19054FAF7D84A7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_79ED6854413CA2F4_1(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_EEC5400033C8DCB9_METHOD_2_79ED6854413CA2F4_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_760CB67957711620(::UnityEngine::Transform* a1, ::MoleMole::Config::ConfigPosRot* a2, ::Struct_2_FC595D1A561D8C6F& a3, ::UnityEngine::Vector3 a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::Class_2_167BB37617B940E3* a8)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::MoleMole::Config::ConfigPosRot*, ::Struct_2_FC595D1A561D8C6F&, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + CLASS_2_EEC5400033C8DCB9_METHOD_2_760CB67957711620_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::UnityEngine::ParticleSystem* Method_2_6349F8BECC5FCFA0()
	{
		return ((::UnityEngine::ParticleSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEC5400033C8DCB9_METHOD_2_6349F8BECC5FCFA0_OFFSET))(this);
	}

	::System::Void Method_2_BBEE8C0801828E89(::UnityEngine::ParticleSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + CLASS_2_EEC5400033C8DCB9_METHOD_2_BBEE8C0801828E89_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_74DBEBE39D47D5DC(::UnityEngine::Transform* a1, ::MoleMole::Config::ConfigPosRot* a2, ::Struct_2_FC595D1A561D8C6F& a3, ::System::Boolean a4, ::Class_2_167BB37617B940E3* a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::MoleMole::Config::ConfigPosRot*, ::Struct_2_FC595D1A561D8C6F&, ::System::Boolean, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + CLASS_2_EEC5400033C8DCB9_METHOD_2_74DBEBE39D47D5DC_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};

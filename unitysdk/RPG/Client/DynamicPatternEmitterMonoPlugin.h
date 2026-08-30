#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_0_16E4307DCC419505_1028_ERenderInstanceCollectMode.h"
#include "unitysdk/RPG/Client/DynamicPatternEmitterBehavior_SimulationSpaceType.h"
#include "unitysdk/RPG/Client/DynamicPatternEmitterMonoPlugin_LayoutTypes.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/Struct_2_B3CFB45E7E960210.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class DynamicPatternEmitterBehavior; }
namespace RPG::Client { class DynamicPatternEmitterBehavior_PatternData; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_GET_ARTBOUNDFULL_OFFSET UNITYSDK_OFFSET(0x1A68E610)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_GET_ARTBOUND_OFFSET UNITYSDK_OFFSET(0x1A692610)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_GET_AUDIOPLAYERGO_OFFSET UNITYSDK_OFFSET(0x1A6924A0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_GET_IFSHOWALLDIALOG_OFFSET UNITYSDK_OFFSET(0x1A6924C0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_GET_RENDERBUDGETDATA_OFFSET UNITYSDK_OFFSET(0x1A6926C0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_GET_RENDERINSTANCECOLLECTMODE_OFFSET UNITYSDK_OFFSET(0x1A692890)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A68E210)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_METHOD_7_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1A692490)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_METHOD_7_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A692480)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_SET_AUDIOPLAYERGO_OFFSET UNITYSDK_OFFSET(0x1A6924B0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_SET_IFSHOWALLDIALOG_OFFSET UNITYSDK_OFFSET(0x1A6924D0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_STARTPLAY_OFFSET UNITYSDK_OFFSET(0x1A6924E0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_STOPPLAY_OFFSET UNITYSDK_OFFSET(0x1A692590)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A692990)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6928A0)

namespace RPG::Client
{
	inline static constexpr unsigned int DynamicPatternEmitterMonoPlugin_TypeDefinitionIndex = 70862;

	class DynamicPatternEmitterMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::DynamicPatternEmitterBehavior*>
	{
	public:
		static ::System::String** StaticGet_FADILKPGCEM()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DynamicPatternEmitterMonoPlugin_TypeDefinitionIndex)->GetStaticField(0x5F1D0);
		}
		::UnityEngine::Mesh* Mesh; // 0x30
		::UnityEngine::Material* Mat; // 0x38
		::System::Int32 SelectedIndex; // 0x40
		::System::UInt32 PatternCount; // 0x44
		::UnityEngine::Vector3 PatternSize; // 0x48
		::System::Boolean IfOverrideInterval; // 0x54
		::UnityEngine::Vector2 IntervalRange; // 0x58
		::System::Boolean IfOverridePhase; // 0x60
		::UnityEngine::Vector2 PhaseRange; // 0x64
		::System::Boolean IfOverrideAudioEvent; // 0x6C
		::Il2CppArray<::RPG::Client::DynamicPatternEmitterBehavior_PatternData*>* PatternDatas; // 0x70
		::System::Single Period; // 0x78
		::System::Single Phase; // 0x7C
		::System::Single Interval; // 0x80
		::RPG::Client::DynamicPatternEmitterBehavior_SimulationSpaceType SimulationSpace; // 0x84
		::System::Boolean IfUseBillboard; // 0x88
		::System::Boolean IfAutoPlay; // 0x89
		::System::Boolean IfLoop; // 0x8A
		::System::Boolean IfEmitByDist; // 0x8B
		::System::Single EmitDist; // 0x8C
		::System::Boolean IfUseFrustumCulling; // 0x90
		::RPG::Client::DynamicPatternEmitterMonoPlugin_LayoutTypes LayoutType; // 0x94
		::UnityEngine::Quaternion LayoutRotate; // 0x98
		::System::Single PatternDist; // 0xA8
		::System::Int32 SeedRandom; // 0xAC
		::UnityEngine::Vector3 BoxSize; // 0xB0
		::System::Boolean IfUsePosAnim; // 0xBC
		::UnityEngine::Vector3 PosAmplitude; // 0xC0
		::UnityEngine::AnimationCurve* PosCurve0; // 0xD0
		::System::Boolean IfUseScaleAnim; // 0xD8
		::UnityEngine::Vector3 ScaleAmplitude; // 0xDC
		::UnityEngine::AnimationCurve* ScaleCurve0; // 0xE8
		::System::Boolean IfUseWobblyAnim; // 0xF0
		::System::Single WobblyAmplitude; // 0xF4
		::System::Single WobblyFrequency; // 0xF8
		::System::Boolean IfUseOpacityAnim; // 0xFC
		::UnityEngine::AnimationCurve* OpacityCurve; // 0x100
		::System::Boolean IfReceiveSignal; // 0x108
		::System::String* Channel; // 0x110
		::System::Single Signal; // 0x118
		::System::Boolean IfUseAudio; // 0x11C
		::System::String* AudioEventName; // 0x120
		::System::Single AudioDelay; // 0x128
		::System::Boolean IfPlayAudioPerPattern; // 0x12C
		::UnityEngine::GameObject* _AudioPlayerGO_k__BackingField; // 0x130
		::UnityEngine::Transform* DLFBEADOODM; // 0x138
		::System::Boolean _IfShowAllDialog_k__BackingField; // 0x140

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN__CCTOR_OFFSET))();
		}

		::System::Boolean Method_7_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_METHOD_7_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Boolean Method_7_F0088C88851A7DFB_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_METHOD_7_F0088C88851A7DFB_1_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_AudioPlayerGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_GET_AUDIOPLAYERGO_OFFSET))(this);
		}

		::System::Void set_AudioPlayerGO(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_SET_AUDIOPLAYERGO_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Boolean get_IfShowAllDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_GET_IFSHOWALLDIALOG_OFFSET))(this);
		}

		::System::Void set_IfShowAllDialog(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_SET_IFSHOWALLDIALOG_OFFSET))(this, a1);
		}

		::System::Void StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_STARTPLAY_OFFSET))(this);
		}

		::System::Void StopPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_STOPPLAY_OFFSET))(this);
		}

		::UnityEngine::Bounds get_ArtBoundFull()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_GET_ARTBOUNDFULL_OFFSET))(this);
		}

		::System::Single get_ArtBound()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_GET_ARTBOUND_OFFSET))(this);
		}

		::Struct_2_B3CFB45E7E960210 get_RenderBudgetData()
		{
			return ((::Struct_2_B3CFB45E7E960210(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_GET_RENDERBUDGETDATA_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1028_ERenderInstanceCollectMode get_RenderInstanceCollectMode()
		{
			return ((::Class_0_16E4307DCC419505_1028_ERenderInstanceCollectMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERMONOPLUGIN_GET_RENDERINSTANCECOLLECTMODE_OFFSET))(this);
		}
	};
}

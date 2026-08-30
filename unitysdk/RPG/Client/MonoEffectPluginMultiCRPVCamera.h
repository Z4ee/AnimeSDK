#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_2_AEB4FE6DE320B5F5;
namespace RPG::Client { class MonoEffectPluginMultiCRPVCamera_CameraMaskRender; }
namespace RPG::Client { class MonoEffectPluginMultiCRPVCamera_SlotReferenceTransformGroup; }
namespace RPG::CustomRP { class CRPVirtualCameraVolumn; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7C0070)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7C0140)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_DISABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7C0260)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7BFFA0)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_ENABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7C01F0)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xD7C0370)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xD7C03E0)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xD7BFE70)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7BFEB0)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_TICK_OFFSET UNITYSDK_OFFSET(0xD7C02E0)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0xD7C03F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginMultiCRPVCamera_TypeDefinitionIndex = 70044;

	class MonoEffectPluginMultiCRPVCamera : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		// static const ::System::Int32 MAX_CRPCAMERA_COUNT = 0x4; // 0x0
		// static const ::System::Int32 MAX_SLOT_COUNT = 0xA; // 0x0
		::RPG::CustomRP::CRPVirtualCameraVolumn* VCameraVolumn; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginMultiCRPVCamera_SlotReferenceTransformGroup*>* SlotReferenceTransforms; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginMultiCRPVCamera_CameraMaskRender*>* RendererSlots; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginMultiCRPVCamera_SlotReferenceTransformGroup*>* VirtaulCameraSlots; // 0x40
		::System::Boolean UseVirtualCameraFollowMonoPlugin; // 0x48
		::Il2CppArray<::System::Int32>* RenderOrderIndex; // 0x50
		::UnityEngine::Vector2 ReplacedTextureSize; // 0x58
		::UnityEngine::Vector2 ReplacedTextureOffset; // 0x60
		::UnityEngine::Vector4 ReplacedTextureAtlasDivision; // 0x68
		::System::Boolean EnableViewPortTransition; // 0x78
		::System::Single ViewPortTransitionDuration; // 0x7C
		::System::Single ViewPortTransitionStartTime; // 0x80
		::UnityEngine::AnimationCurve* ViewPortSizeTransitionCurve; // 0x88
		::UnityEngine::AnimationCurve* ViewPortPositionTransitionCurve; // 0x90
		::System::Boolean EnableFakeRTTransition; // 0x98
		::System::Single FakeRTTransitionDuration; // 0x9C
		::System::Single FakeRTTransitionStartTime; // 0xA0
		::UnityEngine::AnimationCurve* FakeRTTransitionCurve; // 0xA8
		::Class_2_AEB4FE6DE320B5F5* KADDKEGNCHE; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void EnablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_ENABLEPLUGIN_OFFSET))(this);
		}

		::System::Void DisablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_DISABLEPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_TICK_OFFSET))(this, a1);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::Class_2_AEB4FE6DE320B5F5* get_Behavior()
		{
			return ((::Class_2_AEB4FE6DE320B5F5*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_GET_BEHAVIOR_OFFSET))(this);
		}
	};
}

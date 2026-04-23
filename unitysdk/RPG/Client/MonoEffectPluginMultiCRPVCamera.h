#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_2_032161BA7AFC2E93;
namespace RPG::Client { class MonoEffectPluginMultiCRPVCamera_CameraMaskRender; }
namespace RPG::Client { class MonoEffectPluginMultiCRPVCamera_SlotReferenceTransformGroup; }
namespace RPG::CustomRP { class CRPVirtualCameraVolumn; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA996F30)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xA997000)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_DISABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA997120)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA996E60)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_ENABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA9970B0)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xA997230)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xA9972A0)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xA996D30)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xA996D70)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_TICK_OFFSET UNITYSDK_OFFSET(0xA9971A0)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0xA9972B0)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA9975C0)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xA997620)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA___IFIXBASEPROXY_DISABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA9976E0)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA___IFIXBASEPROXY_ENABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA997680)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA___IFIXBASEPROXY_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xA9977B0)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xA997550)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA997740)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginMultiCRPVCamera_TypeDefinitionIndex = 64603;

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
		::Class_2_032161BA7AFC2E93* Field_6_18; // 0xB0

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

		::Class_2_032161BA7AFC2E93* get_Behavior()
		{
			return ((::Class_2_032161BA7AFC2E93*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_GET_BEHAVIOR_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_EnablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA___IFIXBASEPROXY_ENABLEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DisablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA___IFIXBASEPROXY_DISABLEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_EndOfLateTick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA___IFIXBASEPROXY_ENDOFLATETICK_OFFSET))(this, P0);
		}
	};
}

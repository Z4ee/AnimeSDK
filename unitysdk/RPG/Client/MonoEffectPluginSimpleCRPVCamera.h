#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_2_4F4C9943CC7597CA;
namespace RPG::Client { class CameraNormalConfigData; }
namespace RPG::Client { class CustomCRPSampleSetings; }
namespace RPG::CustomRP { class CRPVirtualCameraVolumn; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7C8FD0)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7C90C0)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_DISABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7C91D0)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7C8F10)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_ENABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7C9160)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xD7C92B0)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xD7C9330)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_GET_ENABLETRUECAMERATRANSITION_OFFSET UNITYSDK_OFFSET(0xD7C9320)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xD7C8DF0)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7C8E30)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_TICK_OFFSET UNITYSDK_OFFSET(0xD7C9240)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0xD7C9340)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginSimpleCRPVCamera_TypeDefinitionIndex = 70076;

	class MonoEffectPluginSimpleCRPVCamera : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::RPG::CustomRP::CRPVirtualCameraVolumn* VCameraVolumn; // 0x28
		::System::Boolean UseVirtualCameraFollowMonoPlugin; // 0x30
		::Il2CppArray<::System::Int32>* OverrideOrderIndex; // 0x38
		::System::Int32 TrueCameraTransitionCRPCameraIndex; // 0x40
		::System::Single TrueCameraTransitionStartTime; // 0x44
		::System::Single ViewPortTransitionDuration; // 0x48
		::UnityEngine::AnimationCurve* ViewPortTransitionCurve; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::CustomCRPSampleSetings*>* CustomCRPSampleSetings; // 0x58
		::System::Boolean DebugAlwaysRefresh; // 0x60
		::RPG::Client::CameraNormalConfigData* DebugCurrentCRPCameraData; // 0x68
		::Class_2_4F4C9943CC7597CA* KADDKEGNCHE; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void EnablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_ENABLEPLUGIN_OFFSET))(this);
		}

		::System::Void DisablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_DISABLEPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_TICK_OFFSET))(this, a1);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableTrueCameraTransition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_GET_ENABLETRUECAMERATRANSITION_OFFSET))(this);
		}

		::Class_2_4F4C9943CC7597CA* get_Behavior()
		{
			return ((::Class_2_4F4C9943CC7597CA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_GET_BEHAVIOR_OFFSET))(this);
		}
	};
}

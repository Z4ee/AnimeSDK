#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharacterModelCapture_RendererNodeModify.h"

class Class_2_76FCF613D93A1497;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CC44B0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE_CLONECAPTUREDMATERIALS_OFFSET UNITYSDK_OFFSET(0x9CC46A0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CC4540)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CC43F0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x9CC4630)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE_GET_CAPTUREDENTITY_OFFSET UNITYSDK_OFFSET(0x9CC4700)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE_GET_CAPTUREDMODELTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9CC4760)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x9CC4310)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CC4350)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE_TICK_OFFSET UNITYSDK_OFFSET(0x9CC45D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x9CC47F0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CC49C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CC4A00)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE___IFIXBASEPROXY_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x9CC4AE0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x9CC4AA0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x9CC4A40)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharacterModelCapture_TypeDefinitionIndex = 57315;

	class MonoEffectPluginCharacterModelCapture : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::UnityEngine::Transform* ModelAttachRoot; // 0x28
		::System::String* CaptureRootPoint; // 0x30
		::System::String* CaptureAnimName; // 0x38
		::System::String* CaptureEmoLayerAnimName; // 0x40
		::System::Single AnimNormalizedTime; // 0x48
		::UnityEngine::Material* ReplaceMaterial; // 0x50
		::System::String* MaterialHeightPropertyName; // 0x58
		::System::String* MaterialScalePropertyName; // 0x60
		::System::Boolean NeedAdditionalDepth; // 0x68
		::System::UInt32 AdditionalRenderingLayerMasks; // 0x6C
		::Il2CppArray<::System::String*>* HideRendererNodes; // 0x70
		::Il2CppArray<::System::String*>* DontRemoveComponents; // 0x78
		::Il2CppArray<::RPG::Client::MonoEffectPluginCharacterModelCapture_RendererNodeModify>* ModifyNodes; // 0x80
		::System::Boolean HideStaticModelEffects; // 0x88
		::System::Boolean UseMainTexture; // 0x89
		::System::Boolean OptimizeTransform; // 0x8A
		::System::Boolean EnableAnimatorPlayback; // 0x8B
		::System::Boolean KeepPointMapping; // 0x8C
		::Class_2_76FCF613D93A1497* _Behavior; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE_TICK_OFFSET))(this, a1);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void CloneCapturedMaterials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE_CLONECAPTUREDMATERIALS_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_CapturedEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE_GET_CAPTUREDENTITY_OFFSET))(this);
		}

		::UnityEngine::Transform* get_CapturedModelTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE_GET_CAPTUREDMODELTRANSFORM_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}

		::System::Boolean __iFixBaseProxy_IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_EndOfLateTick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE___IFIXBASEPROXY_ENDOFLATETICK_OFFSET))(this, P0);
		}
	};
}

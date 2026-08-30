#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharacterModelCapture_RendererNodeModify.h"

class Class_2_4629AB2A15889FA9;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7AEB90)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE_CLONECAPTUREDMATERIALS_OFFSET UNITYSDK_OFFSET(0xD7AED90)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7AEC30)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7AEAD0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xD7AED20)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE_GET_CAPTUREDENTITY_OFFSET UNITYSDK_OFFSET(0xD7AEDF0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE_GET_CAPTUREDMODELTRANSFORM_OFFSET UNITYSDK_OFFSET(0xD7AEE50)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xD7AE9F0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7AEA30)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE_TICK_OFFSET UNITYSDK_OFFSET(0xD7AECC0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE__CCTOR_OFFSET UNITYSDK_OFFSET(0xD7AF050)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE__CTOR_OFFSET UNITYSDK_OFFSET(0xD7AEEE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharacterModelCapture_TypeDefinitionIndex = 70010;

	class MonoEffectPluginCharacterModelCapture : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet_CharacterIDsHideWeaponParts()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharacterModelCapture_TypeDefinitionIndex)->GetStaticField(0x10AE0);
		}
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
		::Il2CppArray<::System::String*>* DisableAnimLayers; // 0x88
		::System::Boolean HideStaticModelEffects; // 0x90
		::System::Boolean UseMainTexture; // 0x91
		::System::Boolean OptimizeTransform; // 0x92
		::System::Boolean EnableAnimatorPlayback; // 0x93
		::System::Boolean AnimSyncEffectTimeStamp; // 0x94
		::System::Boolean AnimSyncTargetTimeStamp; // 0x95
		::System::Boolean KeepPointMapping; // 0x96
		::Class_2_4629AB2A15889FA9* _Behavior; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARACTERMODELCAPTURE__CCTOR_OFFSET))();
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
	};
}

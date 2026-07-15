#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_ECFE369993AEEF11;
namespace System { class String; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_MONOEFFECTPLUGINBODYALCHEMIZE_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x10D01650)
#define RPG_CLIENT_MONOEFFECTPLUGINBODYALCHEMIZE_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x10D015B0)
#define RPG_CLIENT_MONOEFFECTPLUGINBODYALCHEMIZE_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x10D016E0)
#define RPG_CLIENT_MONOEFFECTPLUGINBODYALCHEMIZE_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x10D01480)
#define RPG_CLIENT_MONOEFFECTPLUGINBODYALCHEMIZE_ONINVISIBLE_OFFSET UNITYSDK_OFFSET(0x10D017A0)
#define RPG_CLIENT_MONOEFFECTPLUGINBODYALCHEMIZE_ONVISIBLE_OFFSET UNITYSDK_OFFSET(0x10D01750)
#define RPG_CLIENT_MONOEFFECTPLUGINBODYALCHEMIZE_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x10D014C0)
#define RPG_CLIENT_MONOEFFECTPLUGINBODYALCHEMIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D017F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginBodyAlchemize_TypeDefinitionIndex = 66902;

	class MonoEffectPluginBodyAlchemize : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::Boolean OfflinePreview; // 0x28
		::System::Boolean OfflinePreviewHugeEffect; // 0x29
		::Il2CppArray<::System::String*>* Nodes; // 0x30
		::UnityEngine::Vector3 HierarchyScale; // 0x38
		::System::Single SingleNodeScale; // 0x44
		::UnityEngine::LineRenderer* TemplateLineRenderer; // 0x48
		::UnityEngine::ParticleSystem* TemplateStar; // 0x50
		::UnityEngine::LineRenderer* TemplateLineRendererHuge; // 0x58
		::UnityEngine::ParticleSystem* TemplateStarHuge; // 0x60
		::System::Single FadeProgress; // 0x68
		::System::Boolean LineFadeReverse; // 0x6C
		::Class_2_ECFE369993AEEF11* Field_6_11; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBODYALCHEMIZE__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBODYALCHEMIZE_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBODYALCHEMIZE_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBODYALCHEMIZE_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBODYALCHEMIZE_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBODYALCHEMIZE_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void OnVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBODYALCHEMIZE_ONVISIBLE_OFFSET))(this);
		}

		::System::Void OnInVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBODYALCHEMIZE_ONINVISIBLE_OFFSET))(this);
		}
	};
}

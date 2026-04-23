#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/MonoEffectPluginShape_MonoEffectPluginShapeType.h"

class Class_2_6E7864BF06C083B9_4;
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_MONOEFFECTPLUGINSHAPE_DISABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA99F740)
#define RPG_CLIENT_MONOEFFECTPLUGINSHAPE_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA99F780)
#define RPG_CLIENT_MONOEFFECTPLUGINSHAPE_ENABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA99F700)
#define RPG_CLIENT_MONOEFFECTPLUGINSHAPE_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xA99F5D0)
#define RPG_CLIENT_MONOEFFECTPLUGINSHAPE_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xA99F610)
#define RPG_CLIENT_MONOEFFECTPLUGINSHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0xA99F830)
#define RPG_CLIENT_MONOEFFECTPLUGINSHAPE___IFIXBASEPROXY_DISABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA99F910)
#define RPG_CLIENT_MONOEFFECTPLUGINSHAPE___IFIXBASEPROXY_ENABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA99F8B0)
#define RPG_CLIENT_MONOEFFECTPLUGINSHAPE___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xA99F840)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginShape_TypeDefinitionIndex = 64632;

	class MonoEffectPluginShape : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::RPG::Client::MonoEffectPluginShape_MonoEffectPluginShapeType ShapeType; // 0x28
		::Il2CppArray<::UnityEngine::ParticleSystem*>* MeshRendererParticleSystemList; // 0x30
		::Il2CppArray<::UnityEngine::ParticleSystem*>* SkinnedMeshRendererParticleSystemList; // 0x38
		::Class_2_6E7864BF06C083B9_4* Field_6_3; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSHAPE__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSHAPE_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSHAPE_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void EnablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSHAPE_ENABLEPLUGIN_OFFSET))(this);
		}

		::System::Void DisablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSHAPE_DISABLEPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSHAPE_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSHAPE___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_EnablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSHAPE___IFIXBASEPROXY_ENABLEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DisablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSHAPE___IFIXBASEPROXY_DISABLEPLUGIN_OFFSET))(this);
		}
	};
}

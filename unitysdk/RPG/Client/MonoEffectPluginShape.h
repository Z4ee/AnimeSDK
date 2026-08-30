#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/MonoEffectPluginShape_MonoEffectPluginShapeType.h"

class Class_2_0FB6F5068D635FD7_4;
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_MONOEFFECTPLUGINSHAPE_DISABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B395160)
#define RPG_CLIENT_MONOEFFECTPLUGINSHAPE_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B3951A0)
#define RPG_CLIENT_MONOEFFECTPLUGINSHAPE_ENABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B395120)
#define RPG_CLIENT_MONOEFFECTPLUGINSHAPE_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x1B394FF0)
#define RPG_CLIENT_MONOEFFECTPLUGINSHAPE_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B395030)
#define RPG_CLIENT_MONOEFFECTPLUGINSHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B395250)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginShape_TypeDefinitionIndex = 70073;

	class MonoEffectPluginShape : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::RPG::Client::MonoEffectPluginShape_MonoEffectPluginShapeType ShapeType; // 0x28
		::Il2CppArray<::UnityEngine::ParticleSystem*>* MeshRendererParticleSystemList; // 0x30
		::Il2CppArray<::UnityEngine::ParticleSystem*>* SkinnedMeshRendererParticleSystemList; // 0x38
		::Class_2_0FB6F5068D635FD7_4* KADDKEGNCHE; // 0x40

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
	};
}

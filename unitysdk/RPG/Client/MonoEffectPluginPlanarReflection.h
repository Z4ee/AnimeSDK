#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/ReflcetionModifyType.h"

class Class_2_05745C45E3425330;
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MONOEFFECTPLUGINPLANARREFLECTION_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7FC3F0)
#define RPG_CLIENT_MONOEFFECTPLUGINPLANARREFLECTION_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7FC4F0)
#define RPG_CLIENT_MONOEFFECTPLUGINPLANARREFLECTION_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7FC760)
#define RPG_CLIENT_MONOEFFECTPLUGINPLANARREFLECTION_GETTARGETGO_OFFSET UNITYSDK_OFFSET(0xD7FC7B0)
#define RPG_CLIENT_MONOEFFECTPLUGINPLANARREFLECTION_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xD7FC3B0)
#define RPG_CLIENT_MONOEFFECTPLUGINPLANARREFLECTION_ONPREREATTACH_OFFSET UNITYSDK_OFFSET(0xD7FC800)
#define RPG_CLIENT_MONOEFFECTPLUGINPLANARREFLECTION_ONREATTACHED_OFFSET UNITYSDK_OFFSET(0xD7FC850)
#define RPG_CLIENT_MONOEFFECTPLUGINPLANARREFLECTION_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7FC580)
#define RPG_CLIENT_MONOEFFECTPLUGINPLANARREFLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xD7FC8A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginPlanarReflection_TypeDefinitionIndex = 70012;

	class MonoEffectPluginPlanarReflection : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::RPG::Client::ReflcetionModifyType ModifyType; // 0x28
		::System::Boolean InheritTargetReflectionToMatOfflineTarget; // 0x2C
		::Class_2_05745C45E3425330* KADDKEGNCHE; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPLANARREFLECTION__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPLANARREFLECTION_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPLANARREFLECTION_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPLANARREFLECTION_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPLANARREFLECTION_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPLANARREFLECTION_DISPOSEPLUGIN_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetTargetGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPLANARREFLECTION_GETTARGETGO_OFFSET))(this);
		}

		::System::Void OnPreReattach()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPLANARREFLECTION_ONPREREATTACH_OFFSET))(this);
		}

		::System::Void OnReattached()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPLANARREFLECTION_ONREATTACHED_OFFSET))(this);
		}
	};
}

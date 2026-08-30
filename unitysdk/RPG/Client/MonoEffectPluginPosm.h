#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_2_C1296BA18B05BF41;
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MONOEFFECTPLUGINPOSM_DISABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B391AF0)
#define RPG_CLIENT_MONOEFFECTPLUGINPOSM_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B391B30)
#define RPG_CLIENT_MONOEFFECTPLUGINPOSM_ENABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B391AB0)
#define RPG_CLIENT_MONOEFFECTPLUGINPOSM_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x1B3919A0)
#define RPG_CLIENT_MONOEFFECTPLUGINPOSM_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B3919E0)
#define RPG_CLIENT_MONOEFFECTPLUGINPOSM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B391BF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginPosm_TypeDefinitionIndex = 70061;

	class MonoEffectPluginPosm : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::Il2CppArray<::UnityEngine::GameObject*>* POSMList; // 0x28
		::System::Boolean IsCharacter; // 0x30
		::System::Boolean IsAttachToTarget; // 0x31
		::System::Boolean NeedUI3DShadow; // 0x32
		::Class_2_C1296BA18B05BF41* KADDKEGNCHE; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPOSM__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPOSM_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPOSM_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void EnablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPOSM_ENABLEPLUGIN_OFFSET))(this);
		}

		::System::Void DisablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPOSM_DISABLEPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPOSM_DISPOSEPLUGIN_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_2_014AE24512CAB52D;
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_MONOEFFECTPLUGINANIM_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x10CFE950)
#define RPG_CLIENT_MONOEFFECTPLUGINANIM_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x10CFEA30)
#define RPG_CLIENT_MONOEFFECTPLUGINANIM_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x10CFE910)
#define RPG_CLIENT_MONOEFFECTPLUGINANIM_ENABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0x10CFEB50)
#define RPG_CLIENT_MONOEFFECTPLUGINANIM_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x10CFE7A0)
#define RPG_CLIENT_MONOEFFECTPLUGINANIM_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x10CFE7E0)
#define RPG_CLIENT_MONOEFFECTPLUGINANIM_TICK_OFFSET UNITYSDK_OFFSET(0x10CFEBA0)
#define RPG_CLIENT_MONOEFFECTPLUGINANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x10CFEC10)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginAnim_TypeDefinitionIndex = 66892;

	class MonoEffectPluginAnim : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::UnityEngine::Animator* Animator; // 0x28
		::Il2CppArray<::System::String*>* DefaultStateNames; // 0x30
		::System::Single TransitionDuration; // 0x38
		::Class_2_014AE24512CAB52D* Field_6_3; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINANIM__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINANIM_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINANIM_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINANIM_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINANIM_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINANIM_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void EnablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINANIM_ENABLEPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINANIM_TICK_OFFSET))(this, a1);
		}
	};
}

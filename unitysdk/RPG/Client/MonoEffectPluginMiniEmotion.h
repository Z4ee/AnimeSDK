#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_27164E707AA46745;
namespace RPG::GameCore { class MiniEmoEffectNodeVisible; }
namespace System { class String; }

#define RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA9969E0)
#define RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xA996AA0)
#define RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA9968E0)
#define RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xA996B60)
#define RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xA996800)
#define RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xA996840)
#define RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION_TICK_OFFSET UNITYSDK_OFFSET(0xA996970)
#define RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA996B70)
#define RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA996C70)
#define RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xA996CD0)
#define RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xA996B90)
#define RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA996C00)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginMiniEmotion_TypeDefinitionIndex = 64602;

	class MonoEffectPluginMiniEmotion : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::Single DelayDestroyTime; // 0x28
		::System::Boolean SetMaterialStencil; // 0x2C
		::UnityEngine::Vector3 OffsetPosition; // 0x30
		::UnityEngine::Vector3 OffsetRotation; // 0x3C
		::System::String* AttachPoint; // 0x48
		::Il2CppArray<::RPG::GameCore::MiniEmoEffectNodeVisible*>* NodeVisible; // 0x50
		::Class_2_27164E707AA46745* Field_6_6; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION_TICK_OFFSET))(this, a1);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION_DESTROYPLUGIN_OFFSET))(this);
		}

		::Class_2_27164E707AA46745* get_Behavior()
		{
			return ((::Class_2_27164E707AA46745*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION_GET_BEHAVIOR_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET))(this);
		}
	};
}

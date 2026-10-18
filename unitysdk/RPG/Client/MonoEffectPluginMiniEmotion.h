#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_27164E707AA46745;
namespace RPG::GameCore { class MiniEmoEffectNodeVisible; }
namespace System { class String; }

#define RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7F8500)
#define RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7F85E0)
#define RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7F8400)
#define RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xD7F86A0)
#define RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xD7F8320)
#define RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7F8360)
#define RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION_TICK_OFFSET UNITYSDK_OFFSET(0xD7F8490)
#define RPG_CLIENT_MONOEFFECTPLUGINMINIEMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0xD7F86B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginMiniEmotion_TypeDefinitionIndex = 70078;

	class MonoEffectPluginMiniEmotion : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::Single DelayDestroyTime; // 0x28
		::System::Boolean SetMaterialStencil; // 0x2C
		::UnityEngine::Vector3 OffsetPosition; // 0x30
		::UnityEngine::Vector3 OffsetRotation; // 0x3C
		::System::String* AttachPoint; // 0x48
		::Il2CppArray<::RPG::GameCore::MiniEmoEffectNodeVisible*>* NodeVisible; // 0x50
		::Class_2_27164E707AA46745* KADDKEGNCHE; // 0x58

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
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_0736E73E3F10EC1F;
namespace RPG::Client { class MonoEffectPluginRotate_RotateNode; }

#define RPG_CLIENT_MONOEFFECTPLUGINROTATE_AWAKE_OFFSET UNITYSDK_OFFSET(0xA99E0A0)
#define RPG_CLIENT_MONOEFFECTPLUGINROTATE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA99E260)
#define RPG_CLIENT_MONOEFFECTPLUGINROTATE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA99E1B0)
#define RPG_CLIENT_MONOEFFECTPLUGINROTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA99E2C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginRotate_TypeDefinitionIndex = 64629;

	class MonoEffectPluginRotate : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::MonoEffectPluginRotate_RotateNode*>* RotateNodes; // 0x18
		::System::Single DelayTime; // 0x20
		::Class_2_0736E73E3F10EC1F* Field_5_2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINROTATE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINROTATE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINROTATE_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINROTATE_LATEUPDATE_OFFSET))(this);
		}
	};
}

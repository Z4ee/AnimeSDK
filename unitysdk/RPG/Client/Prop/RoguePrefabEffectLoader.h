#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class TriggerEffectParams; }
namespace System { class String; }

#define RPG_CLIENT_PROP_ROGUEPREFABEFFECTLOADER_METHOD_5_4529D5FBB820A524_OFFSET UNITYSDK_OFFSET(0xDD913A0)
#define RPG_CLIENT_PROP_ROGUEPREFABEFFECTLOADER_METHOD_5_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xDD90FA0)
#define RPG_CLIENT_PROP_ROGUEPREFABEFFECTLOADER_METHOD_5_E48346E1F8A611CB_OFFSET UNITYSDK_OFFSET(0xDD91160)
#define RPG_CLIENT_PROP_ROGUEPREFABEFFECTLOADER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDD910C0)
#define RPG_CLIENT_PROP_ROGUEPREFABEFFECTLOADER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xDD91070)
#define RPG_CLIENT_PROP_ROGUEPREFABEFFECTLOADER_START_OFFSET UNITYSDK_OFFSET(0xDD90F50)
#define RPG_CLIENT_PROP_ROGUEPREFABEFFECTLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0xDD91660)
#define RPG_CLIENT_PROP_ROGUEPREFABEFFECTLOADER___ACTIVEEFFECT_B__3_0_OFFSET UNITYSDK_OFFSET(0xDD91690)
#define RPG_CLIENT_PROP_ROGUEPREFABEFFECTLOADER___GETEFFECTPARAM_B__4_0_OFFSET UNITYSDK_OFFSET(0xDD916F0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RoguePrefabEffectLoader_TypeDefinitionIndex = 78957;

	class RoguePrefabEffectLoader : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* EffectPrefabPath; // 0x18
		::UnityEngine::Vector3 Offset; // 0x20
		::UnityEngine::Vector3 Rotation; // 0x2C
		::System::Boolean FCDAPPDMLEG; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEPREFABEFFECTLOADER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEPREFABEFFECTLOADER_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEPREFABEFFECTLOADER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEPREFABEFFECTLOADER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEPREFABEFFECTLOADER_METHOD_5_B1936CE4DA97AA45_OFFSET))(this);
		}

		::RPG::Client::TriggerEffectParams* Method_5_E48346E1F8A611CB()
		{
			return ((::RPG::Client::TriggerEffectParams*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEPREFABEFFECTLOADER_METHOD_5_E48346E1F8A611CB_OFFSET))(this);
		}

		::System::Void Method_5_4529D5FBB820A524(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEPREFABEFFECTLOADER_METHOD_5_4529D5FBB820A524_OFFSET))(this, a1);
		}

		::System::Void __ActiveEffect_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEPREFABEFFECTLOADER___ACTIVEEFFECT_B__3_0_OFFSET))(this);
		}

		::System::Void __GetEffectParam_b__4_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEPREFABEFFECTLOADER___GETEFFECTPARAM_B__4_0_OFFSET))(this, a1, a2);
		}
	};
}

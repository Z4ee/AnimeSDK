#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class TriggerEffectParams; }
namespace System { class String; }

#define RPG_CLIENT_PROP_ROGUEPREFABEFFECTLOADER_METHOD_5_4529D5FBB820A524_OFFSET UNITYSDK_OFFSET(0x14F41E50)
#define RPG_CLIENT_PROP_ROGUEPREFABEFFECTLOADER_METHOD_5_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x14F419D0)
#define RPG_CLIENT_PROP_ROGUEPREFABEFFECTLOADER_METHOD_5_E48346E1F8A611CB_OFFSET UNITYSDK_OFFSET(0x14F41C10)
#define RPG_CLIENT_PROP_ROGUEPREFABEFFECTLOADER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14F41B70)
#define RPG_CLIENT_PROP_ROGUEPREFABEFFECTLOADER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x14F41B20)
#define RPG_CLIENT_PROP_ROGUEPREFABEFFECTLOADER_START_OFFSET UNITYSDK_OFFSET(0x14F41980)
#define RPG_CLIENT_PROP_ROGUEPREFABEFFECTLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x14F42110)
#define RPG_CLIENT_PROP_ROGUEPREFABEFFECTLOADER___ACTIVEEFFECT_B__3_0_OFFSET UNITYSDK_OFFSET(0x14F42140)
#define RPG_CLIENT_PROP_ROGUEPREFABEFFECTLOADER___GETEFFECTPARAM_B__4_0_OFFSET UNITYSDK_OFFSET(0x14F421A0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RoguePrefabEffectLoader_TypeDefinitionIndex = 75000;

	class RoguePrefabEffectLoader : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* EffectPrefabPath; // 0x18
		::UnityEngine::Vector3 Offset; // 0x20
		::UnityEngine::Vector3 Rotation; // 0x2C
		::System::Boolean Field_5_3; // 0x38

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

		::System::Void Method_5_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEPREFABEFFECTLOADER_METHOD_5_89D1F247B9D324EE_OFFSET))(this);
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

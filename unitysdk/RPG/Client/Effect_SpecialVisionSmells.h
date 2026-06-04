#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class MonoEffect; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_EFFECT_SPECIALVISIONSMELLS_AWAKE_OFFSET UNITYSDK_OFFSET(0xB8881B0)
#define RPG_CLIENT_EFFECT_SPECIALVISIONSMELLS_METHOD_5_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0xB888AD0)
#define RPG_CLIENT_EFFECT_SPECIALVISIONSMELLS_METHOD_5_9D4EC0959ED23C46_OFFSET UNITYSDK_OFFSET(0xB8885F0)
#define RPG_CLIENT_EFFECT_SPECIALVISIONSMELLS_METHOD_5_B469A1C3583AE516_OFFSET UNITYSDK_OFFSET(0xB8887C0)
#define RPG_CLIENT_EFFECT_SPECIALVISIONSMELLS_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB888270)
#define RPG_CLIENT_EFFECT_SPECIALVISIONSMELLS_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xB888330)
#define RPG_CLIENT_EFFECT_SPECIALVISIONSMELLS__CTOR_OFFSET UNITYSDK_OFFSET(0xB888BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_SpecialVisionSmells_TypeDefinitionIndex = 65973;

	class Effect_SpecialVisionSmells : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* OnScanEffectPath; // 0x18
		::Il2CppArray<::UnityEngine::GameObject*>* SpecialVisonSmells; // 0x20
		::System::Int32 Field_5_2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONSMELLS__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONSMELLS_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONSMELLS_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONSMELLS_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void Method_5_B469A1C3583AE516(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONSMELLS_METHOD_5_B469A1C3583AE516_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_022B0D58A3077BF2(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONSMELLS_METHOD_5_022B0D58A3077BF2_OFFSET))(this, a1);
		}

		::System::Void Method_5_9D4EC0959ED23C46(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONSMELLS_METHOD_5_9D4EC0959ED23C46_OFFSET))(this, a1);
		}
	};
}

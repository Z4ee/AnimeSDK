#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SpecialVisionEntityType.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/GameCore/SpecialVisionType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_METHOD_5_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0xCE17FD0)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_METHOD_5_1CD1133DC003C11C_OFFSET UNITYSDK_OFFSET(0xCE17480)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_METHOD_5_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0xCE180A0)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_METHOD_5_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xCE16FB0)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_METHOD_5_D9BF9B27FAC3AAD2_OFFSET UNITYSDK_OFFSET(0xCE17120)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_METHOD_5_F155B191B658A4B9_OFFSET UNITYSDK_OFFSET(0xCE17B80)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCE17610)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCE17070)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCE16F10)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xCE176B0)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_UPDATE_OFFSET UNITYSDK_OFFSET(0xCE17220)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT__CTOR_OFFSET UNITYSDK_OFFSET(0xCE18270)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_SpecialVisionHint_TypeDefinitionIndex = 70519;

	class Effect_SpecialVisionHint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::SpecialVisionEntityType EntityType; // 0x18
		::RPG::GameCore::SpecialVisionType VisionType; // 0x1C
		::Il2CppArray<::UnityEngine::GameObject*>* SpecialVisonSmells; // 0x20
		::System::Single ShowSmellPerformDelay; // 0x28
		::System::Boolean CheckIsVisionInUpdate; // 0x2C
		::System::String* OnScanEffectPath; // 0x30
		::System::Boolean IsTriggerScanEffectOn; // 0x38
		::System::Boolean FOEPPBLPBEI; // 0x39
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* LBPNKEIBNJP; // 0x40
		::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x48
		::RPG::GameCore::CharacterVisibleComponent* GNGGLGFPEOL; // 0x50
		::System::Int32 BDGMFAMOPOO; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void Method_5_F155B191B658A4B9(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_METHOD_5_F155B191B658A4B9_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_D9BF9B27FAC3AAD2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_METHOD_5_D9BF9B27FAC3AAD2_OFFSET))(this);
		}

		::System::Void Method_5_01509228E3A9577B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_METHOD_5_01509228E3A9577B_OFFSET))(this, a1);
		}

		::System::Void Method_5_1CD1133DC003C11C(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_METHOD_5_1CD1133DC003C11C_OFFSET))(this, a1);
		}

		::System::Void Method_5_4389275F4099DE36()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_METHOD_5_4389275F4099DE36_OFFSET))(this);
		}

		::System::Void Method_5_7744894CEC41BF06()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_METHOD_5_7744894CEC41BF06_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }
namespace XftWeapon { class XWeaponTrail; }

#define MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_AWAKE_OFFSET UNITYSDK_OFFSET(0x1235A950)
#define MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_GET_ANIMATORS_OFFSET UNITYSDK_OFFSET(0x1235A6B0)
#define MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_GET_ISALLCOMPONENTSCACHED_OFFSET UNITYSDK_OFFSET(0x1235A600)
#define MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_GET_XWEAPONS_OFFSET UNITYSDK_OFFSET(0x1235A800)
#define MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_METHOD_5_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1235AAE0)
#define MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_UPDATECACHESERIALIZEDATA_OFFSET UNITYSDK_OFFSET(0x1235A9F0)
#define MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1235AB90)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectExtensionBehaviour_TypeDefinitionIndex = 72547;

	class MonoEffectExtensionBehaviour : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::MonoEffectPluginMask _MonoEffectPluginMask; // 0x18
		::Il2CppArray<::UnityEngine::Animator*>* _animators; // 0x38
		::Il2CppArray<::XftWeapon::XWeaponTrail*>* _xWeapons; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsAllComponentsCached()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_GET_ISALLCOMPONENTSCACHED_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Animator*>* get_animators()
		{
			return ((::Il2CppArray<::UnityEngine::Animator*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_GET_ANIMATORS_OFFSET))(this);
		}

		::Il2CppArray<::XftWeapon::XWeaponTrail*>* get_xWeapons()
		{
			return ((::Il2CppArray<::XftWeapon::XWeaponTrail*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_GET_XWEAPONS_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateCacheSerializeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_UPDATECACHESERIALIZEDATA_OFFSET))(this);
		}

		::System::Void Method_5_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_METHOD_5_151E25A63D14DDB0_OFFSET))(this);
		}
	};
}

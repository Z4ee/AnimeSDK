#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class FABRIK_WeaponControl_OtherHand; }
namespace RPG::Client { class FABRIK_WeaponControl_WeaponHand; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FABRIK_WEAPONCONTROL_ATTACHANIMSTATE_OFFSET UNITYSDK_OFFSET(0x1B8A0CB0)
#define RPG_CLIENT_FABRIK_WEAPONCONTROL_IKRESET_OFFSET UNITYSDK_OFFSET(0x1B8A11C0)
#define RPG_CLIENT_FABRIK_WEAPONCONTROL_ISATTACHANIMFIT_OFFSET UNITYSDK_OFFSET(0x1B8A0C50)
#define RPG_CLIENT_FABRIK_WEAPONCONTROL_LOCKWEAPONHAND_OFFSET UNITYSDK_OFFSET(0x1B8A0D10)
#define RPG_CLIENT_FABRIK_WEAPONCONTROL_PROTECTOTHERHANDS_OFFSET UNITYSDK_OFFSET(0x1B8A1070)
#define RPG_CLIENT_FABRIK_WEAPONCONTROL_STOP_OFFSET UNITYSDK_OFFSET(0x1B8A1100)
#define RPG_CLIENT_FABRIK_WEAPONCONTROL_TICK_OFFSET UNITYSDK_OFFSET(0x1B8A13A0)
#define RPG_CLIENT_FABRIK_WEAPONCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A24E0)

namespace RPG::Client
{
	inline static constexpr unsigned int FABRIK_WeaponControl_TypeDefinitionIndex = 68387;

	class FABRIK_WeaponControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* root; // 0x18
		::RPG::Client::FABRIK_WeaponControl_WeaponHand* weaponHand; // 0x20
		::Il2CppArray<::RPG::Client::FABRIK_WeaponControl_OtherHand*>* otherHands; // 0x28
		::System::Nullable_1<::System::Int32> FNHCIPBPIBG; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FABRIK_WEAPONCONTROL__CTOR_OFFSET))(this);
		}

		::System::Boolean IsAttachAnimFit(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FABRIK_WEAPONCONTROL_ISATTACHANIMFIT_OFFSET))(this, a1);
		}

		::System::Void AttachAnimState(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FABRIK_WEAPONCONTROL_ATTACHANIMSTATE_OFFSET))(this, a1);
		}

		::System::Void LockWeaponHand()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FABRIK_WEAPONCONTROL_LOCKWEAPONHAND_OFFSET))(this);
		}

		::System::Void ProtectOtherHands()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FABRIK_WEAPONCONTROL_PROTECTOTHERHANDS_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FABRIK_WEAPONCONTROL_STOP_OFFSET))(this);
		}

		::System::Void IKReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FABRIK_WEAPONCONTROL_IKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FABRIK_WEAPONCONTROL_TICK_OFFSET))(this, a1);
		}
	};
}

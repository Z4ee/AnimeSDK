#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FATERIN_AVATAR_FATERINBATTLEAVATARULTRADETAILOPENPARAM_GET_BORDERTRANS_OFFSET UNITYSDK_OFFSET(0x1CA20B00)
#define RPG_CLIENT_FATERIN_AVATAR_FATERINBATTLEAVATARULTRADETAILOPENPARAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1CA20AD0)
#define RPG_CLIENT_FATERIN_AVATAR_FATERINBATTLEAVATARULTRADETAILOPENPARAM_SET_BORDERTRANS_OFFSET UNITYSDK_OFFSET(0x1CA20B10)
#define RPG_CLIENT_FATERIN_AVATAR_FATERINBATTLEAVATARULTRADETAILOPENPARAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1CA20AF0)
#define RPG_CLIENT_FATERIN_AVATAR_FATERINBATTLEAVATARULTRADETAILOPENPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA20B20)

namespace RPG::Client::FateRin::Avatar
{
	inline static constexpr unsigned int FateRinBattleAvatarUltraDetailOpenParam_TypeDefinitionIndex = 79910;

	class FateRinBattleAvatarUltraDetailOpenParam : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _BorderTrans_k__BackingField; // 0x10
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERINBATTLEAVATARULTRADETAILOPENPARAM__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERINBATTLEAVATARULTRADETAILOPENPARAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERINBATTLEAVATARULTRADETAILOPENPARAM_SET_POSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_BorderTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERINBATTLEAVATARULTRADETAILOPENPARAM_GET_BORDERTRANS_OFFSET))(this);
		}

		::System::Void set_BorderTrans(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERINBATTLEAVATARULTRADETAILOPENPARAM_SET_BORDERTRANS_OFFSET))(this, a1);
		}
	};
}

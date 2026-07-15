#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_PARKOURGAMELOCKTARGETINFO_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A2F4D20)
#define RPG_CLIENT_PARKOURGAMELOCKTARGETINFO_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1A2F4D40)
#define RPG_CLIENT_PARKOURGAMELOCKTARGETINFO_SET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A2F4D30)
#define RPG_CLIENT_PARKOURGAMELOCKTARGETINFO_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1A2F4D50)
#define RPG_CLIENT_PARKOURGAMELOCKTARGETINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A2F32F0)
#define RPG_CLIENT_PARKOURGAMELOCKTARGETINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2F4D60)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourGameLockTargetInfo_TypeDefinitionIndex = 59101;

	class ParkourGameLockTargetInfo : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 _Position_k__BackingField; // 0x10
		::System::Boolean _IsVisible_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMELOCKTARGETINFO__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMELOCKTARGETINFO_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Void set_IsVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMELOCKTARGETINFO_SET_ISVISIBLE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_Position()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMELOCKTARGETINFO_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMELOCKTARGETINFO_SET_POSITION_OFFSET))(this, a1);
		}

		::System::Void Update(::System::Boolean a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMELOCKTARGETINFO_UPDATE_OFFSET))(this, a1, a2);
		}
	};
}

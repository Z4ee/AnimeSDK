#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLING3DFOLLOWDRAGTARGET_SETFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0xB5A7770)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLING3DFOLLOWDRAGTARGET_UPDATE_OFFSET UNITYSDK_OFFSET(0xB5A77C0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLING3DFOLLOWDRAGTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xB5A7A00)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLING3DFOLLOWDRAGTARGET__FOLLOW_OFFSET UNITYSDK_OFFSET(0xB5A7810)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLing3DFollowDragTarget_TypeDefinitionIndex = 70969;

	class ChenLing3DFollowDragTarget : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* _FollowTarget; // 0x18
		::System::Single _DistanceToCamera; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLING3DFOLLOWDRAGTARGET__CTOR_OFFSET))(this);
		}

		::System::Void SetFollowTarget(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLING3DFOLLOWDRAGTARGET_SETFOLLOWTARGET_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLING3DFOLLOWDRAGTARGET_UPDATE_OFFSET))(this);
		}

		::System::Void _Follow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLING3DFOLLOWDRAGTARGET__FOLLOW_OFFSET))(this);
		}
	};
}

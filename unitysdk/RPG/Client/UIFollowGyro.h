#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_UIFOLLOWGYRO_AWAKE_OFFSET UNITYSDK_OFFSET(0x1701C920)
#define RPG_CLIENT_UIFOLLOWGYRO_DEBUGDISABLEUPDATE_OFFSET UNITYSDK_OFFSET(0x1701D380)
#define RPG_CLIENT_UIFOLLOWGYRO_DEBUGENABLEUPDATE_OFFSET UNITYSDK_OFFSET(0x1701D340)
#define RPG_CLIENT_UIFOLLOWGYRO_GET_MAXOFFSET_OFFSET UNITYSDK_OFFSET(0x1701D540)
#define RPG_CLIENT_UIFOLLOWGYRO_GET_MINOFFSET_OFFSET UNITYSDK_OFFSET(0x1701D530)
#define RPG_CLIENT_UIFOLLOWGYRO_ISUSINGGYRO_OFFSET UNITYSDK_OFFSET(0x1701CB50)
#define RPG_CLIENT_UIFOLLOWGYRO_SETMAXOFFSET_OFFSET UNITYSDK_OFFSET(0x1701D2D0)
#define RPG_CLIENT_UIFOLLOWGYRO_UPDATE_OFFSET UNITYSDK_OFFSET(0x1701CA10)
#define RPG_CLIENT_UIFOLLOWGYRO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1701D5D0)
#define RPG_CLIENT_UIFOLLOWGYRO__CTOR_OFFSET UNITYSDK_OFFSET(0x1701D550)
#define RPG_CLIENT_UIFOLLOWGYRO__GETRANDOMOFFSET_OFFSET UNITYSDK_OFFSET(0x1701D480)
#define RPG_CLIENT_UIFOLLOWGYRO__GETRANGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1701D3C0)
#define RPG_CLIENT_UIFOLLOWGYRO__GETRATIOBYGYRO_OFFSET UNITYSDK_OFFSET(0x1701CC50)
#define RPG_CLIENT_UIFOLLOWGYRO__GETRATIOBYSCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x1701CED0)
#define RPG_CLIENT_UIFOLLOWGYRO__UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0x1701CF90)

namespace RPG::Client
{
	inline static constexpr unsigned int UIFollowGyro_TypeDefinitionIndex = 69064;

	class UIFollowGyro : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Single* StaticGet__ZeroRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIFollowGyro_TypeDefinitionIndex)->GetStaticField(0x13EF0);
		}
		::System::Boolean EnableGyro; // 0x18
		::System::Boolean EnableMouse; // 0x19
		::UnityEngine::Vector2 _MinOffset; // 0x1C
		::UnityEngine::Vector2 _MaxOffset; // 0x24
		::System::Single _GyroOffsetMultiplier; // 0x2C
		::System::Single _RandomRange; // 0x30
		::UnityEngine::Vector2 _GravityXRange; // 0x34
		::UnityEngine::Vector2 _GravityYRange; // 0x3C
		::UnityEngine::RectTransform* _Root; // 0x48
		::UnityEngine::Vector2 _DefaultRatio; // 0x50
		::UnityEngine::Vector2 _CurrentRatio; // 0x58
		::UnityEngine::Vector2 _TargetRatio; // 0x60
		::System::Single _RandomOffset; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO_UPDATE_OFFSET))(this);
		}

		::System::Void SetMaxOffset(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO_SETMAXOFFSET_OFFSET))(this, a1, a2);
		}

		::System::Void DebugEnableUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO_DEBUGENABLEUPDATE_OFFSET))(this);
		}

		::System::Void DebugDisableUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO_DEBUGDISABLEUPDATE_OFFSET))(this);
		}

		::System::Boolean IsUsingGyro()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO_ISUSINGGYRO_OFFSET))(this);
		}

		::UnityEngine::Vector2 _GetRatioByGyro()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO__GETRATIOBYGYRO_OFFSET))(this);
		}

		::System::Single _GetRangedRatio(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO__GETRANGEDRATIO_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector2 _GetRatioByScreenPosition(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO__GETRATIOBYSCREENPOSITION_OFFSET))(this, a1);
		}

		::System::Void _UpdatePosition(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO__UPDATEPOSITION_OFFSET))(this, a1);
		}

		::System::Single _GetRandomOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO__GETRANDOMOFFSET_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_MinOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO_GET_MINOFFSET_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_MaxOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO_GET_MAXOFFSET_OFFSET))(this);
		}
	};
}

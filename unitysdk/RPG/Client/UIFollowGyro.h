#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_UIFOLLOWGYRO_AWAKE_OFFSET UNITYSDK_OFFSET(0xCB4B770)
#define RPG_CLIENT_UIFOLLOWGYRO_DEBUGDISABLEUPDATE_OFFSET UNITYSDK_OFFSET(0xCB4C250)
#define RPG_CLIENT_UIFOLLOWGYRO_DEBUGENABLEUPDATE_OFFSET UNITYSDK_OFFSET(0xCB4C210)
#define RPG_CLIENT_UIFOLLOWGYRO_GET_MAXOFFSET_OFFSET UNITYSDK_OFFSET(0xCB4C410)
#define RPG_CLIENT_UIFOLLOWGYRO_GET_MINOFFSET_OFFSET UNITYSDK_OFFSET(0xCB4C400)
#define RPG_CLIENT_UIFOLLOWGYRO_ISUSINGGYRO_OFFSET UNITYSDK_OFFSET(0xCB4B970)
#define RPG_CLIENT_UIFOLLOWGYRO_SETMAXOFFSET_OFFSET UNITYSDK_OFFSET(0xCB4C1A0)
#define RPG_CLIENT_UIFOLLOWGYRO_UPDATE_OFFSET UNITYSDK_OFFSET(0xCB4B830)
#define RPG_CLIENT_UIFOLLOWGYRO__CCTOR_OFFSET UNITYSDK_OFFSET(0xCB4C4A0)
#define RPG_CLIENT_UIFOLLOWGYRO__CTOR_OFFSET UNITYSDK_OFFSET(0xCB4C420)
#define RPG_CLIENT_UIFOLLOWGYRO__GETRANDOMOFFSET_OFFSET UNITYSDK_OFFSET(0xCB4C350)
#define RPG_CLIENT_UIFOLLOWGYRO__GETRANGEDRATIO_OFFSET UNITYSDK_OFFSET(0xCB4C290)
#define RPG_CLIENT_UIFOLLOWGYRO__GETRATIOBYGYRO_OFFSET UNITYSDK_OFFSET(0xCB4BA70)
#define RPG_CLIENT_UIFOLLOWGYRO__GETRATIOBYSCREENPOSITION_OFFSET UNITYSDK_OFFSET(0xCB4BDA0)
#define RPG_CLIENT_UIFOLLOWGYRO__UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0xCB4BE60)

namespace RPG::Client
{
	inline static constexpr unsigned int UIFollowGyro_TypeDefinitionIndex = 64624;

	class UIFollowGyro : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Single* StaticGet__ZeroRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIFollowGyro_TypeDefinitionIndex)->GetStaticField(0x122F0);
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

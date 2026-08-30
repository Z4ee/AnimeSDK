#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xD8AC950)
#define RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xD8ABB20)
#define RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xD8ABEB0)
#define RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD8AC9A0)
#define RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER__GETHEADICONSCPOS_OFFSET UNITYSDK_OFFSET(0xD8AC4B0)
#define RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER__GETSCREENCOORDINATEVALUE_OFFSET UNITYSDK_OFFSET(0xD8ABC90)
#define RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER__ISPLAYERINSCREEN_OFFSET UNITYSDK_OFFSET(0xD8AC0D0)
#define RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER__ROTATEICON_OFFSET UNITYSDK_OFFSET(0xD8AC5D0)
#define RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER__UPDATEPLAYERICONPOS_OFFSET UNITYSDK_OFFSET(0xD8AC150)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyPlayerHeadIconController_TypeDefinitionIndex = 72762;

	class MonopolyPlayerHeadIconController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* _PlayerHeadIconRT; // 0x18
		::UnityEngine::Transform* _PlayerEntityTranformRef; // 0x20
		::UnityEngine::RectTransform* MalePlayerRT; // 0x28
		::UnityEngine::RectTransform* FemalePlayerRT; // 0x30
		::UnityEngine::RectTransform* ArrowRT; // 0x38
		::UnityEngine::RectTransform* MoveLimitRT; // 0x40
		::UnityEngine::RectTransform* PlayerRootRt; // 0x48
		::Il2CppArray<::UnityEngine::Vector3>* _MoveLimitWorldCorners; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _MoveLimitScCorners; // 0x58
		::System::Single _ScreenLeftMostX; // 0x60
		::System::Single _ScreenRightMostX; // 0x64
		::System::Single _ScreenUpMostY; // 0x68
		::System::Single _ScreenDownMostY; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void _GetScreenCoordinateValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER__GETSCREENCOORDINATEVALUE_OFFSET))(this);
		}

		::System::Boolean _IsPlayerInScreen(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER__ISPLAYERINSCREEN_OFFSET))(this, a1);
		}

		::System::Void _UpdatePlayerIconPos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER__UPDATEPLAYERICONPOS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 _GetHeadIconScPos(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER__GETHEADICONSCPOS_OFFSET))(this, a1);
		}

		::System::Void _RotateIcon(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER__ROTATEICON_OFFSET))(this, a1);
		}

		::System::Void Init(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER_INIT_OFFSET))(this, a1);
		}
	};
}

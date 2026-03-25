#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x9D76820)
#define RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x9D75AD0)
#define RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9D75E30)
#define RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9D76870)
#define RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER__GETHEADICONSCPOS_OFFSET UNITYSDK_OFFSET(0x9D76430)
#define RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER__GETSCREENCOORDINATEVALUE_OFFSET UNITYSDK_OFFSET(0x9D75C40)
#define RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER__ISPLAYERINSCREEN_OFFSET UNITYSDK_OFFSET(0x9D76050)
#define RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER__ROTATEICON_OFFSET UNITYSDK_OFFSET(0x9D76520)
#define RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER__UPDATEPLAYERICONPOS_OFFSET UNITYSDK_OFFSET(0x9D760D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyPlayerHeadIconController_TypeDefinitionIndex = 59708;

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

		::System::Boolean _IsPlayerInScreen(::UnityEngine::Vector3 playerScPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER__ISPLAYERINSCREEN_OFFSET))(this, playerScPos);
		}

		::System::Void _UpdatePlayerIconPos(::UnityEngine::Vector3 playerScPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER__UPDATEPLAYERICONPOS_OFFSET))(this, playerScPos);
		}

		::UnityEngine::Vector2 _GetHeadIconScPos(::UnityEngine::Vector3 aScPos)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER__GETHEADICONSCPOS_OFFSET))(this, aScPos);
		}

		::System::Void _RotateIcon(::UnityEngine::Vector3 aScPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER__ROTATEICON_OFFSET))(this, aScPos);
		}

		::System::Void Init(::UnityEngine::Transform* player)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYPLAYERHEADICONCONTROLLER_INIT_OFFSET))(this, player);
		}
	};
}

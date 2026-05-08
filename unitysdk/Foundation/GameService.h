#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Foundation { class TickService; }
namespace System { class Action; }
namespace System { class Type; }
namespace UnityEngine { class Coroutine; }

#define FOUNDATION_GAMESERVICE_GETGAMESERVICE_OFFSET UNITYSDK_OFFSET(0x1BFF9A30)
#define FOUNDATION_GAMESERVICE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1BFF9F20)
#define FOUNDATION_GAMESERVICE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BFFA1D0)
#define FOUNDATION_GAMESERVICE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BFF9BC0)
#define FOUNDATION_GAMESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFFA2A0)

namespace Foundation
{
	inline static constexpr unsigned int GameService_TypeDefinitionIndex = 9022;

	class GameService : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Foundation::GameService** StaticGet__instance()
		{
			return (::Foundation::GameService**)Il2CppClass::FromTypeDefinitionIndex(GameService_TypeDefinitionIndex)->GetStaticField(0x7DD0);
		}
		static ::System::Boolean* StaticGet__isInit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GameService_TypeDefinitionIndex)->GetStaticField(0x3CC0);
		}
		::UnityEngine::Coroutine* _endOfFrameCoroutine; // 0x18
		::Foundation::TickService* _tickService; // 0x20
		::System::Action* _onReadyToDestroy; // 0x28
		::System::Action* _onDestroy; // 0x30
		::System::Boolean _isDestroying; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GAMESERVICE__CTOR_OFFSET))(this);
		}

		static ::Foundation::GameService* GetGameService()
		{
			return ((::Foundation::GameService*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_GAMESERVICE_GETGAMESERVICE_OFFSET))();
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GAMESERVICE_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GAMESERVICE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GAMESERVICE_ONDESTROY_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::CustomRP { class CRPVirtualCameraMask; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHATPAMCONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9319F30)
#define RPG_CLIENT_CHATPAMCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x9319E90)
#define RPG_CLIENT_CHATPAMCONTROLLER_LOADPAM_OFFSET UNITYSDK_OFFSET(0x931A160)
#define RPG_CLIENT_CHATPAMCONTROLLER_UNLOADPAM_OFFSET UNITYSDK_OFFSET(0x9319FE0)
#define RPG_CLIENT_CHATPAMCONTROLLER__CHANGEPAMSKIN_OFFSET UNITYSDK_OFFSET(0x931A660)
#define RPG_CLIENT_CHATPAMCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x931A7A0)
#define RPG_CLIENT_CHATPAMCONTROLLER__ONENTITYLOADFINISH_OFFSET UNITYSDK_OFFSET(0x931A4E0)
#define RPG_CLIENT_CHATPAMCONTROLLER__ONPAMCHATFREESTYLEEVENT_OFFSET UNITYSDK_OFFSET(0x931A450)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatPamController_TypeDefinitionIndex = 59372;

	class ChatPamController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* PamRoot; // 0x18
		::RPG::CustomRP::CRPVirtualCameraMask* CameraMask; // 0x20
		::System::String* UniqueName; // 0x28
		::System::String* LevelGraphPath; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* ActionCustomStringList; // 0x38
		::RPG::GameCore::GameEntity* _Entity; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATPAMCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATPAMCONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATPAMCONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Void LoadPam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATPAMCONTROLLER_LOADPAM_OFFSET))(this);
		}

		::System::Void UnloadPam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATPAMCONTROLLER_UNLOADPAM_OFFSET))(this);
		}

		::System::Void _OnPamChatFreeStyleEvent(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATPAMCONTROLLER__ONPAMCHATFREESTYLEEVENT_OFFSET))(this, arg);
		}

		::System::Void _OnEntityLoadFinish(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATPAMCONTROLLER__ONENTITYLOADFINISH_OFFSET))(this, entity);
		}

		::System::Void _ChangePamSkin(::System::String* modelEntityPath, ::System::String* animEventJsonPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATPAMCONTROLLER__CHANGEPAMSKIN_OFFSET))(this, modelEntityPath, animEventJsonPath);
		}
	};
}

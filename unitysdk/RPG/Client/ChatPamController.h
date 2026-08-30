#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class PamSkinData; }
namespace RPG::CustomRP { class CRPVirtualCameraMask; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHATPAMCONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B9395B0)
#define RPG_CLIENT_CHATPAMCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x1B9394F0)
#define RPG_CLIENT_CHATPAMCONTROLLER_LOADPAM_OFFSET UNITYSDK_OFFSET(0x1B939810)
#define RPG_CLIENT_CHATPAMCONTROLLER_SETPAMSKIN_OFFSET UNITYSDK_OFFSET(0x1B939C80)
#define RPG_CLIENT_CHATPAMCONTROLLER_STOPFREESTYLE_OFFSET UNITYSDK_OFFSET(0x1B939BA0)
#define RPG_CLIENT_CHATPAMCONTROLLER_UNLOADPAM_OFFSET UNITYSDK_OFFSET(0x1B939690)
#define RPG_CLIENT_CHATPAMCONTROLLER__CHANGEPAMSKIN_OFFSET UNITYSDK_OFFSET(0x1B939CF0)
#define RPG_CLIENT_CHATPAMCONTROLLER__CREATEPAMENTITY_OFFSET UNITYSDK_OFFSET(0x1B9398D0)
#define RPG_CLIENT_CHATPAMCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B93A1C0)
#define RPG_CLIENT_CHATPAMCONTROLLER__GETMANIKINJSONPATH_OFFSET UNITYSDK_OFFSET(0x1B939DC0)
#define RPG_CLIENT_CHATPAMCONTROLLER__ONENTITYLOADFINISH_OFFSET UNITYSDK_OFFSET(0x1B939F80)
#define RPG_CLIENT_CHATPAMCONTROLLER__ONPAMCHATFREESTYLEEVENT_OFFSET UNITYSDK_OFFSET(0x1B939E90)
#define RPG_CLIENT_CHATPAMCONTROLLER__ONPOSSESSIONLOADED_OFFSET UNITYSDK_OFFSET(0x1B939F20)
#define RPG_CLIENT_CHATPAMCONTROLLER__PLAYEFFECT_OFFSET UNITYSDK_OFFSET(0x1B93A0F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatPamController_TypeDefinitionIndex = 72391;

	class ChatPamController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* PamRoot; // 0x18
		::RPG::CustomRP::CRPVirtualCameraMask* CameraMask; // 0x20
		::System::String* UniqueName; // 0x28
		::System::String* LevelGraphPath; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* ActionCustomStringList; // 0x38
		::RPG::GameCore::GameEntity* _Entity; // 0x40
		::System::UInt32 _CurrentPamSkinID; // 0x48

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

		::System::Void StopFreeStyle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATPAMCONTROLLER_STOPFREESTYLE_OFFSET))(this);
		}

		::System::Void SetPamSkin(::RPG::Client::PamSkinData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PamSkinData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATPAMCONTROLLER_SETPAMSKIN_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* _CreatePamEntity(::RPG::Client::PamSkinData* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::Client::PamSkinData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATPAMCONTROLLER__CREATEPAMENTITY_OFFSET))(this, a1);
		}

		::System::Void _OnPamChatFreeStyleEvent(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATPAMCONTROLLER__ONPAMCHATFREESTYLEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnPossessionLoaded(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATPAMCONTROLLER__ONPOSSESSIONLOADED_OFFSET))(this, a1);
		}

		::System::Void _OnEntityLoadFinish(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATPAMCONTROLLER__ONENTITYLOADFINISH_OFFSET))(this, a1);
		}

		::System::Void _ChangePamSkin(::RPG::Client::PamSkinData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PamSkinData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATPAMCONTROLLER__CHANGEPAMSKIN_OFFSET))(this, a1);
		}

		::System::Void _PlayEFfect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATPAMCONTROLLER__PLAYEFFECT_OFFSET))(this);
		}

		::System::String* _GetManikinJsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATPAMCONTROLLER__GETMANIKINJSONPATH_OFFSET))(this);
		}
	};
}

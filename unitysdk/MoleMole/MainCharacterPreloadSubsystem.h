#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_72B2971A35998F47.h"

class Class_1_B7E341C5F1A6F199;
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_ABORTCURRENTREQUEST_OFFSET UNITYSDK_OFFSET(0x15B2F160)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_CHANGEPRELOADMAINCHARACTERTOTEAM_OFFSET UNITYSDK_OFFSET(0x15B2F090)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_CHANGETEAMTOPRELOADMAINCHARACTER_OFFSET UNITYSDK_OFFSET(0x182234E0)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_DELAYUNLOADMAINCHARACTERAVATARENTITY_OFFSET UNITYSDK_OFFSET(0x15B2F3D0)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_HANDLEENTITYTOREMOVE_OFFSET UNITYSDK_OFFSET(0x15B2F670)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_HANDLELEVELTEAMREPLACE_OFFSET UNITYSDK_OFFSET(0x182233F0)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_HANDLESWITCHREQUEST_OFFSET UNITYSDK_OFFSET(0x15B2F1D0)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_INTERNALHANDLESWITCHREQUEST_OFFSET UNITYSDK_OFFSET(0x15B2F920)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x18223300)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x15B2F5D0)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_PRELOADMAINCHARACTERAVATARENTITY_OFFSET UNITYSDK_OFFSET(0x18223460)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x18223040)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_TRYUNFREEZESWITCHAVATAR_OFFSET UNITYSDK_OFFSET(0x15B2F860)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_UNLOADPRELOADEDTEAM_OFFSET UNITYSDK_OFFSET(0x15B2F420)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x15B2FA00)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x15B2FA90)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x15B2FB20)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x15B2FBB0)

namespace MoleMole
{
	inline static constexpr unsigned int MainCharacterPreloadSubsystem_TypeDefinitionIndex = 50529;

	class MainCharacterPreloadSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::MainCharacterPreloadSubsystem*>
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* _entityToRemove; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* PreloadedTeam; // 0x18
		::Struct_2_72B2971A35998F47 _switchRequest; // 0x20
		::System::Int32 CachedLocalAvatarIndex; // 0x48
		::System::Boolean IsMainCharacterPreloaded; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void HandleLevelTeamReplace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_HANDLELEVELTEAMREPLACE_OFFSET))(this);
		}

		::System::Void PreloadMainCharacterAvatarEntity(::MoleMole::EntityHandle entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_PRELOADMAINCHARACTERAVATARENTITY_OFFSET))(this, entity);
		}

		::System::Void ChangeTeamToPreloadMainCharacter(::System::Action* onSuccess, ::System::Action* onFailed, ::System::Action* onCanceled, ::System::Func_1<::System::Boolean>* validateFunc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Action*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_CHANGETEAMTOPRELOADMAINCHARACTER_OFFSET))(this, onSuccess, onFailed, onCanceled, validateFunc);
		}

		::System::Void ChangePreloadMainCharacterToTeam(::System::Action* onSuccess, ::System::Action* onFailed, ::System::Action* onCanceled, ::System::Func_1<::System::Boolean>* validateFunc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Action*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_CHANGEPRELOADMAINCHARACTERTOTEAM_OFFSET))(this, onSuccess, onFailed, onCanceled, validateFunc);
		}

		::System::Void AbortCurrentRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_ABORTCURRENTREQUEST_OFFSET))(this);
		}

		::System::Void DelayUnloadMainCharacterAvatarEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_DELAYUNLOADMAINCHARACTERAVATARENTITY_OFFSET))(this);
		}

		::System::Void UnloadPreloadedTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_UNLOADPRELOADEDTEAM_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void HandleEntityToRemove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_HANDLEENTITYTOREMOVE_OFFSET))(this);
		}

		::System::Void HandleSwitchRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_HANDLESWITCHREQUEST_OFFSET))(this);
		}

		::System::Void InternalHandleSwitchRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_INTERNALHANDLESWITCHREQUEST_OFFSET))(this);
		}

		::System::Void TryUnfreezeSwitchAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_TRYUNFREEZESWITCHAVATAR_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}

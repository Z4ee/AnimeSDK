#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Services/MonoManager_UpdateMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define PARADOXNOTION_SERVICES_MONOMANAGER_ADDUPDATECALL_OFFSET UNITYSDK_OFFSET(0x1EB8E080)
#define PARADOXNOTION_SERVICES_MONOMANAGER_ADD_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1EB8D8E0)
#define PARADOXNOTION_SERVICES_MONOMANAGER_ADD_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1EB8D7E0)
#define PARADOXNOTION_SERVICES_MONOMANAGER_ADD_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1EB8D6E0)
#define PARADOXNOTION_SERVICES_MONOMANAGER_ADD_ONGUI_OFFSET UNITYSDK_OFFSET(0x1EB8D9E0)
#define PARADOXNOTION_SERVICES_MONOMANAGER_ADD_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1EB8D5E0)
#define PARADOXNOTION_SERVICES_MONOMANAGER_ADD_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EB8D4E0)
#define PARADOXNOTION_SERVICES_MONOMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1EB8E340)
#define PARADOXNOTION_SERVICES_MONOMANAGER_CREATE_OFFSET UNITYSDK_OFFSET(0x1EB8E060)
#define PARADOXNOTION_SERVICES_MONOMANAGER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1EB8E610)
#define PARADOXNOTION_SERVICES_MONOMANAGER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EB8DAE0)
#define PARADOXNOTION_SERVICES_MONOMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1EB8E600)
#define PARADOXNOTION_SERVICES_MONOMANAGER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1EB8E590)
#define PARADOXNOTION_SERVICES_MONOMANAGER_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1EB8E570)
#define PARADOXNOTION_SERVICES_MONOMANAGER_PURGE_OFFSET UNITYSDK_OFFSET(0x1EB8E050)
#define PARADOXNOTION_SERVICES_MONOMANAGER_REMOVEUPDATECALL_OFFSET UNITYSDK_OFFSET(0x1EB8E1E0)
#define PARADOXNOTION_SERVICES_MONOMANAGER_REMOVE_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1EB8D960)
#define PARADOXNOTION_SERVICES_MONOMANAGER_REMOVE_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1EB8D860)
#define PARADOXNOTION_SERVICES_MONOMANAGER_REMOVE_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1EB8D760)
#define PARADOXNOTION_SERVICES_MONOMANAGER_REMOVE_ONGUI_OFFSET UNITYSDK_OFFSET(0x1EB8DA60)
#define PARADOXNOTION_SERVICES_MONOMANAGER_REMOVE_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1EB8D660)
#define PARADOXNOTION_SERVICES_MONOMANAGER_REMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EB8D560)
#define PARADOXNOTION_SERVICES_MONOMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1EB8E5F0)
#define PARADOXNOTION_SERVICES_MONOMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB8E620)

namespace ParadoxNotion::Services
{
	inline static constexpr unsigned int MonoManager_TypeDefinitionIndex = 29825;

	class MonoManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::ParadoxNotion::Services::MonoManager** StaticGet__current()
		{
			return (::ParadoxNotion::Services::MonoManager**)Il2CppClass::FromTypeDefinitionIndex(MonoManager_TypeDefinitionIndex)->GetStaticField(0x25940);
		}
		static ::System::Boolean* StaticGet_isQuiting()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoManager_TypeDefinitionIndex)->GetStaticField(0x7AA0);
		}
		::System::Action* onUpdate; // 0x18
		::System::Action* onLateUpdate; // 0x20
		::System::Action* onFixedUpdate; // 0x28
		::System::Action* onApplicationQuit; // 0x30
		::System::Action_1<::System::Boolean>* onApplicationPause; // 0x38
		::System::Action* onGUI; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_MONOMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void add_onUpdate(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_MONOMANAGER_ADD_ONUPDATE_OFFSET))(this, value);
		}

		::System::Void remove_onUpdate(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_MONOMANAGER_REMOVE_ONUPDATE_OFFSET))(this, value);
		}

		::System::Void add_onLateUpdate(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_MONOMANAGER_ADD_ONLATEUPDATE_OFFSET))(this, value);
		}

		::System::Void remove_onLateUpdate(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_MONOMANAGER_REMOVE_ONLATEUPDATE_OFFSET))(this, value);
		}

		::System::Void add_onFixedUpdate(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_MONOMANAGER_ADD_ONFIXEDUPDATE_OFFSET))(this, value);
		}

		::System::Void remove_onFixedUpdate(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_MONOMANAGER_REMOVE_ONFIXEDUPDATE_OFFSET))(this, value);
		}

		::System::Void add_onApplicationQuit(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_MONOMANAGER_ADD_ONAPPLICATIONQUIT_OFFSET))(this, value);
		}

		::System::Void remove_onApplicationQuit(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_MONOMANAGER_REMOVE_ONAPPLICATIONQUIT_OFFSET))(this, value);
		}

		::System::Void add_onApplicationPause(::System::Action_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_MONOMANAGER_ADD_ONAPPLICATIONPAUSE_OFFSET))(this, value);
		}

		::System::Void remove_onApplicationPause(::System::Action_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_MONOMANAGER_REMOVE_ONAPPLICATIONPAUSE_OFFSET))(this, value);
		}

		::System::Void add_onGUI(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_MONOMANAGER_ADD_ONGUI_OFFSET))(this, value);
		}

		::System::Void remove_onGUI(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_MONOMANAGER_REMOVE_ONGUI_OFFSET))(this, value);
		}

		static ::ParadoxNotion::Services::MonoManager* get_current()
		{
			return ((::ParadoxNotion::Services::MonoManager*(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_MONOMANAGER_GET_CURRENT_OFFSET))();
		}

		static ::System::Void Purge()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_MONOMANAGER_PURGE_OFFSET))();
		}

		static ::System::Void Create()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_MONOMANAGER_CREATE_OFFSET))();
		}

		::System::Void AddUpdateCall(::ParadoxNotion::Services::MonoManager_UpdateMode mode, ::System::Action* call)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::MonoManager_UpdateMode, ::System::Action*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_MONOMANAGER_ADDUPDATECALL_OFFSET))(this, mode, call);
		}

		::System::Void RemoveUpdateCall(::ParadoxNotion::Services::MonoManager_UpdateMode mode, ::System::Action* call)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::MonoManager_UpdateMode, ::System::Action*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_MONOMANAGER_REMOVEUPDATECALL_OFFSET))(this, mode, call);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_MONOMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_MONOMANAGER_ONAPPLICATIONQUIT_OFFSET))(this);
		}

		::System::Void OnApplicationPause(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_MONOMANAGER_ONAPPLICATIONPAUSE_OFFSET))(this, isPause);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_MONOMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_MONOMANAGER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_MONOMANAGER_FIXEDUPDATE_OFFSET))(this);
		}
	};
}

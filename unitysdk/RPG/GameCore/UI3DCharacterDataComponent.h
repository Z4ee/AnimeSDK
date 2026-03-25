#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace RPG::Client { class ManikinLookAtController; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::GameCore { class ManikinCharacterConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_BEGINDRAG_OFFSET UNITYSDK_OFFSET(0xAAEE6D0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAAEECF0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_ENDDRAG_OFFSET UNITYSDK_OFFSET(0xAAEE7F0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_FIREEFFECTBYPATH_OFFSET UNITYSDK_OFFSET(0xAAEE510)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GETALLRENDERERS_OFFSET UNITYSDK_OFFSET(0xAAEE470)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GETTEAMROTATIONBYINDEX_OFFSET UNITYSDK_OFFSET(0xAAEE9D0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GET_ANIMATORREF_OFFSET UNITYSDK_OFFSET(0xAAEEE60)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GET_ENABLEIDLETIMER_OFFSET UNITYSDK_OFFSET(0xAAEEEA0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GET_JSONCONFIGREF_OFFSET UNITYSDK_OFFSET(0xAAEEE80)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GET_LOOKATENABLEIDLETIMER_OFFSET UNITYSDK_OFFSET(0xAAEEEB0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xAAEE050)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAAEEDD0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_ONDETAILPROPERTYCHANGE_OFFSET UNITYSDK_OFFSET(0xAAEE330)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xAAEE0A0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xAAEE3E0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_REMOVEEFFECTBYPATH_OFFSET UNITYSDK_OFFSET(0xAAEE630)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SETENABLEIDLESHOWINDEX_OFFSET UNITYSDK_OFFSET(0xAAEEC40)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SETLOOKAT_1_OFFSET UNITYSDK_OFFSET(0xAAEE950)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SETLOOKAT_OFFSET UNITYSDK_OFFSET(0xAAEE880)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0xAAEEB00)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SET_ANIMATORREF_OFFSET UNITYSDK_OFFSET(0xAAEEE70)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SET_ENABLEIDLETIMER_OFFSET UNITYSDK_OFFSET(0xAAEED80)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SET_JSONCONFIGREF_OFFSET UNITYSDK_OFFSET(0xAAEEE90)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SET_LOOKATENABLEIDLETIMER_OFFSET UNITYSDK_OFFSET(0xAAEE2E0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xAAEEEC0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xAAEDFE0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAAEEF30)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xAAEEED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DCharacterDataComponent_TypeDefinitionIndex = 46369;

	class UI3DCharacterDataComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::Il2CppArray<::UnityEngine::Renderer*>* _CacheRenderers; // 0x18
		::RPG::GameCore::ManikinCharacterConfig* _JsonConfigRef_k__BackingField; // 0x20
		::RPG::Client::MonoEffectManager* _EffectManagerRef; // 0x28
		::RPG::Client::ManikinLookAtController* _lookAtController; // 0x30
		::UnityEngine::Animator* _AnimatorRef_k__BackingField; // 0x38
		::System::Action* EndOfUpdateCallback; // 0x40
		::System::Boolean _bEnableIdleTimer; // 0x48
		::System::Boolean _bLookAtEnableIdleTimer; // 0x49

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void InitComponent(::RPG::GameCore::ManikinCharacterConfig* jsonConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ManikinCharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_INITCOMPONENT_OFFSET))(this, jsonConfig);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Renderer*>* GetAllRenderers()
		{
			return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GETALLRENDERERS_OFFSET))(this);
		}

		::System::Void FireEffectByPath(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_FIREEFFECTBYPATH_OFFSET))(this, path);
		}

		::System::Void RemoveEffectByPath(::System::String* path, ::System::Boolean bIsNeedFadeout)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_REMOVEEFFECTBYPATH_OFFSET))(this, path, bIsNeedFadeout);
		}

		::System::Void BeginDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_BEGINDRAG_OFFSET))(this);
		}

		::System::Void EndDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_ENDDRAG_OFFSET))(this);
		}

		::System::Void SetLookAt(::UnityEngine::GameObject* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SETLOOKAT_OFFSET))(this, target);
		}

		::System::Void SetLookAt_1(::UnityEngine::Transform* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SETLOOKAT_1_OFFSET))(this, target);
		}

		::System::Nullable_1<::UnityEngine::Quaternion> GetTeamRotationByIndex(::System::UInt32 index)
		{
			return ((::System::Nullable_1<::UnityEngine::Quaternion>(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GETTEAMROTATIONBYINDEX_OFFSET))(this, index);
		}

		::System::Void SetVisible(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SETVISIBLE_OFFSET))(this, isShow);
		}

		::System::Void SetEnableIdleShowIndex(::System::Int32 index, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SETENABLEIDLESHOWINDEX_OFFSET))(this, index, enable);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_LATEUPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void OnDetailPropertyChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_ONDETAILPROPERTYCHANGE_OFFSET))(this);
		}

		::UnityEngine::Animator* get_AnimatorRef()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GET_ANIMATORREF_OFFSET))(this);
		}

		::System::Void set_AnimatorRef(::UnityEngine::Animator* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SET_ANIMATORREF_OFFSET))(this, value);
		}

		::RPG::GameCore::ManikinCharacterConfig* get_JsonConfigRef()
		{
			return ((::RPG::GameCore::ManikinCharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GET_JSONCONFIGREF_OFFSET))(this);
		}

		::System::Void set_JsonConfigRef(::RPG::GameCore::ManikinCharacterConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ManikinCharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SET_JSONCONFIGREF_OFFSET))(this, value);
		}

		::System::Boolean get_EnableIdleTimer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GET_ENABLEIDLETIMER_OFFSET))(this);
		}

		::System::Void set_EnableIdleTimer(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SET_ENABLEIDLETIMER_OFFSET))(this, value);
		}

		::System::Boolean get_LookAtEnableIdleTimer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GET_LOOKATENABLEIDLETIMER_OFFSET))(this);
		}

		::System::Void set_LookAtEnableIdleTimer(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SET_LOOKATENABLEIDLETIMER_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy__OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_LateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, P0);
		}
	};
}

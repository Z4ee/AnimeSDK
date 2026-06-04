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

#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_BEGINDRAG_OFFSET UNITYSDK_OFFSET(0xCFA1A50)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCFA2070)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_ENDDRAG_OFFSET UNITYSDK_OFFSET(0xCFA1B70)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_FIREEFFECTBYPATH_OFFSET UNITYSDK_OFFSET(0xCFA17D0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GETALLRENDERERS_OFFSET UNITYSDK_OFFSET(0xCFA1730)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GETTEAMROTATIONBYINDEX_OFFSET UNITYSDK_OFFSET(0xCFA1D50)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GET_ANIMATORREF_OFFSET UNITYSDK_OFFSET(0xCFA21E0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GET_ENABLEIDLETIMER_OFFSET UNITYSDK_OFFSET(0xCFA2220)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GET_JSONCONFIGREF_OFFSET UNITYSDK_OFFSET(0xCFA2200)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GET_LOOKATENABLEIDLETIMER_OFFSET UNITYSDK_OFFSET(0xCFA2230)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xCFA1310)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCFA2150)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_ONDETAILPROPERTYCHANGE_OFFSET UNITYSDK_OFFSET(0xCFA15F0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xCFA1360)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xCFA16A0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_REMOVEEFFECTBYPATH_OFFSET UNITYSDK_OFFSET(0xCFA19B0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SETENABLEIDLESHOWINDEX_OFFSET UNITYSDK_OFFSET(0xCFA1FC0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SETLOOKAT_1_OFFSET UNITYSDK_OFFSET(0xCFA1CD0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SETLOOKAT_OFFSET UNITYSDK_OFFSET(0xCFA1C00)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0xCFA1E80)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SET_ANIMATORREF_OFFSET UNITYSDK_OFFSET(0xCFA21F0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SET_ENABLEIDLETIMER_OFFSET UNITYSDK_OFFSET(0xCFA2100)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SET_JSONCONFIGREF_OFFSET UNITYSDK_OFFSET(0xCFA2210)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SET_LOOKATENABLEIDLETIMER_OFFSET UNITYSDK_OFFSET(0xCFA15A0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xCFA2240)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xCFA12B0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCFA22B0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xCFA2250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DCharacterDataComponent_TypeDefinitionIndex = 53754;

	class UI3DCharacterDataComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Action* EndOfUpdateCallback; // 0x18
		::Il2CppArray<::UnityEngine::Renderer*>* _CacheRenderers; // 0x20
		::UnityEngine::Animator* _AnimatorRef_k__BackingField; // 0x28
		::RPG::Client::ManikinLookAtController* _lookAtController; // 0x30
		::RPG::GameCore::ManikinCharacterConfig* _JsonConfigRef_k__BackingField; // 0x38
		::RPG::Client::MonoEffectManager* _EffectManagerRef; // 0x40
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

		::System::Void InitComponent(::RPG::GameCore::ManikinCharacterConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ManikinCharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_INITCOMPONENT_OFFSET))(this, a1);
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

		::System::Void FireEffectByPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_FIREEFFECTBYPATH_OFFSET))(this, a1);
		}

		::System::Void RemoveEffectByPath(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_REMOVEEFFECTBYPATH_OFFSET))(this, a1, a2);
		}

		::System::Void BeginDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_BEGINDRAG_OFFSET))(this);
		}

		::System::Void EndDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_ENDDRAG_OFFSET))(this);
		}

		::System::Void SetLookAt(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SETLOOKAT_OFFSET))(this, a1);
		}

		::System::Void SetLookAt_1(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SETLOOKAT_1_OFFSET))(this, a1);
		}

		::System::Nullable_1<::UnityEngine::Quaternion> GetTeamRotationByIndex(::System::UInt32 a1)
		{
			return ((::System::Nullable_1<::UnityEngine::Quaternion>(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GETTEAMROTATIONBYINDEX_OFFSET))(this, a1);
		}

		::System::Void SetVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SETVISIBLE_OFFSET))(this, a1);
		}

		::System::Void SetEnableIdleShowIndex(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SETENABLEIDLESHOWINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void OnDetailPropertyChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_ONDETAILPROPERTYCHANGE_OFFSET))(this);
		}

		::UnityEngine::Animator* get_AnimatorRef()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GET_ANIMATORREF_OFFSET))(this);
		}

		::System::Void set_AnimatorRef(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SET_ANIMATORREF_OFFSET))(this, a1);
		}

		::RPG::GameCore::ManikinCharacterConfig* get_JsonConfigRef()
		{
			return ((::RPG::GameCore::ManikinCharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GET_JSONCONFIGREF_OFFSET))(this);
		}

		::System::Void set_JsonConfigRef(::RPG::GameCore::ManikinCharacterConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ManikinCharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SET_JSONCONFIGREF_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableIdleTimer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GET_ENABLEIDLETIMER_OFFSET))(this);
		}

		::System::Void set_EnableIdleTimer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SET_ENABLEIDLETIMER_OFFSET))(this, a1);
		}

		::System::Boolean get_LookAtEnableIdleTimer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GET_LOOKATENABLEIDLETIMER_OFFSET))(this);
		}

		::System::Void set_LookAtEnableIdleTimer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SET_LOOKATENABLEIDLETIMER_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy__OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, a1);
		}
	};
}

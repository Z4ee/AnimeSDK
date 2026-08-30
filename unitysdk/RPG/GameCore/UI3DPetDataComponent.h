#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::Client { class MonoEffectManager; }
namespace RPG::GameCore { class ManikinPetConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Renderer; }

#define RPG_GAMECORE_UI3DPETDATACOMPONENT_BEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1A3673E0)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A367710)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_ENDDRAG_OFFSET UNITYSDK_OFFSET(0x1A3674C0)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_FIREEFFECTBYPATH_OFFSET UNITYSDK_OFFSET(0x1A367160)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_GETALLRENDERERS_OFFSET UNITYSDK_OFFSET(0x1A3670C0)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_GET_ANIMATORREF_OFFSET UNITYSDK_OFFSET(0x1A367870)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_GET_ENABLEIDLETIMER_OFFSET UNITYSDK_OFFSET(0x1A3678B0)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_GET_JSONCONFIGREF_OFFSET UNITYSDK_OFFSET(0x1A367890)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A366EC0)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A3677F0)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_ONDETAILPROPERTYCHANGE_OFFSET UNITYSDK_OFFSET(0x1A366FD0)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x1A366F10)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x1A367070)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_REMOVEEFFECTBYPATH_OFFSET UNITYSDK_OFFSET(0x1A367340)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_SETENABLEIDLESHOWINDEX_OFFSET UNITYSDK_OFFSET(0x1A367660)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A367520)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_SET_ANIMATORREF_OFFSET UNITYSDK_OFFSET(0x1A367880)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_SET_ENABLEIDLETIMER_OFFSET UNITYSDK_OFFSET(0x1A3677A0)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_SET_JSONCONFIGREF_OFFSET UNITYSDK_OFFSET(0x1A3678A0)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3678C0)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x1A366E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DPetDataComponent_TypeDefinitionIndex = 57705;

	class UI3DPetDataComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Action* EndOfUpdateCallback; // 0x18
		::RPG::Client::MonoEffectManager* _EffectManagerRef; // 0x20
		::Il2CppArray<::UnityEngine::Renderer*>* _CacheRenderers; // 0x28
		::RPG::GameCore::ManikinPetConfig* _JsonConfigRef_k__BackingField; // 0x30
		::UnityEngine::Animator* _AnimatorRef_k__BackingField; // 0x38
		::System::Boolean _bEnableIdleTimer; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void InitComponent(::RPG::GameCore::ManikinPetConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ManikinPetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_INITCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Renderer*>* GetAllRenderers()
		{
			return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_GETALLRENDERERS_OFFSET))(this);
		}

		::System::Void FireEffectByPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_FIREEFFECTBYPATH_OFFSET))(this, a1);
		}

		::System::Void RemoveEffectByPath(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_REMOVEEFFECTBYPATH_OFFSET))(this, a1, a2);
		}

		::System::Void BeginDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_BEGINDRAG_OFFSET))(this);
		}

		::System::Void EndDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_ENDDRAG_OFFSET))(this);
		}

		::System::Void SetVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_SETVISIBLE_OFFSET))(this, a1);
		}

		::System::Void SetEnableIdleShowIndex(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_SETENABLEIDLESHOWINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void OnDetailPropertyChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_ONDETAILPROPERTYCHANGE_OFFSET))(this);
		}

		::UnityEngine::Animator* get_AnimatorRef()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_GET_ANIMATORREF_OFFSET))(this);
		}

		::System::Void set_AnimatorRef(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_SET_ANIMATORREF_OFFSET))(this, a1);
		}

		::RPG::GameCore::ManikinPetConfig* get_JsonConfigRef()
		{
			return ((::RPG::GameCore::ManikinPetConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_GET_JSONCONFIGREF_OFFSET))(this);
		}

		::System::Void set_JsonConfigRef(::RPG::GameCore::ManikinPetConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ManikinPetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_SET_JSONCONFIGREF_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableIdleTimer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_GET_ENABLEIDLETIMER_OFFSET))(this);
		}

		::System::Void set_EnableIdleTimer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_SET_ENABLEIDLETIMER_OFFSET))(this, a1);
		}
	};
}

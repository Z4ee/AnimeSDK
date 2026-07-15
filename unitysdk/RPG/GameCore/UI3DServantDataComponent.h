#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::Client { class MonoEffectManager; }
namespace RPG::GameCore { class ManikinServantConfig; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Renderer; }

#define RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14C80010)
#define RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_FIREEFFECTBYPATH_OFFSET UNITYSDK_OFFSET(0x14C7FD50)
#define RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_GETALLRENDERERS_OFFSET UNITYSDK_OFFSET(0x14C7FCB0)
#define RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_GET_ANIMATORREF_OFFSET UNITYSDK_OFFSET(0x14C80060)
#define RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_GET_JSONCONFIGREF_OFFSET UNITYSDK_OFFSET(0x14C80080)
#define RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x14C7FB60)
#define RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x14C7FBB0)
#define RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x14C7FC60)
#define RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_REMOVEEFFECTBYPATH_OFFSET UNITYSDK_OFFSET(0x14C7FE30)
#define RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0x14C7FED0)
#define RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_SET_ANIMATORREF_OFFSET UNITYSDK_OFFSET(0x14C80070)
#define RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_SET_JSONCONFIGREF_OFFSET UNITYSDK_OFFSET(0x14C80090)
#define RPG_GAMECORE_UI3DSERVANTDATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x14C800A0)
#define RPG_GAMECORE_UI3DSERVANTDATACOMPONENT__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x14C7FB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DServantDataComponent_TypeDefinitionIndex = 54982;

	class UI3DServantDataComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::MonoEffectManager* _EffectManagerRef; // 0x18
		::UnityEngine::Animator* _AnimatorRef_k__BackingField; // 0x20
		::RPG::GameCore::ManikinServantConfig* _JsonConfigRef_k__BackingField; // 0x28
		::Il2CppArray<::UnityEngine::Renderer*>* _CacheRenderers; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DSERVANTDATACOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DSERVANTDATACOMPONENT__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void InitComponent(::RPG::GameCore::ManikinServantConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ManikinServantConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_INITCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Renderer*>* GetAllRenderers()
		{
			return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_GETALLRENDERERS_OFFSET))(this);
		}

		::System::Void FireEffectByPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_FIREEFFECTBYPATH_OFFSET))(this, a1);
		}

		::System::Void RemoveEffectByPath(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_REMOVEEFFECTBYPATH_OFFSET))(this, a1, a2);
		}

		::System::Void SetVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_SETVISIBLE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::Animator* get_AnimatorRef()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_GET_ANIMATORREF_OFFSET))(this);
		}

		::System::Void set_AnimatorRef(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_SET_ANIMATORREF_OFFSET))(this, a1);
		}

		::RPG::GameCore::ManikinServantConfig* get_JsonConfigRef()
		{
			return ((::RPG::GameCore::ManikinServantConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_GET_JSONCONFIGREF_OFFSET))(this);
		}

		::System::Void set_JsonConfigRef(::RPG::GameCore::ManikinServantConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ManikinServantConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_SET_JSONCONFIGREF_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::Client { class MonoEffectManager; }
namespace RPG::GameCore { class ManikinServantConfig; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Renderer; }

#define RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB862370)
#define RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_FIREEFFECTBYPATH_OFFSET UNITYSDK_OFFSET(0xB8620B0)
#define RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_GETALLRENDERERS_OFFSET UNITYSDK_OFFSET(0xB862010)
#define RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_GET_ANIMATORREF_OFFSET UNITYSDK_OFFSET(0xB8623C0)
#define RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_GET_JSONCONFIGREF_OFFSET UNITYSDK_OFFSET(0xB8623E0)
#define RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xB861EC0)
#define RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xB861F10)
#define RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xB861FC0)
#define RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_REMOVEEFFECTBYPATH_OFFSET UNITYSDK_OFFSET(0xB862190)
#define RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0xB862230)
#define RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_SET_ANIMATORREF_OFFSET UNITYSDK_OFFSET(0xB8623D0)
#define RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_SET_JSONCONFIGREF_OFFSET UNITYSDK_OFFSET(0xB8623F0)
#define RPG_GAMECORE_UI3DSERVANTDATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xB862400)
#define RPG_GAMECORE_UI3DSERVANTDATACOMPONENT__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xB861E50)
#define RPG_GAMECORE_UI3DSERVANTDATACOMPONENT___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xB862410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DServantDataComponent_TypeDefinitionIndex = 53053;

	class UI3DServantDataComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::ManikinServantConfig* _JsonConfigRef_k__BackingField; // 0x18
		::UnityEngine::Animator* _AnimatorRef_k__BackingField; // 0x20
		::Il2CppArray<::UnityEngine::Renderer*>* _CacheRenderers; // 0x28
		::RPG::Client::MonoEffectManager* _EffectManagerRef; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DSERVANTDATACOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DSERVANTDATACOMPONENT__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void InitComponent(::RPG::GameCore::ManikinServantConfig* jsonConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ManikinServantConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_INITCOMPONENT_OFFSET))(this, jsonConfig);
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

		::System::Void FireEffectByPath(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_FIREEFFECTBYPATH_OFFSET))(this, path);
		}

		::System::Void RemoveEffectByPath(::System::String* path, ::System::Boolean bIsNeedFadeout)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_REMOVEEFFECTBYPATH_OFFSET))(this, path, bIsNeedFadeout);
		}

		::System::Void SetVisible(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_SETVISIBLE_OFFSET))(this, isShow);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::Animator* get_AnimatorRef()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_GET_ANIMATORREF_OFFSET))(this);
		}

		::System::Void set_AnimatorRef(::UnityEngine::Animator* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_SET_ANIMATORREF_OFFSET))(this, value);
		}

		::RPG::GameCore::ManikinServantConfig* get_JsonConfigRef()
		{
			return ((::RPG::GameCore::ManikinServantConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_GET_JSONCONFIGREF_OFFSET))(this);
		}

		::System::Void set_JsonConfigRef(::RPG::GameCore::ManikinServantConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ManikinServantConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DSERVANTDATACOMPONENT_SET_JSONCONFIGREF_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy__OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DSERVANTDATACOMPONENT___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
		}
	};
}

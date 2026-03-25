#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::Client { class MonoEffectManager; }
namespace RPG::GameCore { class ManikinMonsterConfig; }
namespace System { class String; }
namespace UnityEngine { class Renderer; }

#define RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAAF6740)
#define RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_ENABLEABILITY_OFFSET UNITYSDK_OFFSET(0xAAF65E0)
#define RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_ENABLEALLABLITY_OFFSET UNITYSDK_OFFSET(0xAAF6660)
#define RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_FIREEFFECTBYPATH_OFFSET UNITYSDK_OFFSET(0xAAF6460)
#define RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_GETALLRENDERERS_OFFSET UNITYSDK_OFFSET(0xAAF6250)
#define RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_GET_JSONCONFIGREF_OFFSET UNITYSDK_OFFSET(0xAAF6780)
#define RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xAAF60E0)
#define RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_REMOVEEFFECTBYPATH_OFFSET UNITYSDK_OFFSET(0xAAF6540)
#define RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_SETOUTLINEWIDTH_OFFSET UNITYSDK_OFFSET(0xAAF62E0)
#define RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_SET_JSONCONFIGREF_OFFSET UNITYSDK_OFFSET(0xAAF6790)
#define RPG_GAMECORE_UI3DMONSTERDATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xAAF67A0)
#define RPG_GAMECORE_UI3DMONSTERDATACOMPONENT__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xAAF6070)
#define RPG_GAMECORE_UI3DMONSTERDATACOMPONENT__TRYENABLEABILITY_OFFSET UNITYSDK_OFFSET(0xAAF6130)
#define RPG_GAMECORE_UI3DMONSTERDATACOMPONENT___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xAAF67B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DMonsterDataComponent_TypeDefinitionIndex = 46376;

	class UI3DMonsterDataComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::ManikinMonsterConfig* _JsonConfigRef_k__BackingField; // 0x18
		::RPG::Client::MonoEffectManager* _EffectManagerRef; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMONSTERDATACOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMONSTERDATACOMPONENT__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void InitComponent(::RPG::GameCore::ManikinMonsterConfig* jsonConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ManikinMonsterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_INITCOMPONENT_OFFSET))(this, jsonConfig);
		}

		::Il2CppArray<::UnityEngine::Renderer*>* GetAllRenderers()
		{
			return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_GETALLRENDERERS_OFFSET))(this);
		}

		::System::Void SetOutlineWidth(::System::Single width)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_SETOUTLINEWIDTH_OFFSET))(this, width);
		}

		::System::Void FireEffectByPath(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_FIREEFFECTBYPATH_OFFSET))(this, path);
		}

		::System::Void RemoveEffectByPath(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_REMOVEEFFECTBYPATH_OFFSET))(this, path);
		}

		::System::Void EnableAbility(::System::String* abilityName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_ENABLEABILITY_OFFSET))(this, abilityName);
		}

		::System::Void EnableAllAblity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_ENABLEALLABLITY_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void _TryEnableAbility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMONSTERDATACOMPONENT__TRYENABLEABILITY_OFFSET))(this);
		}

		::RPG::GameCore::ManikinMonsterConfig* get_JsonConfigRef()
		{
			return ((::RPG::GameCore::ManikinMonsterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_GET_JSONCONFIGREF_OFFSET))(this);
		}

		::System::Void set_JsonConfigRef(::RPG::GameCore::ManikinMonsterConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ManikinMonsterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_SET_JSONCONFIGREF_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy__OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMONSTERDATACOMPONENT___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
		}
	};
}

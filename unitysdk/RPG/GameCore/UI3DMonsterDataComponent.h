#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::Client { class MonoEffectManager; }
namespace RPG::GameCore { class ManikinMonsterConfig; }
namespace System { class String; }
namespace UnityEngine { class Renderer; }

#define RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A366DE0)
#define RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_ENABLEABILITY_OFFSET UNITYSDK_OFFSET(0x1A366C90)
#define RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_ENABLEALLABLITY_OFFSET UNITYSDK_OFFSET(0x1A366D10)
#define RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_FIREEFFECTBYPATH_OFFSET UNITYSDK_OFFSET(0x1A366B10)
#define RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_GETALLRENDERERS_OFFSET UNITYSDK_OFFSET(0x1A366910)
#define RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_GET_JSONCONFIGREF_OFFSET UNITYSDK_OFFSET(0x1A366E20)
#define RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A3667C0)
#define RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_REMOVEEFFECTBYPATH_OFFSET UNITYSDK_OFFSET(0x1A366BF0)
#define RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_SETOUTLINEWIDTH_OFFSET UNITYSDK_OFFSET(0x1A3669A0)
#define RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_SET_JSONCONFIGREF_OFFSET UNITYSDK_OFFSET(0x1A366E30)
#define RPG_GAMECORE_UI3DMONSTERDATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A366E40)
#define RPG_GAMECORE_UI3DMONSTERDATACOMPONENT__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x1A366750)
#define RPG_GAMECORE_UI3DMONSTERDATACOMPONENT__TRYENABLEABILITY_OFFSET UNITYSDK_OFFSET(0x1A366810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DMonsterDataComponent_TypeDefinitionIndex = 57704;

	class UI3DMonsterDataComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::MonoEffectManager* _EffectManagerRef; // 0x18
		::RPG::GameCore::ManikinMonsterConfig* _JsonConfigRef_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMONSTERDATACOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMONSTERDATACOMPONENT__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void InitComponent(::RPG::GameCore::ManikinMonsterConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ManikinMonsterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_INITCOMPONENT_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Renderer*>* GetAllRenderers()
		{
			return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_GETALLRENDERERS_OFFSET))(this);
		}

		::System::Void SetOutlineWidth(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_SETOUTLINEWIDTH_OFFSET))(this, a1);
		}

		::System::Void FireEffectByPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_FIREEFFECTBYPATH_OFFSET))(this, a1);
		}

		::System::Void RemoveEffectByPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_REMOVEEFFECTBYPATH_OFFSET))(this, a1);
		}

		::System::Void EnableAbility(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_ENABLEABILITY_OFFSET))(this, a1);
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

		::System::Void set_JsonConfigRef(::RPG::GameCore::ManikinMonsterConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ManikinMonsterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMONSTERDATACOMPONENT_SET_JSONCONFIGREF_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/EffectConfig.h"
#include "unitysdk/RPG/Client/ParkourGame/ItemType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_55373297DA27393D;
namespace RPG::Client::ParkourGame { class MonoParkourCharacter; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURITEM_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xC334FC0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURITEM_ONCHARACTERTRIGGER_OFFSET UNITYSDK_OFFSET(0xC334E10)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURITEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC334DC0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURITEM_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC334CB0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURITEM_ONTRIGGERED_OFFSET UNITYSDK_OFFSET(0xC334F60)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURITEM_SETRENDERERVISIBLE_OFFSET UNITYSDK_OFFSET(0xC334E90)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURITEM_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xC334FD0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC334FE0)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourItem_TypeDefinitionIndex = 69221;

	class MonoParkourItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* Animator; // 0x18
		::System::String* RecoverAnimState; // 0x20
		::UnityEngine::Collider* Trigger; // 0x28
		::System::Single RecoverTime; // 0x30
		::RPG::Client::ParkourGame::EffectConfig TriggerEffectForCharacter; // 0x38
		::RPG::Client::ParkourGame::EffectConfig TriggerEffectForSelf; // 0x60
		::Class_2_55373297DA27393D* _Item_k__BackingField; // 0x88
		::UnityEngine::Transform* Field_5_7; // 0x90
		::UnityEngine::Canvas* Field_5_8; // 0x98
		::Il2CppArray<::UnityEngine::Renderer*>* Field_5_9; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURITEM__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURITEM_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURITEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnCharacterTrigger(::RPG::Client::ParkourGame::MonoParkourCharacter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourCharacter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURITEM_ONCHARACTERTRIGGER_OFFSET))(this, a1);
		}

		::System::Void SetRendererVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURITEM_SETRENDERERVISIBLE_OFFSET))(this, a1);
		}

		::System::Void OnTriggered(::RPG::Client::ParkourGame::MonoParkourCharacter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourCharacter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURITEM_ONTRIGGERED_OFFSET))(this, a1);
		}

		::Class_2_55373297DA27393D* get_Item()
		{
			return ((::Class_2_55373297DA27393D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURITEM_GET_ITEM_OFFSET))(this);
		}

		::System::Void set_Item(::Class_2_55373297DA27393D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_55373297DA27393D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURITEM_SET_ITEM_OFFSET))(this, a1);
		}
	};
}

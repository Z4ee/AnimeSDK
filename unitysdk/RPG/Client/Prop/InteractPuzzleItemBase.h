#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class PuzzleBoardBase; }

#define RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC5738A0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_INIT_OFFSET UNITYSDK_OFFSET(0xC570010)
#define RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_ONDRAGBEGIN_OFFSET UNITYSDK_OFFSET(0xC573A30)
#define RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_ONDRAGEND_OFFSET UNITYSDK_OFFSET(0xC573AA0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_ONDRAG_OFFSET UNITYSDK_OFFSET(0xC573970)
#define RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_ONHOVEREXIT_OFFSET UNITYSDK_OFFSET(0xC570830)
#define RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_ONHOVER_OFFSET UNITYSDK_OFFSET(0xC570750)
#define RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_ONSELECTUP_OFFSET UNITYSDK_OFFSET(0xC5738F0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_ONSELECT_OFFSET UNITYSDK_OFFSET(0xC5706C0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xC5647D0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int InteractPuzzleItemBase_TypeDefinitionIndex = 73134;

	class InteractPuzzleItemBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Prop::PuzzleBoardBase* Board; // 0x18
		::System::Int32 x; // 0x20
		::System::Int32 y; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::Prop::PuzzleBoardBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PuzzleBoardBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_INIT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_ONSELECT_OFFSET))(this);
		}

		::System::Void OnSelectUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_ONSELECTUP_OFFSET))(this);
		}

		::System::Void OnHover(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_ONHOVER_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_ONDRAG_OFFSET))(this, a1, a2);
		}

		::System::Void OnDragBegin(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_ONDRAGBEGIN_OFFSET))(this, a1, a2);
		}

		::System::Void OnDragEnd(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_ONDRAGEND_OFFSET))(this, a1, a2);
		}

		::System::Void OnHoverExit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_ONHOVEREXIT_OFFSET))(this, a1);
		}
	};
}

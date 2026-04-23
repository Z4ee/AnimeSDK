#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PAGELISTDOTITEM_SETSELECTED_OFFSET UNITYSDK_OFFSET(0xAC1BC30)
#define RPG_CLIENT_PAGELISTDOTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xAC1BDF0)

namespace RPG::Client
{
	inline static constexpr unsigned int PageListDotItem_TypeDefinitionIndex = 66912;

	class PageListDotItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* Dark; // 0x18
		::UnityEngine::GameObject* Light; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAGELISTDOTITEM__CTOR_OFFSET))(this);
		}

		::System::Void SetSelected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAGELISTDOTITEM_SETSELECTED_OFFSET))(this, a1);
		}
	};
}

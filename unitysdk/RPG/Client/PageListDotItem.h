#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PAGELISTDOTITEM_SETSELECTED_OFFSET UNITYSDK_OFFSET(0xDA1F440)
#define RPG_CLIENT_PAGELISTDOTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xDA1F600)

namespace RPG::Client
{
	inline static constexpr unsigned int PageListDotItem_TypeDefinitionIndex = 72547;

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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_ITEMICONUI__CTOR_OFFSET UNITYSDK_OFFSET(0x14292970)

namespace MoleMole
{
	inline static constexpr unsigned int ItemIconUI_TypeDefinitionIndex = 46260;

	class ItemIconUI : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* root; // 0x10
		::UnityEngine::UI::Image* icon; // 0x18
		::UnityEngine::UI::Image* checkedIcon; // 0x20
		::UnityEngine::UI::Text* num; // 0x28
		::UnityEngine::UI::Image* check; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ITEMICONUI__CTOR_OFFSET))(this);
		}
	};
}

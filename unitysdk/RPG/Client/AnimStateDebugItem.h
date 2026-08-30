#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_ANIMSTATEDEBUGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19C8D170)

namespace RPG::Client
{
	inline static constexpr unsigned int AnimStateDebugItem_TypeDefinitionIndex = 72656;

	class AnimStateDebugItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Color TextColor; // 0x18
		::UnityEngine::UI::Text* Title; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::UI::Text*>* Layers; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMSTATEDEBUGITEM__CTOR_OFFSET))(this);
		}
	};
}

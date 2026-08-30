#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_UI_UISTATECTRL_SWITCHCOLORDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B120FA0)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int SwitchColorData_TypeDefinitionIndex = 73957;

	class SwitchColorData : public ::System::Object
	{
	public:
		::UnityEngine::Color Color; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* Targets; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHCOLORDATA__CTOR_OFFSET))(this);
		}
	};
}

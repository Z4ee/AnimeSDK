#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class MonoUIColorSwitcher_ColorItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_COLORDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB6EEF30)

namespace RPG::Client
{
	inline static constexpr unsigned int ColorData_TypeDefinitionIndex = 64479;

	class ColorData : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MonoUIColorSwitcher_ColorItem*>* ColorItems; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLORDATA__CTOR_OFFSET))(this);
		}
	};
}

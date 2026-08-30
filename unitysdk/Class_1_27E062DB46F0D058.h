#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/UINavigation/UINavigationDirection.h"
#include "unitysdk/System/Object.h"

namespace RPG::UINavigation { class UINavigation; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::UI { class Selectable; }

#define CLASS_1_27E062DB46F0D058_METHOD_1_8906865985E88687_1_OFFSET UNITYSDK_OFFSET(0x179CDA50)
#define CLASS_1_27E062DB46F0D058_METHOD_1_8906865985E88687_OFFSET UNITYSDK_OFFSET(0x179CD9D0)
#define CLASS_1_27E062DB46F0D058__CTOR_OFFSET UNITYSDK_OFFSET(0x179CDAD0)

inline static constexpr unsigned int Class_1_27E062DB46F0D058_TypeDefinitionIndex = 52038;

class Class_1_27E062DB46F0D058 : public ::System::Object
{
public:
	::UnityEngine::EventSystems::BaseEventData* GFJEHNAGJNM; // 0x10
	::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigation*>* HCMNDMHLIAA; // 0x18
	::UnityEngine::UI::Selectable* PGHLJLIHPPP; // 0x20
	::RPG::UINavigation::UINavigationDirection LJDHGFECMHJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27E062DB46F0D058__CTOR_OFFSET))(this);
	}

	::RPG::UINavigation::UINavigation* Method_1_8906865985E88687()
	{
		return ((::RPG::UINavigation::UINavigation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27E062DB46F0D058_METHOD_1_8906865985E88687_OFFSET))(this);
	}

	::RPG::UINavigation::UINavigation* Method_1_8906865985E88687_1()
	{
		return ((::RPG::UINavigation::UINavigation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27E062DB46F0D058_METHOD_1_8906865985E88687_1_OFFSET))(this);
	}
};

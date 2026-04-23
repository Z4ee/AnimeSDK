#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/UINavigation/UINavigationDirection.h"
#include "unitysdk/System/Object.h"

namespace RPG::UINavigation { class UINavigation; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::UI { class Selectable; }

#define CLASS_1_A8F358278D5B9235_METHOD_1_D2F61E99BB22E82D_1_OFFSET UNITYSDK_OFFSET(0xB4BE300)
#define CLASS_1_A8F358278D5B9235_METHOD_1_D2F61E99BB22E82D_OFFSET UNITYSDK_OFFSET(0xB4BE2A0)
#define CLASS_1_A8F358278D5B9235__CTOR_OFFSET UNITYSDK_OFFSET(0xB4BE370)

inline static constexpr unsigned int Class_1_A8F358278D5B9235_TypeDefinitionIndex = 47806;

class Class_1_A8F358278D5B9235 : public ::System::Object
{
public:
	::UnityEngine::EventSystems::BaseEventData* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigation*>* Field_1_3; // 0x18
	::UnityEngine::UI::Selectable* Field_1_2; // 0x20
	::RPG::UINavigation::UINavigationDirection Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8F358278D5B9235__CTOR_OFFSET))(this);
	}

	::RPG::UINavigation::UINavigation* Method_1_D2F61E99BB22E82D()
	{
		return ((::RPG::UINavigation::UINavigation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8F358278D5B9235_METHOD_1_D2F61E99BB22E82D_OFFSET))(this);
	}

	::RPG::UINavigation::UINavigation* Method_1_D2F61E99BB22E82D_1()
	{
		return ((::RPG::UINavigation::UINavigation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8F358278D5B9235_METHOD_1_D2F61E99BB22E82D_1_OFFSET))(this);
	}
};

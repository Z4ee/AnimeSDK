#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoInLevelBase.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define MONODROPITEMQUICKSELL_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x12CA74E0)
#define MONODROPITEMQUICKSELL_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x12CA7530)
#define MONODROPITEMQUICKSELL__CTOR_OFFSET UNITYSDK_OFFSET(0x12CA7580)

inline static constexpr unsigned int MonoDropItemQuickSell_TypeDefinitionIndex = 74599;

class MonoDropItemQuickSell : public ::MoleMole::MonoInLevelBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONODROPITEMQUICKSELL__CTOR_OFFSET))(this);
	}

	::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MONODROPITEMQUICKSELL_ONPOINTERDOWN_OFFSET))(this, eventData);
	}

	::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MONODROPITEMQUICKSELL_ONPOINTERUP_OFFSET))(this, eventData);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoInLevelBase.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define MONODROPITEMQUICKSELL_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x12E872D0)
#define MONODROPITEMQUICKSELL_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x12E87320)
#define MONODROPITEMQUICKSELL__CTOR_OFFSET UNITYSDK_OFFSET(0x12E87370)

inline static constexpr unsigned int MonoDropItemQuickSell_TypeDefinitionIndex = 80216;

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

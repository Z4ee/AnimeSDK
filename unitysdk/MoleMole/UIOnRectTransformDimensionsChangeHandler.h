#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIONRECTTRANSFORMDIMENSIONSCHANGEHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14D94A80)
#define MOLEMOLE_UIONRECTTRANSFORMDIMENSIONSCHANGEHANDLER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x14D94A00)
#define MOLEMOLE_UIONRECTTRANSFORMDIMENSIONSCHANGEHANDLER_REGISTERONRECTTRANSFORMDIMENSIONSCHANGECALLBACK_OFFSET UNITYSDK_OFFSET(0x14D949B0)
#define MOLEMOLE_UIONRECTTRANSFORMDIMENSIONSCHANGEHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14D94AD0)
#define MOLEMOLE_UIONRECTTRANSFORMDIMENSIONSCHANGEHANDLER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14D94B20)
#define MOLEMOLE_UIONRECTTRANSFORMDIMENSIONSCHANGEHANDLER___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x14D94BB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOnRectTransformDimensionsChangeHandler_TypeDefinitionIndex = 55993;

	class UIOnRectTransformDimensionsChangeHandler : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::System::Action_1<::MoleMole::UIOnRectTransformDimensionsChangeHandler*>* Field_6_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONRECTTRANSFORMDIMENSIONSCHANGEHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterOnRectTransformDimensionsChangeCallback(::System::Action_1<::MoleMole::UIOnRectTransformDimensionsChangeHandler*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIOnRectTransformDimensionsChangeHandler*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONRECTTRANSFORMDIMENSIONSCHANGEHANDLER_REGISTERONRECTTRANSFORMDIMENSIONSCHANGECALLBACK_OFFSET))(this, a1);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONRECTTRANSFORMDIMENSIONSCHANGEHANDLER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONRECTTRANSFORMDIMENSIONSCHANGEHANDLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONRECTTRANSFORMDIMENSIONSCHANGEHANDLER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONRECTTRANSFORMDIMENSIONSCHANGEHANDLER___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}
	};
}

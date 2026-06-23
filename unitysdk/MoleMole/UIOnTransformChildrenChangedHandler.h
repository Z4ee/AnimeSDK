#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIONTRANSFORMCHILDRENCHANGEDHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15DC0110)
#define MOLEMOLE_UIONTRANSFORMCHILDRENCHANGEDHANDLER_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x15DC0090)
#define MOLEMOLE_UIONTRANSFORMCHILDRENCHANGEDHANDLER_REGISTERONTRANSFORMCHILDRENCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15DC0040)
#define MOLEMOLE_UIONTRANSFORMCHILDRENCHANGEDHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC0160)
#define MOLEMOLE_UIONTRANSFORMCHILDRENCHANGEDHANDLER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15DC01B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOnTransformChildrenChangedHandler_TypeDefinitionIndex = 64779;

	class UIOnTransformChildrenChangedHandler : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::System::Action_1<::MoleMole::UIOnTransformChildrenChangedHandler*>* Field_6_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONTRANSFORMCHILDRENCHANGEDHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterOnTransformChildrenChangedCallback(::System::Action_1<::MoleMole::UIOnTransformChildrenChangedHandler*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIOnTransformChildrenChangedHandler*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONTRANSFORMCHILDRENCHANGEDHANDLER_REGISTERONTRANSFORMCHILDRENCHANGEDCALLBACK_OFFSET))(this, a1);
		}

		::System::Void OnTransformChildrenChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONTRANSFORMCHILDRENCHANGEDHANDLER_ONTRANSFORMCHILDRENCHANGED_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONTRANSFORMCHILDRENCHANGEDHANDLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONTRANSFORMCHILDRENCHANGEDHANDLER___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}

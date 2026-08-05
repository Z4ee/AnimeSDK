#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_38DE07FB580FE5E9;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UIDISPLAYCASEITEMCONTROLCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1937A150)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCaseItemControlContext_TypeDefinitionIndex = 90682;

	class UIDisplayCaseItemControlContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_2<::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3>* OnDrag; // 0x28
		::System::Action* OnCloseBtn; // 0x30
		::System::Action* OnBagged; // 0x38
		::Class_1_38DE07FB580FE5E9* ItemViewModel; // 0x40
		::System::Action_2<::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3>* OnBeginDrag; // 0x48
		::System::Action* OnSubmitBtn; // 0x50
		::System::Action* RefreshError; // 0x58
		::System::Action_2<::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3>* OnEndDrag; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEITEMCONTROLCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

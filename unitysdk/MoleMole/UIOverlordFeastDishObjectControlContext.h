#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_1114;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UIOVERLORDFEASTDISHOBJECTCONTROLCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17E11A00)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastDishObjectControlContext_TypeDefinitionIndex = 62863;

	class UIOverlordFeastDishObjectControlContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_2<::System::Int32, ::UnityEngine::EventSystems::PointerEventData*>* OnBeginDrag; // 0x28
		::Class_2_208CC9941471731A_1114* DishConfig; // 0x30
		::System::Action_2<::System::Int32, ::UnityEngine::EventSystems::PointerEventData*>* OnDrag; // 0x38
		::System::Action_1<::System::Int32>* OnRemove; // 0x40
		::System::Action_2<::System::Int32, ::UnityEngine::EventSystems::PointerEventData*>* OnEndDrag; // 0x48
		::System::Action_1<::System::Int32>* OnClickObject; // 0x50
		::System::Int32 index; // 0x58
		::System::Boolean isPreorder; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHOBJECTCONTROLCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

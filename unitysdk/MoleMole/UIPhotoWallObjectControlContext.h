#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_EC682544DE1271C8;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UIPHOTOWALLOBJECTCONTROLCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1559C210)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoWallObjectControlContext_TypeDefinitionIndex = 65225;

	class UIPhotoWallObjectControlContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnClickBag; // 0x28
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* OnBeginDrag; // 0x30
		::Class_1_EC682544DE1271C8* ControlData; // 0x38
		::System::Func_1<::System::Boolean>* OnClickConfirm; // 0x40
		::System::Action* OnRotateEnd; // 0x48
		::System::Action* OnClickCancel; // 0x50
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* OnDrag; // 0x58
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* OnEndDrag; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLOBJECTCONTROLCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace System { class Action; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER__HIDESELF_D__143_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x184597A0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER__HIDESELF_D__143_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18459BC0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER__HIDESELF_D__143_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18459C20)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER__HIDESELF_D__143_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18459BD0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER__HIDESELF_D__143_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18459790)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER__HIDESELF_D__143__CTOR_OFFSET UNITYSDK_OFFSET(0x18459780)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController__HideSelf_d__143_TypeDefinitionIndex = 86500;

	class UIGeneralNewsBubbleRowWidgetController__HideSelf_d__143 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* __4__this; // 0x10
		::UnityEngine::Animation* _anim_5__2; // 0x18
		::UnityEngine::RectTransform* rect; // 0x20
		::System::Action* hideDone; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::Single __2__current; // 0x34

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER__HIDESELF_D__143__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER__HIDESELF_D__143_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER__HIDESELF_D__143_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER__HIDESELF_D__143_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER__HIDESELF_D__143_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER__HIDESELF_D__143_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}

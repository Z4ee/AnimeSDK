#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_5E0F47F5C3BFCC4E;
namespace System { class Action; }

#define MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_CANCELTWEEN_OFFSET UNITYSDK_OFFSET(0x151B5530)
#define MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_GET_NEEDPLAYINSERT_OFFSET UNITYSDK_OFFSET(0x151B51A0)
#define MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_GET_NEEDPLAYREMOVE_OFFSET UNITYSDK_OFFSET(0x151B5200)
#define MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_ONSETROOTCONTROLLER_OFFSET UNITYSDK_OFFSET(0x151B5260)
#define MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x151B5600)
#define MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_PLAYINSERT_OFFSET UNITYSDK_OFFSET(0x151B5470)
#define MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_PLAYREMOVE_OFFSET UNITYSDK_OFFSET(0x151B54D0)
#define MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_SETTWEENDURATION_OFFSET UNITYSDK_OFFSET(0x151B5590)
#define MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x151B5670)
#define MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER___BASE_ONSETROOTCONTROLLER_OFFSET UNITYSDK_OFFSET(0x151B5760)
#define MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x151B56D0)

namespace MoleMole
{
	inline static constexpr unsigned int UITweenSlotWidgetController_TypeDefinitionIndex = 44452;

	class UITweenSlotWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_1_5E0F47F5C3BFCC4E* _tweenSlotContainer; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedPlayInsert()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_GET_NEEDPLAYINSERT_OFFSET))(this);
		}

		::System::Boolean get_NeedPlayRemove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_GET_NEEDPLAYREMOVE_OFFSET))(this);
		}

		::System::Void OnSetRootController()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_ONSETROOTCONTROLLER_OFFSET))(this);
		}

		::System::Void PlayInsert(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_PLAYINSERT_OFFSET))(this, action);
		}

		::System::Void PlayRemove(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_PLAYREMOVE_OFFSET))(this, action);
		}

		::System::Void CancelTween()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_CANCELTWEEN_OFFSET))(this);
		}

		::System::Void SetTweenDuration(::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_SETTWEENDURATION_OFFSET))(this, duration);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnSetRootController()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER___BASE_ONSETROOTCONTROLLER_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIInLevelNPCNameWidgetController__IconAnimationTag.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x177C11F0)
#define MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM_GET_PLAYDURATION_OFFSET UNITYSDK_OFFSET(0x177C11D0)
#define MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM_ONFINISH_OFFSET UNITYSDK_OFFSET(0x177C12F0)
#define MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM_ONPLAY_OFFSET UNITYSDK_OFFSET(0x177C1240)
#define MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM_ONSKIP_OFFSET UNITYSDK_OFFSET(0x177C12B0)
#define MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM_ONSTOPPED_OFFSET UNITYSDK_OFFSET(0x177C1370)
#define MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM_SET_PLAYDURATION_OFFSET UNITYSDK_OFFSET(0x177C11E0)
#define MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x177C13F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelNPCNameWidgetController__IconAnimationItem_TypeDefinitionIndex = 61988;

	class UIInLevelNPCNameWidgetController__IconAnimationItem : public ::System::Object
	{
	public:
		::System::Action* PrePlayCallback; // 0x10
		::System::Action_1<::MoleMole::UIInLevelNPCNameWidgetController__IconAnimationItem*>* AfterPlayCallback; // 0x18
		::System::String* animName; // 0x20
		::System::Func_2<::MoleMole::UIInLevelNPCNameWidgetController__IconAnimationItem*, ::System::Boolean>* ChecCouldPlay; // 0x28
		::MoleMole::UIInLevelNPCNameWidgetController__IconAnimationTag _replaceTag; // 0x30
		::System::Single _playDuration_k__BackingField; // 0x34
		::System::Single playTime; // 0x38
		::System::Boolean onlySample; // 0x3C
		::MoleMole::UIInLevelNPCNameWidgetController__IconAnimationTag playTag; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM__CTOR_OFFSET))(this);
		}

		::System::Single get_playDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM_GET_PLAYDURATION_OFFSET))(this);
		}

		::System::Void set_playDuration(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM_SET_PLAYDURATION_OFFSET))(this, value);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM_GET_ISEXPIRED_OFFSET))(this);
		}

		::System::Void OnPlay(::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM_ONPLAY_OFFSET))(this, duration);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM_ONSKIP_OFFSET))(this);
		}

		::System::Void OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM_ONFINISH_OFFSET))(this);
		}

		::System::Void OnStopped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM_ONSTOPPED_OFFSET))(this);
		}
	};
}

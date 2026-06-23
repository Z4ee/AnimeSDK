#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class NotificationBadgeEx; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALNUMTABBTNWIDGETCONTROLLER_GENERALNUMTABBTNDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1730FF90)
#define MOLEMOLE_UIGENERALNUMTABBTNWIDGETCONTROLLER_GENERALNUMTABBTNDATA__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1730FFB0)
#define MOLEMOLE_UIGENERALNUMTABBTNWIDGETCONTROLLER_GENERALNUMTABBTNDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1730FF70)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNumTabBtnWidgetController_GeneralNumTabBtnData_TypeDefinitionIndex = 66662;

	class UIGeneralNumTabBtnWidgetController_GeneralNumTabBtnData : public ::System::Object
	{
	public:
		::System::Action_1<::MoleMole::NotificationBadge*>* m_badgeAction; // 0x10
		::System::String* m_numRight; // 0x18
		::System::String* m_numLeft; // 0x20
		::System::String* m_tabText; // 0x28
		::System::Action_1<::MoleMole::NotificationBadgeEx*>* badgeExAction; // 0x30
		::System::Boolean m_isLock; // 0x38
		::System::Boolean m_showProg; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNUMTABBTNWIDGETCONTROLLER_GENERALNUMTABBTNDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* tabText, ::System::Action_1<::MoleMole::NotificationBadge*>* badgeAction, ::System::Boolean showProg, ::System::String* numLeft, ::System::String* numRight)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MoleMole::NotificationBadge*>*, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNUMTABBTNWIDGETCONTROLLER_GENERALNUMTABBTNDATA__CTOR_1_OFFSET))(this, tabText, badgeAction, showProg, numLeft, numRight);
		}

		::System::Void _ctor_2(::System::String* tabText, ::System::Action_1<::MoleMole::NotificationBadgeEx*>* badgeAction, ::System::Boolean showProg, ::System::String* numLeft, ::System::String* numRight)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MoleMole::NotificationBadgeEx*>*, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNUMTABBTNWIDGETCONTROLLER_GENERALNUMTABBTNDATA__CTOR_2_OFFSET))(this, tabText, badgeAction, showProg, numLeft, numRight);
		}
	};
}

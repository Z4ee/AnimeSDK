#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowAchievementDialogOpenCardWidgetController.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_196927E800C88A86;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBANGBOODREAMACHIEVEMENTDIALOGWIDGETCONTROLLER_GETBADGEMAP_OFFSET UNITYSDK_OFFSET(0x17F534A0)
#define MOLEMOLE_UIBANGBOODREAMACHIEVEMENTDIALOGWIDGETCONTROLLER_GETCARDLIST_OFFSET UNITYSDK_OFFSET(0x17F53980)
#define MOLEMOLE_UIBANGBOODREAMACHIEVEMENTDIALOGWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17F539D0)
#define MOLEMOLE_UIBANGBOODREAMACHIEVEMENTDIALOGWIDGETCONTROLLER___BASE_GETBADGEMAP_OFFSET UNITYSDK_OFFSET(0x17F539E0)
#define MOLEMOLE_UIBANGBOODREAMACHIEVEMENTDIALOGWIDGETCONTROLLER___BASE_GETCARDLIST_OFFSET UNITYSDK_OFFSET(0x17F539F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooDreamAchievementDialogWidgetController_TypeDefinitionIndex = 71449;

	class UIBangbooDreamAchievementDialogWidgetController : public ::MoleMole::UIHollowAchievementDialogOpenCardWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMACHIEVEMENTDIALOGWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_1_196927E800C88A86* GetBadgeMap()
		{
			return ((::Class_1_196927E800C88A86*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMACHIEVEMENTDIALOGWIDGETCONTROLLER_GETBADGEMAP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* GetCardList(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* rawCards)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMACHIEVEMENTDIALOGWIDGETCONTROLLER_GETCARDLIST_OFFSET))(this, rawCards);
		}

		::Class_1_196927E800C88A86* __base_GetBadgeMap()
		{
			return ((::Class_1_196927E800C88A86*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMACHIEVEMENTDIALOGWIDGETCONTROLLER___BASE_GETBADGEMAP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* __base_GetCardList(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* P0)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMACHIEVEMENTDIALOGWIDGETCONTROLLER___BASE_GETCARDLIST_OFFSET))(this, P0);
		}
	};
}

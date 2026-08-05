#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowAchievementDialogOpenCardWidgetController.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_196927E800C88A86;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIABYSS2ACHIEVEMENTDIALOGWIDGETCONTROLLER_GETBADGEMAP_OFFSET UNITYSDK_OFFSET(0x19747790)
#define MOLEMOLE_UIABYSS2ACHIEVEMENTDIALOGWIDGETCONTROLLER_GETCARDLIST_OFFSET UNITYSDK_OFFSET(0x197488E0)
#define MOLEMOLE_UIABYSS2ACHIEVEMENTDIALOGWIDGETCONTROLLER_GETGENRENAME_OFFSET UNITYSDK_OFFSET(0x19747570)
#define MOLEMOLE_UIABYSS2ACHIEVEMENTDIALOGWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19748930)
#define MOLEMOLE_UIABYSS2ACHIEVEMENTDIALOGWIDGETCONTROLLER___BASE_GETBADGEMAP_OFFSET UNITYSDK_OFFSET(0x19748940)
#define MOLEMOLE_UIABYSS2ACHIEVEMENTDIALOGWIDGETCONTROLLER___BASE_GETCARDLIST_OFFSET UNITYSDK_OFFSET(0x19748950)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyss2AchievementDialogWidgetController_TypeDefinitionIndex = 63902;

	class UIAbyss2AchievementDialogWidgetController : public ::MoleMole::UIHollowAchievementDialogOpenCardWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSS2ACHIEVEMENTDIALOGWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::String* GetGenreName(::System::Int32 itemid, ::System::Int32 genreID)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSS2ACHIEVEMENTDIALOGWIDGETCONTROLLER_GETGENRENAME_OFFSET))(this, itemid, genreID);
		}

		::Class_1_196927E800C88A86* GetBadgeMap()
		{
			return ((::Class_1_196927E800C88A86*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSS2ACHIEVEMENTDIALOGWIDGETCONTROLLER_GETBADGEMAP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* GetCardList(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* rawCards)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSS2ACHIEVEMENTDIALOGWIDGETCONTROLLER_GETCARDLIST_OFFSET))(this, rawCards);
		}

		::Class_1_196927E800C88A86* __base_GetBadgeMap()
		{
			return ((::Class_1_196927E800C88A86*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSS2ACHIEVEMENTDIALOGWIDGETCONTROLLER___BASE_GETBADGEMAP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* __base_GetCardList(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* P0)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSS2ACHIEVEMENTDIALOGWIDGETCONTROLLER___BASE_GETCARDLIST_OFFSET))(this, P0);
		}
	};
}

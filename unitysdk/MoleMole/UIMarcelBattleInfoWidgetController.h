#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBattleInfoWidgetControllerBase.h"

class Class_1_0EF1FE815B5E0EF7;
class Class_1_1685EC66FBD28897;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER_FILLCARDLIST_OFFSET UNITYSDK_OFFSET(0x168CFD40)
#define MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER_FILLREWARDMAP_OFFSET UNITYSDK_OFFSET(0x168CFD90)
#define MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER_GETLEVELTYPE_OFFSET UNITYSDK_OFFSET(0x168D0820)
#define MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER_GETSPECIAL_OFFSET UNITYSDK_OFFSET(0x168D0B00)
#define MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER_GETTITLETEXT_OFFSET UNITYSDK_OFFSET(0x168D0960)
#define MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x168D0D40)
#define MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER__FILLREWARDMAP_G__MAX_1_1_OFFSET UNITYSDK_OFFSET(0x168D0950)
#define MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER__FILLREWARDMAP_G__MIN_1_2_OFFSET UNITYSDK_OFFSET(0x168D0940)
#define MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER___BASE_GETSPECIAL_OFFSET UNITYSDK_OFFSET(0x168D0D50)
#define MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER___BASE_GETTITLETEXT_OFFSET UNITYSDK_OFFSET(0x168D0DE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMarcelBattleInfoWidgetController_TypeDefinitionIndex = 42408;

	class UIMarcelBattleInfoWidgetController : public ::MoleMole::UIBattleInfoWidgetControllerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void FillCardList(::System::Collections::Generic::List_1<::System::Int32>* cardList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER_FILLCARDLIST_OFFSET))(this, cardList);
		}

		::System::Void FillRewardMap(::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* rewards)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER_FILLREWARDMAP_OFFSET))(this, rewards);
		}

		::System::String* GetTitleText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER_GETTITLETEXT_OFFSET))(this);
		}

		::Class_1_0EF1FE815B5E0EF7* GetSpecial()
		{
			return ((::Class_1_0EF1FE815B5E0EF7*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER_GETSPECIAL_OFFSET))(this);
		}

		static ::System::Int32 GetLevelType()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER_GETLEVELTYPE_OFFSET))();
		}

		static ::System::Int32 _FillRewardMap_g__Max_1_1(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER__FILLREWARDMAP_G__MAX_1_1_OFFSET))(x, y);
		}

		static ::System::Int32 _FillRewardMap_g__Min_1_2(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER__FILLREWARDMAP_G__MIN_1_2_OFFSET))(x, y);
		}

		::Class_1_0EF1FE815B5E0EF7* __base_GetSpecial()
		{
			return ((::Class_1_0EF1FE815B5E0EF7*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER___BASE_GETSPECIAL_OFFSET))(this);
		}

		::System::String* __base_GetTitleText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER___BASE_GETTITLETEXT_OFFSET))(this);
		}
	};
}

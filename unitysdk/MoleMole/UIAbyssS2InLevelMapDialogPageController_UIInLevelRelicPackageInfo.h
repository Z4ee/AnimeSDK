#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_AC1B1CB16C488BEC;

#define MOLEMOLE_UIABYSSS2INLEVELMAPDIALOGPAGECONTROLLER_UIINLEVELRELICPACKAGEINFO_GETTEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x17A1B020)
#define MOLEMOLE_UIABYSSS2INLEVELMAPDIALOGPAGECONTROLLER_UIINLEVELRELICPACKAGEINFO_SETBRIEF_OFFSET UNITYSDK_OFFSET(0x17A1B070)
#define MOLEMOLE_UIABYSSS2INLEVELMAPDIALOGPAGECONTROLLER_UIINLEVELRELICPACKAGEINFO_SETSELECT_OFFSET UNITYSDK_OFFSET(0x17A1B0C0)
#define MOLEMOLE_UIABYSSS2INLEVELMAPDIALOGPAGECONTROLLER_UIINLEVELRELICPACKAGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17A19680)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2InLevelMapDialogPageController_UIInLevelRelicPackageInfo_TypeDefinitionIndex = 62274;

	class UIAbyssS2InLevelMapDialogPageController_UIInLevelRelicPackageInfo : public ::System::Object
	{
	public:
		::Class_1_0D6706375CDAAE8C* Data; // 0x10
		::Class_2_AC1B1CB16C488BEC* IconData; // 0x18
		::System::Boolean UseGamepadSelectable; // 0x20
		::System::Boolean Expand; // 0x21
		::System::Boolean IsSelect; // 0x22
		::System::Boolean BriefDesc; // 0x23
		::System::Boolean HideLevel; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPDIALOGPAGECONTROLLER_UIINLEVELRELICPACKAGEINFO__CTOR_OFFSET))(this);
		}

		::System::Int32 GetTemplateIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPDIALOGPAGECONTROLLER_UIINLEVELRELICPACKAGEINFO_GETTEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void SetBrief(::System::Boolean brief)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPDIALOGPAGECONTROLLER_UIINLEVELRELICPACKAGEINFO_SETBRIEF_OFFSET))(this, brief);
		}

		::System::Void SetSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPDIALOGPAGECONTROLLER_UIINLEVELRELICPACKAGEINFO_SETSELECT_OFFSET))(this, isSelect);
		}
	};
}

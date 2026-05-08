#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralTabBtnWidgetController_Data_1.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class String; }

#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_PARTNERCAMPTYPETEMPLATEDATA_GET_BADGESUBID_OFFSET UNITYSDK_OFFSET(0x1276FE40)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_PARTNERCAMPTYPETEMPLATEDATA_GET_BADGETYPE_OFFSET UNITYSDK_OFFSET(0x1276FE30)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_PARTNERCAMPTYPETEMPLATEDATA_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1276FDA0)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_PARTNERCAMPTYPETEMPLATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1276FF00)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_PARTNERCAMPTYPETEMPLATEDATA___BASE_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1276FFA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchTrustDegreePageController_PartnerCampTypeTemplateData_TypeDefinitionIndex = 39295;

	class UIWorkBenchTrustDegreePageController_PartnerCampTypeTemplateData : public ::MoleMole::UIGeneralTabBtnWidgetController_Data_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_PARTNERCAMPTYPETEMPLATEDATA__CTOR_OFFSET))(this);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_PARTNERCAMPTYPETEMPLATEDATA_GET_TEXT_OFFSET))(this);
		}

		::System::Nullable_1<::Share::ENotificationBadgeType> get_badgeType()
		{
			return ((::System::Nullable_1<::Share::ENotificationBadgeType>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_PARTNERCAMPTYPETEMPLATEDATA_GET_BADGETYPE_OFFSET))(this);
		}

		::System::Nullable_1<::NodeGraph::VariantUnion> get_badgeSubId()
		{
			return ((::System::Nullable_1<::NodeGraph::VariantUnion>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_PARTNERCAMPTYPETEMPLATEDATA_GET_BADGESUBID_OFFSET))(this);
		}

		::System::String* __base_get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_PARTNERCAMPTYPETEMPLATEDATA___BASE_GET_TEXT_OFFSET))(this);
		}
	};
}

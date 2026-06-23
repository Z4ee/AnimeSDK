#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralTabBtnWidgetController_Data_1.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/Nullable_1.h"

class Class_2_6D99A03C58ED2B6E_2;
namespace System { class String; }

#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_PARTNERCAMPTEMPLATEDATA_GET_BADGESUBID_OFFSET UNITYSDK_OFFSET(0x1656CE10)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_PARTNERCAMPTEMPLATEDATA_GET_BADGETYPE_OFFSET UNITYSDK_OFFSET(0x1656CE00)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_PARTNERCAMPTEMPLATEDATA_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1656CDD0)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_PARTNERCAMPTEMPLATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1656CEE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchTrustDegreePageController_PartnerCampTemplateData_TypeDefinitionIndex = 50971;

	class UIWorkBenchTrustDegreePageController_PartnerCampTemplateData : public ::MoleMole::UIGeneralTabBtnWidgetController_Data_1<::Class_2_6D99A03C58ED2B6E_2*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_PARTNERCAMPTEMPLATEDATA__CTOR_OFFSET))(this);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_PARTNERCAMPTEMPLATEDATA_GET_TEXT_OFFSET))(this);
		}

		::System::Nullable_1<::Share::ENotificationBadgeType> get_badgeType()
		{
			return ((::System::Nullable_1<::Share::ENotificationBadgeType>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_PARTNERCAMPTEMPLATEDATA_GET_BADGETYPE_OFFSET))(this);
		}

		::System::Nullable_1<::NodeGraph::VariantUnion> get_badgeSubId()
		{
			return ((::System::Nullable_1<::NodeGraph::VariantUnion>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_PARTNERCAMPTEMPLATEDATA_GET_BADGESUBID_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3944782C20CE600E_1.h"
#include "unitysdk/Enum_3_43A973C56567F5C2.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_2B9D1521AEB6DD72_2;
class Class_2_E23E4CB2769CC93F;
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UISOCIALCIRCLEMANAGEPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x151150C0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleManagePageController_Context_TypeDefinitionIndex = 51774;

	class UISocialCircleManagePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_E23E4CB2769CC93F* SocialCircleData; // 0x28
		::Class_2_2B9D1521AEB6DD72_2* CircleStaticData; // 0x30
		::System::Action_2<::Enum_3_43A973C56567F5C2, ::Class_2_E23E4CB2769CC93F*>* OnCloseAction; // 0x38
		::Enum_3_3944782C20CE600E_1 ManagePageMode; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMANAGEPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}

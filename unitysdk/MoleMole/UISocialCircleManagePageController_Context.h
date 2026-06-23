#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_43A973C56567F5C2.h"
#include "unitysdk/Enum_3_E040468A0E2C62EF.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_2B9D1521AEB6DD72_1;
class Class_2_DF2C726EEEEC912D;
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UISOCIALCIRCLEMANAGEPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11BAFCE0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleManagePageController_Context_TypeDefinitionIndex = 61324;

	class UISocialCircleManagePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_DF2C726EEEEC912D* SocialCircleData; // 0x28
		::Class_2_2B9D1521AEB6DD72_1* CircleStaticData; // 0x30
		::System::Action_2<::Enum_3_43A973C56567F5C2, ::Class_2_DF2C726EEEEC912D*>* OnCloseAction; // 0x38
		::Enum_3_E040468A0E2C62EF ManagePageMode; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMANAGEPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}

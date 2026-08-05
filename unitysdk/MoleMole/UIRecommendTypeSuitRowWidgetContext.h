#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_12BDE7300F0E061C;
class Class_3_5F93B9EE9043C5B6_3;
namespace MoleMole { template <typename T> class UIRoleEquipRecommendPopContext_1; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15180740)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecommendTypeSuitRowWidgetContext_TypeDefinitionIndex = 83259;

	class UIRecommendTypeSuitRowWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_5F93B9EE9043C5B6_3* avatarRecommendSuitData; // 0x28
		::System::Action_1<::System::Boolean>* onSuitFocusChange; // 0x30
		::MoleMole::UIRoleEquipRecommendPopContext_1<::Class_2_12BDE7300F0E061C*>* RoleEquipRecommendPopContext; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

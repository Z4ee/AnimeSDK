#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_12BDE7300F0E061C;
class Class_3_A7EA3BF91B53AC5E;
namespace MoleMole { template <typename T> class UIRoleEquipRecommendPopContext_1; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x152ABAC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecommendTypeSuitRowWidgetContext_TypeDefinitionIndex = 41487;

	class UIRecommendTypeSuitRowWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Boolean>* onSuitFocusChange; // 0x28
		::Class_3_A7EA3BF91B53AC5E* avatarRecommendSuitData; // 0x30
		::MoleMole::UIRoleEquipRecommendPopContext_1<::Class_2_12BDE7300F0E061C*>* RoleEquipRecommendPopContext; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_12BDE7300F0E061C;
class Class_3_C3F0E3B5AB5977AE_10;
namespace MoleMole { template <typename T> class UIRoleEquipRecommendPopContext_1; }

#define MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13803C80)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecommendTypePropertyRowWidgetContext_TypeDefinitionIndex = 40273;

	class UIRecommendTypePropertyRowWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIRoleEquipRecommendPopContext_1<::Class_2_12BDE7300F0E061C*>* RoleEquipRecommendPopContext; // 0x28
		::Class_3_C3F0E3B5AB5977AE_10* avatarRecommendPropertyData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

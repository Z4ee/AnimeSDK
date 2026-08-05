#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_12BDE7300F0E061C;
namespace MoleMole { class UIRoleEquipRecommendPopWindowController; }
namespace MoleMole { template <typename T> class UIRoleEquipRecommendPopContext_1; }

#define MOLEMOLE_UIROLEEQUIPRECOMMENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15185440)
#define MOLEMOLE_UIROLEEQUIPRECOMMENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__ONUIOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x15185450)
#define MOLEMOLE_UIROLEEQUIPRECOMMENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__ONUIOPEN_B__1_OFFSET UNITYSDK_OFFSET(0x15185B70)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEquipRecommendPopWindowController___c__DisplayClass8_0_TypeDefinitionIndex = 82486;

	class UIRoleEquipRecommendPopWindowController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRoleEquipRecommendPopWindowController* __4__this; // 0x10
		::MoleMole::UIRoleEquipRecommendPopContext_1<::Class_2_12BDE7300F0E061C*>* dialogContext; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPRECOMMENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPRECOMMENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__ONUIOPEN_B__0_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPRECOMMENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__ONUIOPEN_B__1_OFFSET))(this);
		}
	};
}

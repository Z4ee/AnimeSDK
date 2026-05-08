#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UILevelResultPageController_RewardItemMeta.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15C46DB0)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15C46DF0)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER___C__REFRESHCHESSBOARDVIEW_B__24_0_OFFSET UNITYSDK_OFFSET(0x15C46E00)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultPageController___c_TypeDefinitionIndex = 68605;

	class UILevelResultPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UILevelResultPageController___c** StaticGet___9()
		{
			return (::MoleMole::UILevelResultPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UILevelResultPageController___c_TypeDefinitionIndex)->GetStaticField(0x32940);
		}
		static ::System::Comparison_1<::MoleMole::UILevelResultPageController_RewardItemMeta>** StaticGet___9__24_0()
		{
			return (::System::Comparison_1<::MoleMole::UILevelResultPageController_RewardItemMeta>**)Il2CppClass::FromTypeDefinitionIndex(UILevelResultPageController___c_TypeDefinitionIndex)->GetStaticField(0x32948);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshChessboardView_b__24_0(::MoleMole::UILevelResultPageController_RewardItemMeta a, ::MoleMole::UILevelResultPageController_RewardItemMeta b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UILevelResultPageController_RewardItemMeta, ::MoleMole::UILevelResultPageController_RewardItemMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER___C__REFRESHCHESSBOARDVIEW_B__24_0_OFFSET))(this, a, b);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_106B415829838DC6.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_27BF3801F9460B30;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18D29300)
#define MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18D29370)
#define MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER_SETISHADAL_OFFSET UNITYSDK_OFFSET(0x18D29430)
#define MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER_SETMODE_OFFSET UNITYSDK_OFFSET(0x18D29490)
#define MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18D29610)
#define MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18D29670)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeBadgeRowWidgetController_TypeDefinitionIndex = 81430;

	class UIBossChallengeBadgeRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_27BF3801F9460B30* get__viewModel()
		{
			return ((::Class_2_27BF3801F9460B30*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void SetIsHadal(::System::Boolean isHadal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER_SETISHADAL_OFFSET))(this, isHadal);
		}

		::System::Void SetMode(::Enum_3_106B415829838DC6 mode)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_106B415829838DC6))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER_SETMODE_OFFSET))(this, mode);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_D9AEAF578C297E85;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1564CA10)
#define MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1564CA80)
#define MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER_SETISHADAL_OFFSET UNITYSDK_OFFSET(0x1564CB40)
#define MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1564CCC0)
#define MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1564CD20)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeBadgeRowWidgetController_TypeDefinitionIndex = 70341;

	class UIBossChallengeBadgeRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_D9AEAF578C297E85* get__viewModel()
		{
			return ((::Class_2_D9AEAF578C297E85*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void SetIsHadal(::System::Boolean isHadal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER_SETISHADAL_OFFSET))(this, isHadal);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}
	};
}

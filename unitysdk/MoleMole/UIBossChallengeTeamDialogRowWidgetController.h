#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_3AC43AF7BEBFB15F;
class Class_3_F118437738B4CCD5_4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x164709F0)
#define MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16470A60)
#define MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16470E20)
#define MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER_SETBRIGHT_OFFSET UNITYSDK_OFFSET(0x16470CA0)
#define MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER_SETTEAMINFO_OFFSET UNITYSDK_OFFSET(0x16470B20)
#define MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16470E90)
#define MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16470EF0)
#define MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16470F90)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeTeamDialogRowWidgetController_TypeDefinitionIndex = 76486;

	class UIBossChallengeTeamDialogRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_3AC43AF7BEBFB15F* get__viewModel()
		{
			return ((::Class_2_3AC43AF7BEBFB15F*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void SetTeamInfo(::Class_3_F118437738B4CCD5_4* teamInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F118437738B4CCD5_4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER_SETTEAMINFO_OFFSET))(this, teamInfo);
		}

		::System::Void SetBright(::System::Boolean showBright)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER_SETBRIGHT_OFFSET))(this, showBright);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}

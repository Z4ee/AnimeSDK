#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_EDFAEA7700066212;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIGALGAMEARGUEBGWIDGETCONTROLLER_APPLYDIRECTION_OFFSET UNITYSDK_OFFSET(0x19FA83D0)
#define MOLEMOLE_UIGALGAMEARGUEBGWIDGETCONTROLLER_GET_ROOTANIM_OFFSET UNITYSDK_OFFSET(0x19FA7F80)
#define MOLEMOLE_UIGALGAMEARGUEBGWIDGETCONTROLLER_GET_SPEAKINGANIM_OFFSET UNITYSDK_OFFSET(0x19FA8020)
#define MOLEMOLE_UIGALGAMEARGUEBGWIDGETCONTROLLER_GET_SPEEDLINEANIM_OFFSET UNITYSDK_OFFSET(0x19FA80C0)
#define MOLEMOLE_UIGALGAMEARGUEBGWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19FA7F10)
#define MOLEMOLE_UIGALGAMEARGUEBGWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19FA8160)
#define MOLEMOLE_UIGALGAMEARGUEBGWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19FA8200)
#define MOLEMOLE_UIGALGAMEARGUEBGWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19FA8540)
#define MOLEMOLE_UIGALGAMEARGUEBGWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19FA85A0)
#define MOLEMOLE_UIGALGAMEARGUEBGWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19FA8640)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgameArgueBGWidgetController_TypeDefinitionIndex = 74805;

	class UIGalgameArgueBGWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEBGWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_EDFAEA7700066212* get__viewModel()
		{
			return ((::Class_2_EDFAEA7700066212*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEBGWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::Class_2_FDFE69FE7B72463B* get_RootAnim()
		{
			return ((::Class_2_FDFE69FE7B72463B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEBGWIDGETCONTROLLER_GET_ROOTANIM_OFFSET))(this);
		}

		::Class_2_FDFE69FE7B72463B* get_SpeakingAnim()
		{
			return ((::Class_2_FDFE69FE7B72463B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEBGWIDGETCONTROLLER_GET_SPEAKINGANIM_OFFSET))(this);
		}

		::Class_2_FDFE69FE7B72463B* get_SpeedLineAnim()
		{
			return ((::Class_2_FDFE69FE7B72463B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEBGWIDGETCONTROLLER_GET_SPEEDLINEANIM_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEBGWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEBGWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void ApplyDirection(::MoleMole::GalGame::GalNPCLocation direction)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalNPCLocation))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEBGWIDGETCONTROLLER_APPLYDIRECTION_OFFSET))(this, direction);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEBGWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEBGWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}

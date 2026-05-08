#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_0A55B5A82A61DAFA_2;
class Class_2_14E7CE92E8A3183F;
class Class_2_208CC9941471731A_535;
class Class_2_A3145B0C4E6581BC;
class Class_2_E621E51D351EB960;
class Class_2_F69D29AB796376C2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x12B374D0)
#define MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER_ONCLICKBTN_OFFSET UNITYSDK_OFFSET(0x12B38540)
#define MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x12B37540)
#define MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12B376E0)
#define MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x12B37DF0)
#define MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12B385F0)
#define MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x12B387A0)
#define MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12B38840)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS3EntranceMainWidgetController_TypeDefinitionIndex = 42073;

	class UIAbyssS3EntranceMainWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Int32 _entranceID; // 0x2B8
		::Class_2_E621E51D351EB960* _abyssModel; // 0x2C0
		::Class_2_208CC9941471731A_535* _entranceConfig; // 0x2C8
		::System::Collections::Generic::List_1<::Class_2_14E7CE92E8A3183F*>* _dungeonConfigList; // 0x2D0
		::Class_2_0A55B5A82A61DAFA_2* _currSelectQuestConfig; // 0x2D8
		::Class_2_14E7CE92E8A3183F* _currSelectDungeonConfig; // 0x2E0
		::Class_2_F69D29AB796376C2* _questTemplate; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_A3145B0C4E6581BC* get__viewModel()
		{
			return ((::Class_2_A3145B0C4E6581BC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER_REFRESH_OFFSET))(this);
		}

		::System::Void OnClickBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER_ONCLICKBTN_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}

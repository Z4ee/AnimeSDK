#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_6D0D75866753B459;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIHARDCOREBOSSBATTLEHISTORYCARDROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x199D47D0)
#define MOLEMOLE_UIHARDCOREBOSSBATTLEHISTORYCARDROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x199D4840)
#define MOLEMOLE_UIHARDCOREBOSSBATTLEHISTORYCARDROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x199D48E0)
#define MOLEMOLE_UIHARDCOREBOSSBATTLEHISTORYCARDROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x199D4B50)
#define MOLEMOLE_UIHARDCOREBOSSBATTLEHISTORYCARDROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x199D4BB0)
#define MOLEMOLE_UIHARDCOREBOSSBATTLEHISTORYCARDROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x199D4C50)

namespace MoleMole
{
	inline static constexpr unsigned int UIHardCoreBossBattleHistoryCardRowWidgetController_TypeDefinitionIndex = 45159;

	class UIHardCoreBossBattleHistoryCardRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLEHISTORYCARDROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_6D0D75866753B459* get__viewModel()
		{
			return ((::Class_2_6D0D75866753B459*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLEHISTORYCARDROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLEHISTORYCARDROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLEHISTORYCARDROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLEHISTORYCARDROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLEHISTORYCARDROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}

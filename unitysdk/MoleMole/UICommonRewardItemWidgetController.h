#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_0BE72D3922328EB3;
class Class_2_0FCB757E015B38C8_1;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UICOMMONREWARDITEMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x175C2DC0)
#define MOLEMOLE_UICOMMONREWARDITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x175C2E30)
#define MOLEMOLE_UICOMMONREWARDITEMWIDGETCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x175C2EF0)
#define MOLEMOLE_UICOMMONREWARDITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x175C3140)
#define MOLEMOLE_UICOMMONREWARDITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x175C31A0)

namespace MoleMole
{
	inline static constexpr unsigned int UICommonRewardItemWidgetController_TypeDefinitionIndex = 79707;

	class UICommonRewardItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMONREWARDITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_0FCB757E015B38C8_1* get__viewModel()
		{
			return ((::Class_2_0FCB757E015B38C8_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMONREWARDITEMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMONREWARDITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void SetData(::Class_1_0BE72D3922328EB3* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0BE72D3922328EB3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMONREWARDITEMWIDGETCONTROLLER_SETDATA_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMONREWARDITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}
	};
}

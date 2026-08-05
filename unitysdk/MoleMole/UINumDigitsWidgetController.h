#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_528E5BC9C9DE72B6;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x168EA0C0)
#define MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x168EA130)
#define MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x168EA1D0)
#define MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER_SETDIGITIMGFORMAT_OFFSET UNITYSDK_OFFSET(0x168EA570)
#define MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER_SETNUM_OFFSET UNITYSDK_OFFSET(0x168EA4A0)
#define MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x168EA620)
#define MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x168EA680)
#define MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x168EA720)

namespace MoleMole
{
	inline static constexpr unsigned int UINumDigitsWidgetController_TypeDefinitionIndex = 43897;

	class UINumDigitsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_528E5BC9C9DE72B6* get__viewModel()
		{
			return ((::Class_2_528E5BC9C9DE72B6*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetNum(::System::Int32 num, ::System::Boolean hideLeadingZeros, ::System::Boolean animation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER_SETNUM_OFFSET))(this, num, hideLeadingZeros, animation);
		}

		::System::Void SetDigitImgFormat(::System::String* format)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER_SETDIGITIMGFORMAT_OFFSET))(this, format);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}

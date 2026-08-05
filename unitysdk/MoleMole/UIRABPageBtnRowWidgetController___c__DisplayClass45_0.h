#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_324B5AB375F84D6C_Class_2_C169F4F3285D9F10;

#define MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16A81F10)
#define MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__DISPLAYCLASS45_0__REFRESHSTAGEPROGRESS_G__APPLYPROGRESS_0_OFFSET UNITYSDK_OFFSET(0x16A81F20)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABPageBtnRowWidgetController___c__DisplayClass45_0_TypeDefinitionIndex = 68939;

	class UIRABPageBtnRowWidgetController___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::Class_2_324B5AB375F84D6C_Class_2_C169F4F3285D9F10* lvInfoView; // 0x10
		::System::Single startFill; // 0x18
		::System::Single endFill; // 0x1C
		::System::Single endRotate; // 0x20
		::System::Single startRotate; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshStageProgress_g__ApplyProgress_0(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__DISPLAYCLASS45_0__REFRESHSTAGEPROGRESS_G__APPLYPROGRESS_0_OFFSET))(this, progress);
		}
	};
}

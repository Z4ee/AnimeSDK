#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2181504E881DDEE4;
namespace MoleMole { class UIInterKnotMissionWidgetController; }

#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16D85F00)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS36_0__ONTRACKBTNCLICKHANDLE_B__0_OFFSET UNITYSDK_OFFSET(0x16D85F10)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS36_0__ONTRACKBTNCLICKHANDLE_B__2_OFFSET UNITYSDK_OFFSET(0x16D85F50)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS36_0__ONTRACKBTNCLICKHANDLE_B__3_OFFSET UNITYSDK_OFFSET(0x16D86220)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS36_0__ONTRACKBTNCLICKHANDLE_B__4_OFFSET UNITYSDK_OFFSET(0x16D86230)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS36_0__ONTRACKBTNCLICKHANDLE_G__SENDQUESTTRACK_1_OFFSET UNITYSDK_OFFSET(0x16D85F60)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotMissionWidgetController___c__DisplayClass36_0_TypeDefinitionIndex = 84825;

	class UIInterKnotMissionWidgetController___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::Class_1_2181504E881DDEE4* manual; // 0x10
		::MoleMole::UIInterKnotMissionWidgetController* __4__this; // 0x18
		::System::Int32 mainCityQuestID; // 0x20
		::System::Boolean hasOpenMap; // 0x24
		::System::Boolean notTracked; // 0x25
		::System::Int32 currentMissionID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnTrackBtnClickHandle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS36_0__ONTRACKBTNCLICKHANDLE_B__0_OFFSET))(this);
		}

		::System::Void _OnTrackBtnClickHandle_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS36_0__ONTRACKBTNCLICKHANDLE_B__2_OFFSET))(this);
		}

		::System::Void _OnTrackBtnClickHandle_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS36_0__ONTRACKBTNCLICKHANDLE_B__3_OFFSET))(this);
		}

		::System::Void _OnTrackBtnClickHandle_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS36_0__ONTRACKBTNCLICKHANDLE_B__4_OFFSET))(this);
		}

		::System::Void _OnTrackBtnClickHandle_g__SendQuestTrack_1(::System::Boolean autoWorld, ::System::Boolean openMapWithTip)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS36_0__ONTRACKBTNCLICKHANDLE_G__SENDQUESTTRACK_1_OFFSET))(this, autoWorld, openMapWithTip);
		}
	};
}

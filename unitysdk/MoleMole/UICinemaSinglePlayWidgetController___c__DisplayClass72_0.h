#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Tuple_2.h"
#include "unitysdk/MoleMole/CinemaSingleBeatMapConfig_BeatMap_BeatItem.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_351;
class Class_2_7341BF3E408F4DA8_Class_2_5F3C14FED1CE4C5F;
namespace MoleMole { class UICinemaSinglePlayWidgetController; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19AA13F0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__0_OFFSET UNITYSDK_OFFSET(0x19AA1400)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__1_OFFSET UNITYSDK_OFFSET(0x19AA1660)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__2_OFFSET UNITYSDK_OFFSET(0x19AA1760)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__3_OFFSET UNITYSDK_OFFSET(0x19AA15E0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__4_OFFSET UNITYSDK_OFFSET(0x19AA1710)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__5_OFFSET UNITYSDK_OFFSET(0x19AA1AE0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSinglePlayWidgetController___c__DisplayClass72_0_TypeDefinitionIndex = 46347;

	class UICinemaSinglePlayWidgetController___c__DisplayClass72_0 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_351* bubbleWidget; // 0x10
		::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>* onClick; // 0x18
		::Class_2_7341BF3E408F4DA8_Class_2_5F3C14FED1CE4C5F* locationView; // 0x20
		::MoleMole::UICinemaSinglePlayWidgetController* __4__this; // 0x28
		::System::Action* __9__4; // 0x30
		::System::Action* __9__3; // 0x38
		::System::Action* __9__5; // 0x40
		::System::Boolean isRightSide; // 0x48
		::System::Int32 bubbleLocation; // 0x4C
		::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem item; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _ShowNormalBubble_b__0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__0_OFFSET))(this);
		}

		::System::Void _ShowNormalBubble_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__3_OFFSET))(this);
		}

		::System::Void _ShowNormalBubble_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__1_OFFSET))(this);
		}

		::System::Void _ShowNormalBubble_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__4_OFFSET))(this);
		}

		::System::Void _ShowNormalBubble_b__2(::System::Boolean _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__2_OFFSET))(this, _);
		}

		::System::Void _ShowNormalBubble_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__5_OFFSET))(this);
		}
	};
}

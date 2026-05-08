#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Tuple_2.h"
#include "unitysdk/MoleMole/CinemaSingleBeatMapConfig_BeatMap_BeatItem.h"
#include "unitysdk/System/Object.h"

class Class_2_7341BF3E408F4DA8_Class_2_5F3C14FED1CE4C5F_2;
namespace MoleMole { class UICinemaSingleClearAllBubbleWidgetController; }
namespace MoleMole { class UICinemaSinglePlayWidgetController; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS82_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16EE42E0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS82_0__SHOWCLEARALLBUBBLE_B__0_OFFSET UNITYSDK_OFFSET(0x16EE42F0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS82_0__SHOWCLEARALLBUBBLE_B__1_OFFSET UNITYSDK_OFFSET(0x16EE46B0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS82_0__SHOWCLEARALLBUBBLE_B__2_OFFSET UNITYSDK_OFFSET(0x16EE47B0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS82_0__SHOWCLEARALLBUBBLE_B__3_OFFSET UNITYSDK_OFFSET(0x16EE4640)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS82_0__SHOWCLEARALLBUBBLE_B__4_OFFSET UNITYSDK_OFFSET(0x16EE4760)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS82_0__SHOWCLEARALLBUBBLE_B__5_OFFSET UNITYSDK_OFFSET(0x16EE49B0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSinglePlayWidgetController___c__DisplayClass82_0_TypeDefinitionIndex = 66487;

	class UICinemaSinglePlayWidgetController___c__DisplayClass82_0 : public ::System::Object
	{
	public:
		::MoleMole::UICinemaSinglePlayWidgetController* __4__this; // 0x10
		::System::Action* __9__3; // 0x18
		::Class_2_7341BF3E408F4DA8_Class_2_5F3C14FED1CE4C5F_2* locationView; // 0x20
		::System::Action* __9__5; // 0x28
		::System::Action* __9__4; // 0x30
		::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>* onClick; // 0x38
		::MoleMole::UICinemaSingleClearAllBubbleWidgetController* bubbleWidget; // 0x40
		::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem item; // 0x48
		::System::Int32 bubbleLocation; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS82_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _ShowClearAllBubble_b__0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS82_0__SHOWCLEARALLBUBBLE_B__0_OFFSET))(this);
		}

		::System::Void _ShowClearAllBubble_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS82_0__SHOWCLEARALLBUBBLE_B__3_OFFSET))(this);
		}

		::System::Void _ShowClearAllBubble_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS82_0__SHOWCLEARALLBUBBLE_B__1_OFFSET))(this);
		}

		::System::Void _ShowClearAllBubble_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS82_0__SHOWCLEARALLBUBBLE_B__4_OFFSET))(this);
		}

		::System::Void _ShowClearAllBubble_b__2(::System::Boolean _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS82_0__SHOWCLEARALLBUBBLE_B__2_OFFSET))(this, _);
		}

		::System::Void _ShowClearAllBubble_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS82_0__SHOWCLEARALLBUBBLE_B__5_OFFSET))(this);
		}
	};
}

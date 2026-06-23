#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Tuple_2.h"
#include "unitysdk/System/Object.h"

class Class_2_3F802DF1B3FAD67A_5;
class Class_2_79AE422BA06F6D26_231;
namespace MoleMole { class UICinemaSinglePlayWidgetController; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS80_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17A59070)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS80_0__SHOWSUPERBUBBLE_B__0_OFFSET UNITYSDK_OFFSET(0x17A59080)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS80_0__SHOWSUPERBUBBLE_B__1_OFFSET UNITYSDK_OFFSET(0x17A59240)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS80_0__SHOWSUPERBUBBLE_B__2_OFFSET UNITYSDK_OFFSET(0x17A59340)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS80_0__SHOWSUPERBUBBLE_B__3_OFFSET UNITYSDK_OFFSET(0x17A59470)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS80_0__SHOWSUPERBUBBLE_B__4_OFFSET UNITYSDK_OFFSET(0x17A591F0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS80_0__SHOWSUPERBUBBLE_B__5_OFFSET UNITYSDK_OFFSET(0x17A592F0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSinglePlayWidgetController___c__DisplayClass80_0_TypeDefinitionIndex = 71505;

	class UICinemaSinglePlayWidgetController___c__DisplayClass80_0 : public ::System::Object
	{
	public:
		::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>* onClick; // 0x10
		::MoleMole::UICinemaSinglePlayWidgetController* __4__this; // 0x18
		::System::Action* __9__5; // 0x20
		::Class_2_3F802DF1B3FAD67A_5* bubbleEvent; // 0x28
		::System::Action* __9__4; // 0x30
		::Class_2_79AE422BA06F6D26_231* controllerView; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS80_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _ShowSuperBubble_b__0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS80_0__SHOWSUPERBUBBLE_B__0_OFFSET))(this);
		}

		::System::Void _ShowSuperBubble_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS80_0__SHOWSUPERBUBBLE_B__4_OFFSET))(this);
		}

		::System::Void _ShowSuperBubble_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS80_0__SHOWSUPERBUBBLE_B__1_OFFSET))(this);
		}

		::System::Void _ShowSuperBubble_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS80_0__SHOWSUPERBUBBLE_B__5_OFFSET))(this);
		}

		::System::Void _ShowSuperBubble_b__2(::System::Boolean isFinalClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS80_0__SHOWSUPERBUBBLE_B__2_OFFSET))(this, isFinalClick);
		}

		::System::Void _ShowSuperBubble_b__3(::System::Boolean isImmediate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS80_0__SHOWSUPERBUBBLE_B__3_OFFSET))(this, isImmediate);
		}
	};
}

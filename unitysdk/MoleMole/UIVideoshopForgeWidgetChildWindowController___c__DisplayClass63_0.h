#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_A63C194229EB6BF2;
class Class_3_AAC9B4B6713CDE1B;
namespace MoleMole { class UIVideoshopForgeWidgetChildWindowController; }
template <typename T> class Class_1_27F786FF2A30778C;

#define MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS63_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11A0D5B0)
#define MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS63_0__SEND_B__2_OFFSET UNITYSDK_OFFSET(0x11A0D6E0)
#define MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS63_0__SEND_B__3_OFFSET UNITYSDK_OFFSET(0x11A0D920)
#define MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS63_0__SEND_G__SENDEQUIPGACHA_0_OFFSET UNITYSDK_OFFSET(0x11A0D5C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoshopForgeWidgetChildWindowController___c__DisplayClass63_0_TypeDefinitionIndex = 80841;

	class UIVideoshopForgeWidgetChildWindowController___c__DisplayClass63_0 : public ::System::Object
	{
	public:
		::MoleMole::UIVideoshopForgeWidgetChildWindowController* __4__this; // 0x10
		::Class_2_A63C194229EB6BF2* model; // 0x18
		::System::Int32 times; // 0x20
		::System::Int32 gachaId; // 0x24
		::System::Int32 sendPart; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS63_0__CTOR_OFFSET))(this);
		}

		::System::Void _Send_g__SendEquipGacha_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS63_0__SEND_G__SENDEQUIPGACHA_0_OFFSET))(this);
		}

		::System::Void _Send_b__2(::Class_1_27F786FF2A30778C<::Class_3_AAC9B4B6713CDE1B*>* itemList)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_27F786FF2A30778C<::Class_3_AAC9B4B6713CDE1B*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS63_0__SEND_B__2_OFFSET))(this, itemList);
		}

		::System::Void _Send_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS63_0__SEND_B__3_OFFSET))(this);
		}
	};
}

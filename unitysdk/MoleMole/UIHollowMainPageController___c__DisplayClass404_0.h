#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_90E529DB4DCB014F.h"
#include "unitysdk/System/Object.h"

class Class_5_AF65C3A968E836D2;
namespace MoleMole { class UIHollowMainPageController; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS404_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14688760)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS404_0__STARTPUSHBOX_B__0_OFFSET UNITYSDK_OFFSET(0x14688770)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass404_0_TypeDefinitionIndex = 44949;

	class UIHollowMainPageController___c__DisplayClass404_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowMainPageController* __4__this; // 0x10
		::Struct_2_90E529DB4DCB014F sectionId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS404_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartPushBox_b__0(::Class_5_AF65C3A968E836D2* c)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_AF65C3A968E836D2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS404_0__STARTPUSHBOX_B__0_OFFSET))(this, c);
		}
	};
}

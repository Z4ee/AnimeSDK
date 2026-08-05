#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E9529ED64113E4E9;
namespace MoleMole { class UILaunchPageController; }
namespace System { class Action; }

#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x182CDEB0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS18_0__PLAYKOREAAGELIMIT_B__1_OFFSET UNITYSDK_OFFSET(0x182CDEC0)

namespace MoleMole
{
	inline static constexpr unsigned int UILaunchPageController___c__DisplayClass18_0_TypeDefinitionIndex = 69712;

	class UILaunchPageController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::Action* next; // 0x10
		::MoleMole::UILaunchPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayKoreaAgeLimit_b__1(::Class_1_E9529ED64113E4E9* playerHelper)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS18_0__PLAYKOREAAGELIMIT_B__1_OFFSET))(this, playerHelper);
		}
	};
}

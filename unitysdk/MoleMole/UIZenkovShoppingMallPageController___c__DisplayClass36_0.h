#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9631DA8CB6F86BD4;
class Class_2_208CC9941471731A_754;
class Class_3_025FF4981524A424_529;
namespace MoleMole { class UIZenkovShoppingMallPageController; }

#define MOLEMOLE_UIZENKOVSHOPPINGMALLPAGECONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10AF8690)
#define MOLEMOLE_UIZENKOVSHOPPINGMALLPAGECONTROLLER___C__DISPLAYCLASS36_0__DOBUY_B__0_OFFSET UNITYSDK_OFFSET(0x10AF86A0)
#define MOLEMOLE_UIZENKOVSHOPPINGMALLPAGECONTROLLER___C__DISPLAYCLASS36_0__DOBUY_B__1_OFFSET UNITYSDK_OFFSET(0x10AF8A10)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovShoppingMallPageController___c__DisplayClass36_0_TypeDefinitionIndex = 42030;

	class UIZenkovShoppingMallPageController___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovShoppingMallPageController* __4__this; // 0x10
		::Class_2_208CC9941471731A_754* itemConfig; // 0x18
		::Class_1_9631DA8CB6F86BD4* param; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHOPPINGMALLPAGECONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoBuy_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHOPPINGMALLPAGECONTROLLER___C__DISPLAYCLASS36_0__DOBUY_B__0_OFFSET))(this);
		}

		::System::Void _DoBuy_b__1(::Class_3_025FF4981524A424_529* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_529*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHOPPINGMALLPAGECONTROLLER___C__DISPLAYCLASS36_0__DOBUY_B__1_OFFSET))(this, rsp);
		}
	};
}

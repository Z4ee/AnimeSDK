#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class QuestTipPopShow; }
namespace MoleMole { class UIMainCityPageController; }
namespace System { class Action; }

#define MOLEMOLE_QUESTTIPPOPSHOW___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x138699F0)
#define MOLEMOLE_QUESTTIPPOPSHOW___C__DISPLAYCLASS7_0__ONPROCESS_B__0_OFFSET UNITYSDK_OFFSET(0x13869A00)
#define MOLEMOLE_QUESTTIPPOPSHOW___C__DISPLAYCLASS7_0__ONPROCESS_B__1_OFFSET UNITYSDK_OFFSET(0x13869F50)
#define MOLEMOLE_QUESTTIPPOPSHOW___C__DISPLAYCLASS7_0__ONPROCESS_B__2_OFFSET UNITYSDK_OFFSET(0x1386A000)
#define MOLEMOLE_QUESTTIPPOPSHOW___C__DISPLAYCLASS7_0__ONPROCESS_B__3_OFFSET UNITYSDK_OFFSET(0x1386A030)
#define MOLEMOLE_QUESTTIPPOPSHOW___C__DISPLAYCLASS7_0__ONPROCESS_B__4_OFFSET UNITYSDK_OFFSET(0x1386A0E0)

namespace MoleMole
{
	inline static constexpr unsigned int QuestTipPopShow___c__DisplayClass7_0_TypeDefinitionIndex = 59847;

	class QuestTipPopShow___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::System::Action* __9__4; // 0x18
		::MoleMole::QuestTipPopShow* __4__this; // 0x20
		::System::Action* __9__2; // 0x28
		::MoleMole::UIMainCityPageController* mainPage; // 0x30
		::System::Action* __9__3; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUESTTIPPOPSHOW___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnProcess_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUESTTIPPOPSHOW___C__DISPLAYCLASS7_0__ONPROCESS_B__0_OFFSET))(this);
		}

		::System::Void _OnProcess_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUESTTIPPOPSHOW___C__DISPLAYCLASS7_0__ONPROCESS_B__1_OFFSET))(this);
		}

		::System::Void _OnProcess_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUESTTIPPOPSHOW___C__DISPLAYCLASS7_0__ONPROCESS_B__2_OFFSET))(this);
		}

		::System::Void _OnProcess_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUESTTIPPOPSHOW___C__DISPLAYCLASS7_0__ONPROCESS_B__3_OFFSET))(this);
		}

		::System::Void _OnProcess_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUESTTIPPOPSHOW___C__DISPLAYCLASS7_0__ONPROCESS_B__4_OFFSET))(this);
		}
	};
}

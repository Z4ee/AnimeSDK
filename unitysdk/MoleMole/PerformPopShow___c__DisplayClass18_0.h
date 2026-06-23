#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class PerformPopShow; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x141A0A30)
#define MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS18_0__PLAY_B__0_OFFSET UNITYSDK_OFFSET(0x141A0A40)
#define MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS18_0__PLAY_B__2_OFFSET UNITYSDK_OFFSET(0x141A1200)
#define MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS18_0__PLAY_B__4_OFFSET UNITYSDK_OFFSET(0x141A1250)
#define MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS18_0__PLAY_B__5_OFFSET UNITYSDK_OFFSET(0x141A0EE0)
#define MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS18_0__PLAY_B__6_OFFSET UNITYSDK_OFFSET(0x141A1190)
#define MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS18_0__PLAY_B__9_OFFSET UNITYSDK_OFFSET(0x141A0F80)

namespace MoleMole
{
	inline static constexpr unsigned int PerformPopShow___c__DisplayClass18_0_TypeDefinitionIndex = 86889;

	class PerformPopShow___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::Action* __9__9; // 0x10
		::System::Action_1<::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF>* __9__5; // 0x18
		::MoleMole::PerformPopShow* __4__this; // 0x20
		::System::Action* __9__6; // 0x28
		::System::Boolean skipFinish; // 0x30
		::System::Boolean finishChat; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _Play_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS18_0__PLAY_B__0_OFFSET))(this);
		}

		::System::Void _Play_b__5(::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS18_0__PLAY_B__5_OFFSET))(this, _);
		}

		::System::Void _Play_b__9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS18_0__PLAY_B__9_OFFSET))(this);
		}

		::System::Void _Play_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS18_0__PLAY_B__6_OFFSET))(this);
		}

		::System::Void _Play_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS18_0__PLAY_B__2_OFFSET))(this);
		}

		::System::Void _Play_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS18_0__PLAY_B__4_OFFSET))(this);
		}
	};
}

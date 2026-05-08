#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController___c__DisplayClass86_0; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_1__CTOR_OFFSET UNITYSDK_OFFSET(0x155AF740)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_1__PLAYSTORYNODE_B__8_OFFSET UNITYSDK_OFFSET(0x155AF750)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_1__PLAYSTORYNODE_B__9_OFFSET UNITYSDK_OFFSET(0x155AF830)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass86_1_TypeDefinitionIndex = 41768;

	class UIGalgamePageController___c__DisplayClass86_1 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController___c__DisplayClass86_0* CS___8__locals1; // 0x10
		::System::Int64 startTimeStampMs; // 0x18
		::System::Int32 voiceLengthMs; // 0x20
		::System::Int64 stopTimeStampMs; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_1__PLAYSTORYNODE_B__8_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS86_1__PLAYSTORYNODE_B__9_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_55792E721774BF92;

#define MOLEMOLE_UIACTIVITYCOMBATPAUSESTAGEWIDGETCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17425610)
#define MOLEMOLE_UIACTIVITYCOMBATPAUSESTAGEWIDGETCONTROLLER___C__DISPLAYCLASS25_0__FINDQUESTINDEX_B__0_OFFSET UNITYSDK_OFFSET(0x17425620)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCombatPauseStageWidgetController___c__DisplayClass25_0_TypeDefinitionIndex = 57215;

	class UIActivityCombatPauseStageWidgetController___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::Int32 questID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMBATPAUSESTAGEWIDGETCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FindQuestIndex_b__0(::Class_2_55792E721774BF92* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_55792E721774BF92*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMBATPAUSESTAGEWIDGETCONTROLLER___C__DISPLAYCLASS25_0__FINDQUESTINDEX_B__0_OFFSET))(this, x);
		}
	};
}

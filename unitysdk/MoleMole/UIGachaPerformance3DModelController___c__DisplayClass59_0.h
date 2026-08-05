#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformanceScreenEffect.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___C__DISPLAYCLASS59_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18EAFBE0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___C__DISPLAYCLASS59_0__HANDLETVRARITYSPERFORM_B__0_OFFSET UNITYSDK_OFFSET(0x18EB2940)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPerformance3DModelController___c__DisplayClass59_0_TypeDefinitionIndex = 71025;

	class UIGachaPerformance3DModelController___c__DisplayClass59_0 : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigGachaPerformanceScreenEffect curScreenEff; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___C__DISPLAYCLASS59_0__CTOR_OFFSET))(this);
		}

		::System::Void _HandleTvRaritySPerform_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___C__DISPLAYCLASS59_0__HANDLETVRARITYSPERFORM_B__0_OFFSET))(this);
		}
	};
}

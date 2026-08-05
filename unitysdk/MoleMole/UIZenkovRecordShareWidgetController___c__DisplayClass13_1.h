#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6B9BA8441E94A95A;
class Class_2_208CC9941471731A_386;

#define MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER___C__DISPLAYCLASS13_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15B12850)
#define MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER___C__DISPLAYCLASS13_1__SETUPSHARECONTENT_B__1_OFFSET UNITYSDK_OFFSET(0x15B12860)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovRecordShareWidgetController___c__DisplayClass13_1_TypeDefinitionIndex = 53769;

	class UIZenkovRecordShareWidgetController___c__DisplayClass13_1 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_386* curSeasonConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER___C__DISPLAYCLASS13_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetupShareContent_b__1(::Class_1_6B9BA8441E94A95A* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_6B9BA8441E94A95A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER___C__DISPLAYCLASS13_1__SETUPSHARECONTENT_B__1_OFFSET))(this, m);
		}
	};
}

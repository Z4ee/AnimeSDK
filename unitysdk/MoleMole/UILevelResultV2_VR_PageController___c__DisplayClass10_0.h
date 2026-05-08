#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;

#define MOLEMOLE_UILEVELRESULTV2_VR_PAGECONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14D33B60)
#define MOLEMOLE_UILEVELRESULTV2_VR_PAGECONTROLLER___C__DISPLAYCLASS10_0__REFRESHFAIRYBTNSTATE_B__15_OFFSET UNITYSDK_OFFSET(0x14D33B70)
#define MOLEMOLE_UILEVELRESULTV2_VR_PAGECONTROLLER___C__DISPLAYCLASS10_0__REFRESHFAIRYBTNSTATE_B__16_OFFSET UNITYSDK_OFFSET(0x14D33BA0)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultV2_VR_PageController___c__DisplayClass10_0_TypeDefinitionIndex = 63399;

	class UILevelResultV2_VR_PageController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::Int32 materialItemId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_VR_PAGECONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshFairyBtnState_b__15(::Class_1_1685EC66FBD28897* reward)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_1685EC66FBD28897*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_VR_PAGECONTROLLER___C__DISPLAYCLASS10_0__REFRESHFAIRYBTNSTATE_B__15_OFFSET))(this, reward);
		}

		::System::Boolean _RefreshFairyBtnState_b__16(::Class_1_1685EC66FBD28897* reward)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_1685EC66FBD28897*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_VR_PAGECONTROLLER___C__DISPLAYCLASS10_0__REFRESHFAIRYBTNSTATE_B__16_OFFSET))(this, reward);
		}
	};
}

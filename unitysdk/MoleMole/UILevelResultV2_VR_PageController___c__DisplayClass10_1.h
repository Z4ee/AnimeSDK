#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;

#define MOLEMOLE_UILEVELRESULTV2_VR_PAGECONTROLLER___C__DISPLAYCLASS10_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14D33BD0)
#define MOLEMOLE_UILEVELRESULTV2_VR_PAGECONTROLLER___C__DISPLAYCLASS10_1__REFRESHFAIRYBTNSTATE_B__18_OFFSET UNITYSDK_OFFSET(0x14D33BE0)
#define MOLEMOLE_UILEVELRESULTV2_VR_PAGECONTROLLER___C__DISPLAYCLASS10_1__REFRESHFAIRYBTNSTATE_B__19_OFFSET UNITYSDK_OFFSET(0x14D33C10)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultV2_VR_PageController___c__DisplayClass10_1_TypeDefinitionIndex = 63398;

	class UILevelResultV2_VR_PageController___c__DisplayClass10_1 : public ::System::Object
	{
	public:
		::System::Int32 materialItemId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_VR_PAGECONTROLLER___C__DISPLAYCLASS10_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshFairyBtnState_b__18(::Class_1_1685EC66FBD28897* reward)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_1685EC66FBD28897*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_VR_PAGECONTROLLER___C__DISPLAYCLASS10_1__REFRESHFAIRYBTNSTATE_B__18_OFFSET))(this, reward);
		}

		::System::Boolean _RefreshFairyBtnState_b__19(::Class_1_1685EC66FBD28897* reward)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_1685EC66FBD28897*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_VR_PAGECONTROLLER___C__DISPLAYCLASS10_1__REFRESHFAIRYBTNSTATE_B__19_OFFSET))(this, reward);
		}
	};
}

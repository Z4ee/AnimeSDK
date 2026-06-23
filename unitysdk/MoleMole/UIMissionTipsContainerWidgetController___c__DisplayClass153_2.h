#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController___c__DisplayClass153_0; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS153_2__CTOR_OFFSET UNITYSDK_OFFSET(0x152FAB80)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS153_2__PLAYRECOMMENDTRACK_B__5_OFFSET UNITYSDK_OFFSET(0x152FB330)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS153_2__PLAYRECOMMENDTRACK_B__6_OFFSET UNITYSDK_OFFSET(0x152FB820)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass153_2_TypeDefinitionIndex = 69629;

	class UIMissionTipsContainerWidgetController___c__DisplayClass153_2 : public ::System::Object
	{
	public:
		::MoleMole::UIMissionTipsContainerWidgetController___c__DisplayClass153_0* CS___8__locals2; // 0x10
		::System::Action* __9__6; // 0x18
		::System::Single recommendDelay; // 0x20
		::System::Single height; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS153_2__CTOR_OFFSET))(this);
		}

		::System::Void _PlayRecommendTrack_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS153_2__PLAYRECOMMENDTRACK_B__5_OFFSET))(this);
		}

		::System::Void _PlayRecommendTrack_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS153_2__PLAYRECOMMENDTRACK_B__6_OFFSET))(this);
		}
	};
}

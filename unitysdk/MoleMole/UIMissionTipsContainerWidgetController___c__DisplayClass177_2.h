#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController___c__DisplayClass177_0; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS177_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15163F40)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS177_2__PLAYRECOMMENDTRACK_B__5_OFFSET UNITYSDK_OFFSET(0x151646F0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS177_2__PLAYRECOMMENDTRACK_B__6_OFFSET UNITYSDK_OFFSET(0x15164BE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass177_2_TypeDefinitionIndex = 91221;

	class UIMissionTipsContainerWidgetController___c__DisplayClass177_2 : public ::System::Object
	{
	public:
		::System::Action* __9__6; // 0x10
		::MoleMole::UIMissionTipsContainerWidgetController___c__DisplayClass177_0* CS___8__locals2; // 0x18
		::System::Single recommendDelay; // 0x20
		::System::Single height; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS177_2__CTOR_OFFSET))(this);
		}

		::System::Void _PlayRecommendTrack_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS177_2__PLAYRECOMMENDTRACK_B__5_OFFSET))(this);
		}

		::System::Void _PlayRecommendTrack_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS177_2__PLAYRECOMMENDTRACK_B__6_OFFSET))(this);
		}
	};
}

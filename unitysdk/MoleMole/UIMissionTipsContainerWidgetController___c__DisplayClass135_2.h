#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController___c__DisplayClass135_0; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS135_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC8F10)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS135_2__PLAYRECOMMENDTRACK_B__5_OFFSET UNITYSDK_OFFSET(0x15DC96C0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS135_2__PLAYRECOMMENDTRACK_B__6_OFFSET UNITYSDK_OFFSET(0x15DC9BB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass135_2_TypeDefinitionIndex = 55067;

	class UIMissionTipsContainerWidgetController___c__DisplayClass135_2 : public ::System::Object
	{
	public:
		::System::Action* __9__6; // 0x10
		::MoleMole::UIMissionTipsContainerWidgetController___c__DisplayClass135_0* CS___8__locals2; // 0x18
		::System::Single recommendDelay; // 0x20
		::System::Single height; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS135_2__CTOR_OFFSET))(this);
		}

		::System::Void _PlayRecommendTrack_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS135_2__PLAYRECOMMENDTRACK_B__5_OFFSET))(this);
		}

		::System::Void _PlayRecommendTrack_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS135_2__PLAYRECOMMENDTRACK_B__6_OFFSET))(this);
		}
	};
}

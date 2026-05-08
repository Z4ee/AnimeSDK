#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController___c__DisplayClass135_0; }
namespace MoleMole { class UIMissionTipsRowMultiWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS135_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC9540)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS135_1__PLAYRECOMMENDTRACK_B__3_OFFSET UNITYSDK_OFFSET(0x15DC9550)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS135_1__PLAYRECOMMENDTRACK_B__4_OFFSET UNITYSDK_OFFSET(0x15DC9660)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass135_1_TypeDefinitionIndex = 55068;

	class UIMissionTipsContainerWidgetController___c__DisplayClass135_1 : public ::System::Object
	{
	public:
		::MoleMole::UIMissionTipsRowMultiWidgetController* widget; // 0x10
		::System::Action* __9__4; // 0x18
		::MoleMole::UIMissionTipsContainerWidgetController___c__DisplayClass135_0* CS___8__locals1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS135_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayRecommendTrack_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS135_1__PLAYRECOMMENDTRACK_B__3_OFFSET))(this);
		}

		::System::Void _PlayRecommendTrack_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS135_1__PLAYRECOMMENDTRACK_B__4_OFFSET))(this);
		}
	};
}

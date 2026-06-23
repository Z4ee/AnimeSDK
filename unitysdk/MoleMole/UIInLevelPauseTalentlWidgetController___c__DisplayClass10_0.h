#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_573;

#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1571D890)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER___C__DISPLAYCLASS10_0__REFRESHAVATARTALENTINFO_B__0_OFFSET UNITYSDK_OFFSET(0x1571D8A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseTalentlWidgetController___c__DisplayClass10_0_TypeDefinitionIndex = 62259;

	class UIInLevelPauseTalentlWidgetController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::Int32 i; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshAvatarTalentInfo_b__0(::Class_2_208CC9941471731A_573* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_573*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER___C__DISPLAYCLASS10_0__REFRESHAVATARTALENTINFO_B__0_OFFSET))(this, o);
		}
	};
}

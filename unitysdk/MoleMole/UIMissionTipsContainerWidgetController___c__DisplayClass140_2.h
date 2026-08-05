#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS140_2__CTOR_OFFSET UNITYSDK_OFFSET(0x179659B0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS140_2__PLAYZENKOVTIP_B__3_OFFSET UNITYSDK_OFFSET(0x179659C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass140_2_TypeDefinitionIndex = 91214;

	class UIMissionTipsContainerWidgetController___c__DisplayClass140_2 : public ::System::Object
	{
	public:
		::System::Int32 capturedQuestId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS140_2__CTOR_OFFSET))(this);
		}

		::System::String* _PlayZenkovTip_b__3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS140_2__PLAYZENKOVTIP_B__3_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_32.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_729;

#define MOLEMOLE_UICAMPIDLEREWARDDIALOGPOPWINDOWCONTROLLER_CAMPIDLEPROGRESSREWARDTEMPLATEEXTWITHPLAYTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x170A90E0)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdleRewardDialogPopWindowController_CampIdleProgressRewardTemplateExtWithPlayType_TypeDefinitionIndex = 84538;

	class UICampIdleRewardDialogPopWindowController_CampIdleProgressRewardTemplateExtWithPlayType : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_729* m_quest; // 0x10
		::Enum_3_0A3761FE34514D6C_32 m_playType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEREWARDDIALOGPOPWINDOWCONTROLLER_CAMPIDLEPROGRESSREWARDTEMPLATEEXTWITHPLAYTYPE__CTOR_OFFSET))(this);
		}
	};
}

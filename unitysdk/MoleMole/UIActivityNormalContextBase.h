#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_43BD383C98B4C0C5_57;
namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYNORMALCONTEXTBASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x192DDD80)
#define MOLEMOLE_UIACTIVITYNORMALCONTEXTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x192DDE40)
#define MOLEMOLE_UIACTIVITYNORMALCONTEXTBASE___BASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x192DDEA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityNormalContextBase_TypeDefinitionIndex = 44598;

	class UIActivityNormalContextBase : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnCloseAction; // 0x28
		::Class_1_43BD383C98B4C0C5_57* widgetPageData; // 0x30
		::System::Int32 ActivityID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYNORMALCONTEXTBASE__CTOR_OFFSET))(this);
		}

		::System::Void ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYNORMALCONTEXTBASE_APPLYJUMPPARAS_OFFSET))(this);
		}

		::System::Void __base_ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYNORMALCONTEXTBASE___BASE_APPLYJUMPPARAS_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_43BD383C98B4C0C5_64;
namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYNORMALCONTEXTBASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x15B7F5A0)
#define MOLEMOLE_UIACTIVITYNORMALCONTEXTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B7F660)
#define MOLEMOLE_UIACTIVITYNORMALCONTEXTBASE___BASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x15B7F670)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityNormalContextBase_TypeDefinitionIndex = 47633;

	class UIActivityNormalContextBase : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_43BD383C98B4C0C5_64* widgetPageData; // 0x28
		::System::Action* OnCloseAction; // 0x30
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

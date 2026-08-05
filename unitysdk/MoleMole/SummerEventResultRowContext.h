#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UISummerEventResultRowNewWidgetController; }
namespace System { class String; }

#define MOLEMOLE_SUMMEREVENTRESULTROWCONTEXT_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x180A15D0)
#define MOLEMOLE_SUMMEREVENTRESULTROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x180A1640)

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventResultRowContext_TypeDefinitionIndex = 91000;

	class SummerEventResultRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* _title; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTROWCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UISummerEventResultRowNewWidgetController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISummerEventResultRowNewWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTROWCONTEXT_ONUIOPEN_OFFSET))(this, controller);
		}
	};
}

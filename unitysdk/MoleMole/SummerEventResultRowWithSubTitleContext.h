#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SummerEventResultRowContext.h"

namespace MoleMole { class UISummerEventResultRowNewWidgetController; }
namespace System { class String; }

#define MOLEMOLE_SUMMEREVENTRESULTROWWITHSUBTITLECONTEXT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x129DAB30)
#define MOLEMOLE_SUMMEREVENTRESULTROWWITHSUBTITLECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x129DABE0)

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventResultRowWithSubTitleContext_TypeDefinitionIndex = 52962;

	class SummerEventResultRowWithSubTitleContext : public ::MoleMole::SummerEventResultRowContext
	{
	public:
		::System::String* _subTitle; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTROWWITHSUBTITLECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::MoleMole::UISummerEventResultRowNewWidgetController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISummerEventResultRowNewWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTROWWITHSUBTITLECONTEXT_INITIALIZE_OFFSET))(this, controller);
		}
	};
}

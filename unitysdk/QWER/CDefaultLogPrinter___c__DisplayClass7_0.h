#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/QWER/ELogLevel.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define QWER_CDEFAULTLOGPRINTER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE86E40)
#define QWER_CDEFAULTLOGPRINTER___C__DISPLAYCLASS7_0__QWER_ILOGPRINTER_PRINT_G__TMP_0_OFFSET UNITYSDK_OFFSET(0x1BE86EA0)

namespace QWER
{
	inline static constexpr unsigned int CDefaultLogPrinter___c__DisplayClass7_0_TypeDefinitionIndex = 85844;

	class CDefaultLogPrinter___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::String* strLog; // 0x10
		::QWER::ELogLevel eLogLevel; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CDEFAULTLOGPRINTER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _QWER_ILogPrinter_Print_g__tmp_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CDEFAULTLOGPRINTER___C__DISPLAYCLASS7_0__QWER_ILOGPRINTER_PRINT_G__TMP_0_OFFSET))(this);
		}
	};
}

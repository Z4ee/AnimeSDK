#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/QWER/STask.h"
#include "unitysdk/System/Object.h"

#define QWER_CDEFAULTLOGPRINTER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE86A90)
#define QWER_CDEFAULTLOGPRINTER___C__DISPLAYCLASS6_0__QWER_ILOGPRINTER_FLUSH_G__TMP_0_OFFSET UNITYSDK_OFFSET(0x1BE86E50)

namespace QWER
{
	inline static constexpr unsigned int CDefaultLogPrinter___c__DisplayClass6_0_TypeDefinitionIndex = 85843;

	class CDefaultLogPrinter___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::QWER::STask sTask; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CDEFAULTLOGPRINTER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _QWER_ILogPrinter_Flush_g__tmp_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CDEFAULTLOGPRINTER___C__DISPLAYCLASS6_0__QWER_ILOGPRINTER_FLUSH_G__TMP_0_OFFSET))(this);
		}
	};
}

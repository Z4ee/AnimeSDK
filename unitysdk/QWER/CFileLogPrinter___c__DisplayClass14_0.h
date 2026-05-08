#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/QWER/STask.h"
#include "unitysdk/System/Object.h"

#define QWER_CFILELOGPRINTER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE87B80)
#define QWER_CFILELOGPRINTER___C__DISPLAYCLASS14_0__QWER_ILOGPRINTER_FLUSH_G__TMP_0_OFFSET UNITYSDK_OFFSET(0x1BE87D70)

namespace QWER
{
	inline static constexpr unsigned int CFileLogPrinter___c__DisplayClass14_0_TypeDefinitionIndex = 85846;

	class CFileLogPrinter___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::QWER::STask sTask; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CFILELOGPRINTER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _QWER_ILogPrinter_Flush_g__tmp_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CFILELOGPRINTER___C__DISPLAYCLASS14_0__QWER_ILOGPRINTER_FLUSH_G__TMP_0_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace QWER { class CFileLogPrinter; }
namespace System { class String; }

#define QWER_CFILELOGPRINTER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE87C30)
#define QWER_CFILELOGPRINTER___C__DISPLAYCLASS15_0__QWER_ILOGPRINTER_PRINT_G__TMP_0_OFFSET UNITYSDK_OFFSET(0x1BE87DC0)

namespace QWER
{
	inline static constexpr unsigned int CFileLogPrinter___c__DisplayClass15_0_TypeDefinitionIndex = 85847;

	class CFileLogPrinter___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::QWER::CFileLogPrinter* __4__this; // 0x10
		::System::String* strLog; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CFILELOGPRINTER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _QWER_ILogPrinter_Print_g__tmp_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CFILELOGPRINTER___C__DISPLAYCLASS15_0__QWER_ILOGPRINTER_PRINT_G__TMP_0_OFFSET))(this);
		}
	};
}

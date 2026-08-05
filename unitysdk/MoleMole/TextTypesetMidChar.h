#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_46FE3E575CBDB25A.h"
#include "unitysdk/Enum_3_9EC1CFDD7792E6D7.h"
#include "unitysdk/Enum_3_B9D410A88C7ECFCB.h"
#include "unitysdk/Enum_3_CB5966CFB05E0792.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_TEXTTYPESETMIDCHAR_GET__PRASEDTOKEN_OFFSET UNITYSDK_OFFSET(0x884170)
#define MOLEMOLE_TEXTTYPESETMIDCHAR_METHOD_2_BF508D80265F8A02_OFFSET UNITYSDK_OFFSET(0x884180)

namespace MoleMole
{
	inline static constexpr unsigned int TextTypesetMidChar_TypeDefinitionIndex = 79154;

	struct alignas(8) TextTypesetMidChar
	{
		::System::String* Token; // 0x10
		::Enum_3_9EC1CFDD7792E6D7 Type; // 0x18
		::Enum_3_B9D410A88C7ECFCB Direction; // 0x1A
		::Enum_3_CB5966CFB05E0792 BreakType; // 0x1C

		::System::String* get__prasedToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTTYPESETMIDCHAR_GET__PRASEDTOKEN_OFFSET))(this);
		}

		::Enum_3_46FE3E575CBDB25A Method_2_BF508D80265F8A02()
		{
			return ((::Enum_3_46FE3E575CBDB25A(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTTYPESETMIDCHAR_METHOD_2_BF508D80265F8A02_OFFSET))(this);
		}
	};
}

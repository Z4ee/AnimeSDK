#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_72493A19B112705C.h"
#include "unitysdk/Enum_3_CF6069113B9F5B89.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_273;
namespace System { class String; }

#define MOLEMOLE_REFEXPRESSIONVALUE_METHOD_1_093A9622A7874D01_OFFSET UNITYSDK_OFFSET(0x191B2840)
#define MOLEMOLE_REFEXPRESSIONVALUE_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x191B2970)
#define MOLEMOLE_REFEXPRESSIONVALUE_METHOD_1_49AC00594530B714_OFFSET UNITYSDK_OFFSET(0x191B2800)
#define MOLEMOLE_REFEXPRESSIONVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x191B27F0)

namespace MoleMole
{
	inline static constexpr unsigned int RefExpressionValue_TypeDefinitionIndex = 67716;

	class RefExpressionValue : public ::System::Object
	{
	public:
		::System::String* RefName; // 0x10
		::Enum_3_72493A19B112705C ExpressionRetValType; // 0x18

		::System::Void _ctor(::System::String* a1, ::Enum_3_72493A19B112705C a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_72493A19B112705C))((::PBYTE)hIl2Cpp + MOLEMOLE_REFEXPRESSIONVALUE__CTOR_OFFSET))(this, a1, a2);
		}

		::Enum_3_CF6069113B9F5B89 Method_1_49AC00594530B714()
		{
			return ((::Enum_3_CF6069113B9F5B89(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REFEXPRESSIONVALUE_METHOD_1_49AC00594530B714_OFFSET))(this);
		}

		::Struct_2_A47ACAABA9AAFE92 Method_1_093A9622A7874D01(::Class_0_16E4307DCC419505_273* a1)
		{
			return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID, ::Class_0_16E4307DCC419505_273*))((::PBYTE)hIl2Cpp + MOLEMOLE_REFEXPRESSIONVALUE_METHOD_1_093A9622A7874D01_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REFEXPRESSIONVALUE_METHOD_1_391A84BCD9F51317_OFFSET))(this);
		}
	};
}

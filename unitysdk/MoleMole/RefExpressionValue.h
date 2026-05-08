#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_72493A19B112705C.h"
#include "unitysdk/Enum_3_CF6069113B9F5B89.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_212;
namespace System { class String; }

#define MOLEMOLE_REFEXPRESSIONVALUE_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x15E54C60)
#define MOLEMOLE_REFEXPRESSIONVALUE_METHOD_1_49AC00594530B714_OFFSET UNITYSDK_OFFSET(0x15E54AF0)
#define MOLEMOLE_REFEXPRESSIONVALUE_METHOD_1_79AB2D796DCCB2A4_OFFSET UNITYSDK_OFFSET(0x15E54B30)
#define MOLEMOLE_REFEXPRESSIONVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x15E54AE0)

namespace MoleMole
{
	inline static constexpr unsigned int RefExpressionValue_TypeDefinitionIndex = 78506;

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

		::Struct_2_A47ACAABA9AAFE92 Method_1_79AB2D796DCCB2A4(::Class_0_16E4307DCC419505_212* a1)
		{
			return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID, ::Class_0_16E4307DCC419505_212*))((::PBYTE)hIl2Cpp + MOLEMOLE_REFEXPRESSIONVALUE_METHOD_1_79AB2D796DCCB2A4_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REFEXPRESSIONVALUE_METHOD_1_391A84BCD9F51317_OFFSET))(this);
		}
	};
}

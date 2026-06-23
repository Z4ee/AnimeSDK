#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CF6069113B9F5B89.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_263;
class Class_0_16E4307DCC419505_310;

#define MOLEMOLE_CONDITIONEXPRESSION_METHOD_1_2656EF487D9EA536_OFFSET UNITYSDK_OFFSET(0x170306E0)
#define MOLEMOLE_CONDITIONEXPRESSION_METHOD_1_49AC00594530B714_OFFSET UNITYSDK_OFFSET(0x170306A0)
#define MOLEMOLE_CONDITIONEXPRESSION_METHOD_1_E4EC0FD7A76783C9_OFFSET UNITYSDK_OFFSET(0x17030940)
#define MOLEMOLE_CONDITIONEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17030690)
#define MOLEMOLE_CONDITIONEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x17030680)

namespace MoleMole
{
	inline static constexpr unsigned int ConditionExpression_TypeDefinitionIndex = 81892;

	class ConditionExpression : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_310* Condition; // 0x10
		::System::Boolean isNot; // 0x18

		::System::Void _ctor(::Class_0_16E4307DCC419505_310* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_310*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONDITIONEXPRESSION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONDITIONEXPRESSION__CTOR_1_OFFSET))(this);
		}

		::Enum_3_CF6069113B9F5B89 Method_1_49AC00594530B714()
		{
			return ((::Enum_3_CF6069113B9F5B89(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONDITIONEXPRESSION_METHOD_1_49AC00594530B714_OFFSET))(this);
		}

		::Struct_2_A47ACAABA9AAFE92 Method_1_2656EF487D9EA536(::Class_0_16E4307DCC419505_263* a1)
		{
			return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID, ::Class_0_16E4307DCC419505_263*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONDITIONEXPRESSION_METHOD_1_2656EF487D9EA536_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_E4EC0FD7A76783C9()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONDITIONEXPRESSION_METHOD_1_E4EC0FD7A76783C9_OFFSET))(this);
		}
	};
}

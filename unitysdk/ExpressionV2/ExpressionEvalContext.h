#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_167BB37617B940E3;
class Class_3_F97B015544BE936B;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EXPRESSIONV2_EXPRESSIONEVALCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA20790)

namespace ExpressionV2
{
	inline static constexpr unsigned int ExpressionEvalContext_TypeDefinitionIndex = 40114;

	class ExpressionEvalContext : public ::System::Object
	{
	public:
		::Class_3_F97B015544BE936B* dataComponent; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* propertyMap; // 0x18
		::Class_2_167BB37617B940E3* abilityParam; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONEVALCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class LambdaExpression; }

#define CLASS_1_0AAFA14644E32740_METHOD_1_49C0E2E019F6C421_OFFSET UNITYSDK_OFFSET(0x1D0DEA90)
#define CLASS_1_0AAFA14644E32740_METHOD_1_C15D32775D5F64E6_OFFSET UNITYSDK_OFFSET(0x1D0DECF0)

inline static constexpr unsigned int Class_1_0AAFA14644E32740_TypeDefinitionIndex = 41420;

class Class_1_0AAFA14644E32740 : public ::System::Object
{
public:
	static ::System::String* Method_1_49C0E2E019F6C421(::System::Linq::Expressions::LambdaExpression* a1)
	{
		return ((::System::String*(*)(::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + CLASS_1_0AAFA14644E32740_METHOD_1_49C0E2E019F6C421_OFFSET))(a1);
	}

	static ::System::String* Method_1_C15D32775D5F64E6(::System::Linq::Expressions::Expression* a1)
	{
		return ((::System::String*(*)(::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + CLASS_1_0AAFA14644E32740_METHOD_1_C15D32775D5F64E6_OFFSET))(a1);
	}
};

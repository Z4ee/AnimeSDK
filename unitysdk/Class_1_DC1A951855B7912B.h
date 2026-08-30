#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class LambdaExpression; }

#define CLASS_1_DC1A951855B7912B_METHOD_1_1C4E4154A7B84A78_OFFSET UNITYSDK_OFFSET(0x1E75FFE0)
#define CLASS_1_DC1A951855B7912B_METHOD_1_C15D32775D5F64E6_OFFSET UNITYSDK_OFFSET(0x1E760060)

inline static constexpr unsigned int Class_1_DC1A951855B7912B_TypeDefinitionIndex = 42380;

class Class_1_DC1A951855B7912B : public ::System::Object
{
public:
	static ::System::String* Method_1_1C4E4154A7B84A78(::System::Linq::Expressions::LambdaExpression* a1)
	{
		return ((::System::String*(*)(::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + CLASS_1_DC1A951855B7912B_METHOD_1_1C4E4154A7B84A78_OFFSET))(a1);
	}

	static ::System::String* Method_1_C15D32775D5F64E6(::System::Linq::Expressions::Expression* a1)
	{
		return ((::System::String*(*)(::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + CLASS_1_DC1A951855B7912B_METHOD_1_C15D32775D5F64E6_OFFSET))(a1);
	}
};

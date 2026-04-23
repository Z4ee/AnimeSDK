#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class LambdaExpression; }

#define CLASS_1_85C06F0C6DFAA0A6_METHOD_1_7D1B157B81254E28_OFFSET UNITYSDK_OFFSET(0x19DC3B70)
#define CLASS_1_85C06F0C6DFAA0A6_METHOD_1_FD8510BA2ADFE3A2_OFFSET UNITYSDK_OFFSET(0x19DC3C10)

inline static constexpr unsigned int Class_1_85C06F0C6DFAA0A6_TypeDefinitionIndex = 39779;

class Class_1_85C06F0C6DFAA0A6 : public ::System::Object
{
public:
	static ::System::String* Method_1_7D1B157B81254E28(::System::Linq::Expressions::LambdaExpression* a1)
	{
		return ((::System::String*(*)(::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + CLASS_1_85C06F0C6DFAA0A6_METHOD_1_7D1B157B81254E28_OFFSET))(a1);
	}

	static ::System::String* Method_1_FD8510BA2ADFE3A2(::System::Linq::Expressions::Expression* a1)
	{
		return ((::System::String*(*)(::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + CLASS_1_85C06F0C6DFAA0A6_METHOD_1_FD8510BA2ADFE3A2_OFFSET))(a1);
	}
};

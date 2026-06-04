#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class LambdaExpression; }

#define CLASS_1_40B681CA22C27B2E_METHOD_1_58E938EE8AE30403_OFFSET UNITYSDK_OFFSET(0x1AC2DE20)
#define CLASS_1_40B681CA22C27B2E_METHOD_1_AABA3027B4DB897C_OFFSET UNITYSDK_OFFSET(0x1AC2E080)

inline static constexpr unsigned int Class_1_40B681CA22C27B2E_TypeDefinitionIndex = 40605;

class Class_1_40B681CA22C27B2E : public ::System::Object
{
public:
	static ::System::String* Method_1_58E938EE8AE30403(::System::Linq::Expressions::LambdaExpression* a1)
	{
		return ((::System::String*(*)(::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + CLASS_1_40B681CA22C27B2E_METHOD_1_58E938EE8AE30403_OFFSET))(a1);
	}

	static ::System::String* Method_1_AABA3027B4DB897C(::System::Linq::Expressions::Expression* a1)
	{
		return ((::System::String*(*)(::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + CLASS_1_40B681CA22C27B2E_METHOD_1_AABA3027B4DB897C_OFFSET))(a1);
	}
};

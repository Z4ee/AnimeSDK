#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Linq::Expressions { class LambdaExpression; }
namespace System::Linq::Expressions { template <typename T> class Expression_1; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class PropertyInfo; }

#define MESSAGEPACK_INTERNAL_EXPRESSIONUTILITY_GETMETHODINFOCORE_OFFSET UNITYSDK_OFFSET(0x166A58E0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ExpressionUtility_TypeDefinitionIndex = 7238;

	class ExpressionUtility : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo* GetMethodInfoCore(::System::Linq::Expressions::LambdaExpression* a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_EXPRESSIONUTILITY_GETMETHODINFOCORE_OFFSET))(a1);
		}
	};
}

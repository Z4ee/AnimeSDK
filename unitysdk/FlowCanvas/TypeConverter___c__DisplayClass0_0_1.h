#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueHandler_1; }
namespace System { class Type; }
namespace System::Linq::Expressions { class UnaryExpression; }

namespace FlowCanvas
{
	inline static constexpr unsigned int TypeConverter___c__DisplayClass0_0_1_TypeDefinitionIndex = 29448;

	template <typename T>
	class TypeConverter___c__DisplayClass0_0_1 : public ::System::Object
	{
	public:
		::FlowCanvas::ValueHandler_1<::System::Object*>* func; // 0x0
		::System::Type* targetType; // 0x0
		::System::Linq::Expressions::UnaryExpression* exp; // 0x0
	};
}

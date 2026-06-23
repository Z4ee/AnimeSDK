#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Variable.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Reflection { class MemberInfo; }
namespace UnityEngine { class GameObject; }

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Variable_1_TypeDefinitionIndex = 30043;

	template <typename T>
	class Variable_1 : public ::NodeCanvas::Framework::Variable
	{
	public:
		T _value; // 0x0
		::System::String* _propertyPath; // 0x0
		::System::Func_1<T>* getter; // 0x0
		::System::Action_1<T>* setter; // 0x0
	};
}

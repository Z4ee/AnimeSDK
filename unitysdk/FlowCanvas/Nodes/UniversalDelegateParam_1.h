#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/UniversalDelegateParam.h"

namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class Action; }
namespace System { class Delegate; }
namespace System { class Object; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Reflection { class FieldInfo; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int UniversalDelegateParam_1_TypeDefinitionIndex = 27891;

	template <typename T>
	class UniversalDelegateParam_1 : public ::FlowCanvas::Nodes::UniversalDelegateParam
	{
	public:
		T value; // 0x0
		::FlowCanvas::ValueInput_1<T>* valueInput; // 0x0
		static ::System::Reflection::FieldInfo** StaticGet__fieldInfo()
		{
			return (::System::Reflection::FieldInfo**)Il2CppClass::FromTypeDefinitionIndex(UniversalDelegateParam_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

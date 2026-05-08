#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class Task; }
namespace ParadoxNotion::Serialization::FullSerializer { class fsData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS229_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B422F90)
#define NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS229_0__GETTASKSINELEMENT_B__0_OFFSET UNITYSDK_OFFSET(0x1B422FA0)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Graph___c__DisplayClass229_0_TypeDefinitionIndex = 27749;

	class Graph___c__DisplayClass229_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NodeCanvas::Framework::Task*>* result; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS229_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetTasksInElement_b__0(::System::Object* o, ::ParadoxNotion::Serialization::FullSerializer::fsData* d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::ParadoxNotion::Serialization::FullSerializer::fsData*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS229_0__GETTASKSINELEMENT_B__0_OFFSET))(this, o, d);
		}
	};
}

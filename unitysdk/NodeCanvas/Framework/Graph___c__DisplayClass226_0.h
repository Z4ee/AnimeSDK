#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ParadoxNotion { class HierarchyTree_Element; }
namespace ParadoxNotion::Serialization::FullSerializer { class fsData; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS226_0__COLLECTSUBELEMENTS_B__0_OFFSET UNITYSDK_OFFSET(0x1D539380)
#define NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS226_0__COLLECTSUBELEMENTS_B__1_OFFSET UNITYSDK_OFFSET(0x1D539440)
#define NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS226_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D539370)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Graph___c__DisplayClass226_0_TypeDefinitionIndex = 29269;

	class Graph___c__DisplayClass226_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<::ParadoxNotion::HierarchyTree_Element*>* stack; // 0x10
		::ParadoxNotion::HierarchyTree_Element* parentElement; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS226_0__CTOR_OFFSET))(this);
		}

		::System::Void _CollectSubElements_b__0(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS226_0__COLLECTSUBELEMENTS_B__0_OFFSET))(this, o);
		}

		::System::Void _CollectSubElements_b__1(::System::Object* o, ::ParadoxNotion::Serialization::FullSerializer::fsData* d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::ParadoxNotion::Serialization::FullSerializer::fsData*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS226_0__COLLECTSUBELEMENTS_B__1_OFFSET))(this, o, d);
		}
	};
}

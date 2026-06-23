#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class SwitchInt; }
namespace NodeCanvas::Framework { class Graph; }
namespace NodeCanvas::Framework { class Node; }
namespace ParadoxNotion { class HierarchyTree_Element; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define CLASS_1_345A456E01F0BD3E_METHOD_1_6C23EB6C010C74F9_OFFSET UNITYSDK_OFFSET(0x10594400)
#define CLASS_1_345A456E01F0BD3E_METHOD_1_A193B7747EEB6CCF_OFFSET UNITYSDK_OFFSET(0x10595490)
#define CLASS_1_345A456E01F0BD3E_METHOD_1_A20191DA6C8278F5_OFFSET UNITYSDK_OFFSET(0x10594EE0)
#define CLASS_1_345A456E01F0BD3E_METHOD_1_D8FF484005D5E012_OFFSET UNITYSDK_OFFSET(0x10595620)
#define CLASS_1_345A456E01F0BD3E_METHOD_1_F430D6393897B47D_OFFSET UNITYSDK_OFFSET(0x10594250)

inline static constexpr unsigned int Class_1_345A456E01F0BD3E_TypeDefinitionIndex = 65180;

class Class_1_345A456E01F0BD3E : public ::System::Object
{
public:
	static ::System::Int32 Method_1_F430D6393897B47D(::NodeCanvas::Framework::Node* a1)
	{
		return ((::System::Int32(*)(::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + CLASS_1_345A456E01F0BD3E_METHOD_1_F430D6393897B47D_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_6C23EB6C010C74F9(::ParadoxNotion::HierarchyTree_Element* a1, ::NodeCanvas::Framework::Node* a2)
	{
		return ((::System::Int32(*)(::ParadoxNotion::HierarchyTree_Element*, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + CLASS_1_345A456E01F0BD3E_METHOD_1_6C23EB6C010C74F9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A20191DA6C8278F5(::System::Collections::Generic::HashSet_1<::NodeCanvas::Framework::Node*>*& a1, ::FlowCanvas::Nodes::SwitchInt* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::NodeCanvas::Framework::Node*>*&, ::FlowCanvas::Nodes::SwitchInt*))((::PBYTE)hIl2Cpp + CLASS_1_345A456E01F0BD3E_METHOD_1_A20191DA6C8278F5_OFFSET))(a1, a2);
	}

	static ::System::Threading::Tasks::Task_1<::System::Int32>* Method_1_A193B7747EEB6CCF(::NodeCanvas::Framework::Graph* a1, ::NodeCanvas::Framework::Node* a2)
	{
		return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::NodeCanvas::Framework::Graph*, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + CLASS_1_345A456E01F0BD3E_METHOD_1_A193B7747EEB6CCF_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_D8FF484005D5E012(::NodeCanvas::Framework::Graph* a1, ::NodeCanvas::Framework::Node* a2)
	{
		return ((::System::Int32(*)(::NodeCanvas::Framework::Graph*, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + CLASS_1_345A456E01F0BD3E_METHOD_1_D8FF484005D5E012_OFFSET))(a1, a2);
	}
};

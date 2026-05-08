#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { class Node; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NODECANVAS_FRAMEWORK_GRAPH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A9011F0)
#define NODECANVAS_FRAMEWORK_GRAPH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A901230)
#define NODECANVAS_FRAMEWORK_GRAPH___C__GETDEFINEDPARAMETERS_B__218_0_OFFSET UNITYSDK_OFFSET(0x1A9012E0)
#define NODECANVAS_FRAMEWORK_GRAPH___C__GETLEAFNODES_B__215_0_OFFSET UNITYSDK_OFFSET(0x1A9012B0)
#define NODECANVAS_FRAMEWORK_GRAPH___C__GETROOTNODES_B__214_0_OFFSET UNITYSDK_OFFSET(0x1A901280)
#define NODECANVAS_FRAMEWORK_GRAPH___C__UPDATENODEIDS_B__172_0_OFFSET UNITYSDK_OFFSET(0x1A901240)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Graph___c_TypeDefinitionIndex = 27754;

	class Graph___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::NodeCanvas::Framework::Node*, ::System::Boolean>** StaticGet___9__214_0()
		{
			return (::System::Func_2<::NodeCanvas::Framework::Node*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Graph___c_TypeDefinitionIndex)->GetStaticField(0x1FDD0);
		}
		static ::System::Func_2<::NodeCanvas::Framework::Node*, ::System::Int32>** StaticGet___9__172_0()
		{
			return (::System::Func_2<::NodeCanvas::Framework::Node*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Graph___c_TypeDefinitionIndex)->GetStaticField(0x1FDD8);
		}
		static ::NodeCanvas::Framework::Graph___c** StaticGet___9()
		{
			return (::NodeCanvas::Framework::Graph___c**)Il2CppClass::FromTypeDefinitionIndex(Graph___c_TypeDefinitionIndex)->GetStaticField(0x1FDE0);
		}
		static ::System::Func_2<::NodeCanvas::Framework::Node*, ::System::Boolean>** StaticGet___9__215_0()
		{
			return (::System::Func_2<::NodeCanvas::Framework::Node*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Graph___c_TypeDefinitionIndex)->GetStaticField(0x1FDE8);
		}
		static ::System::Func_2<::NodeCanvas::Framework::BBParameter*, ::System::Boolean>** StaticGet___9__218_0()
		{
			return (::System::Func_2<::NodeCanvas::Framework::BBParameter*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Graph___c_TypeDefinitionIndex)->GetStaticField(0x1FDF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _UpdateNodeIDs_b__172_0(::NodeCanvas::Framework::Node* n)
		{
			return ((::System::Int32(*)(::PVOID, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH___C__UPDATENODEIDS_B__172_0_OFFSET))(this, n);
		}

		::System::Boolean _GetRootNodes_b__214_0(::NodeCanvas::Framework::Node* n)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH___C__GETROOTNODES_B__214_0_OFFSET))(this, n);
		}

		::System::Boolean _GetLeafNodes_b__215_0(::NodeCanvas::Framework::Node* n)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH___C__GETLEAFNODES_B__215_0_OFFSET))(this, n);
		}

		::System::Boolean _GetDefinedParameters_b__218_0(::NodeCanvas::Framework::BBParameter* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeCanvas::Framework::BBParameter*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH___C__GETDEFINEDPARAMETERS_B__218_0_OFFSET))(this, p);
		}
	};
}

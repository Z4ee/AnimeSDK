#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class Connection; }
namespace NodeCanvas::Framework { class Node; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NODECANVAS_FRAMEWORK_NODE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC489C0)
#define NODECANVAS_FRAMEWORK_NODE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC48A00)
#define NODECANVAS_FRAMEWORK_NODE___C__GETCHILDNODES_B__112_0_OFFSET UNITYSDK_OFFSET(0x1CC48A30)
#define NODECANVAS_FRAMEWORK_NODE___C__GETPARENTNODES_B__111_0_OFFSET UNITYSDK_OFFSET(0x1CC48A10)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Node___c_TypeDefinitionIndex = 29351;

	class Node___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::NodeCanvas::Framework::Connection*, ::NodeCanvas::Framework::Node*>** StaticGet___9__111_0()
		{
			return (::System::Func_2<::NodeCanvas::Framework::Connection*, ::NodeCanvas::Framework::Node*>**)Il2CppClass::FromTypeDefinitionIndex(Node___c_TypeDefinitionIndex)->GetStaticField(0x23E30);
		}
		static ::NodeCanvas::Framework::Node___c** StaticGet___9()
		{
			return (::NodeCanvas::Framework::Node___c**)Il2CppClass::FromTypeDefinitionIndex(Node___c_TypeDefinitionIndex)->GetStaticField(0x23E38);
		}
		static ::System::Func_2<::NodeCanvas::Framework::Connection*, ::NodeCanvas::Framework::Node*>** StaticGet___9__112_0()
		{
			return (::System::Func_2<::NodeCanvas::Framework::Connection*, ::NodeCanvas::Framework::Node*>**)Il2CppClass::FromTypeDefinitionIndex(Node___c_TypeDefinitionIndex)->GetStaticField(0x23E40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE___C__CTOR_OFFSET))(this);
		}

		::NodeCanvas::Framework::Node* _GetParentNodes_b__111_0(::NodeCanvas::Framework::Connection* c)
		{
			return ((::NodeCanvas::Framework::Node*(*)(::PVOID, ::NodeCanvas::Framework::Connection*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE___C__GETPARENTNODES_B__111_0_OFFSET))(this, c);
		}

		::NodeCanvas::Framework::Node* _GetChildNodes_b__112_0(::NodeCanvas::Framework::Connection* c)
		{
			return ((::NodeCanvas::Framework::Node*(*)(::PVOID, ::NodeCanvas::Framework::Connection*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE___C__GETCHILDNODES_B__112_0_OFFSET))(this, c);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class IUpdatable; }
namespace NodeCanvas::Framework { class Node; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NODECANVAS_STATEMACHINES_FSM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D40F2A0)
#define NODECANVAS_STATEMACHINES_FSM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D40F2E0)
#define NODECANVAS_STATEMACHINES_FSM___C__GETSTATENAMES_B__46_0_OFFSET UNITYSDK_OFFSET(0x1D40F3C0)
#define NODECANVAS_STATEMACHINES_FSM___C__GETSTATENAMES_B__46_1_OFFSET UNITYSDK_OFFSET(0x1D40F430)
#define NODECANVAS_STATEMACHINES_FSM___C__ONGRAPHUPDATE_B__42_0_OFFSET UNITYSDK_OFFSET(0x1D40F2F0)

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int FSM___c_TypeDefinitionIndex = 29185;

	class FSM___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::NodeCanvas::Framework::Node*, ::System::String*>** StaticGet___9__46_1()
		{
			return (::System::Func_2<::NodeCanvas::Framework::Node*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FSM___c_TypeDefinitionIndex)->GetStaticField(0x24520);
		}
		static ::System::Func_2<::NodeCanvas::Framework::Node*, ::System::Boolean>** StaticGet___9__46_0()
		{
			return (::System::Func_2<::NodeCanvas::Framework::Node*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FSM___c_TypeDefinitionIndex)->GetStaticField(0x24528);
		}
		static ::System::Func_2<::NodeCanvas::Framework::IUpdatable*, ::System::Boolean>** StaticGet___9__42_0()
		{
			return (::System::Func_2<::NodeCanvas::Framework::IUpdatable*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FSM___c_TypeDefinitionIndex)->GetStaticField(0x24530);
		}
		static ::NodeCanvas::StateMachines::FSM___c** StaticGet___9()
		{
			return (::NodeCanvas::StateMachines::FSM___c**)Il2CppClass::FromTypeDefinitionIndex(FSM___c_TypeDefinitionIndex)->GetStaticField(0x24538);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnGraphUpdate_b__42_0(::NodeCanvas::Framework::IUpdatable* n)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeCanvas::Framework::IUpdatable*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM___C__ONGRAPHUPDATE_B__42_0_OFFSET))(this, n);
		}

		::System::Boolean _GetStateNames_b__46_0(::NodeCanvas::Framework::Node* n)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM___C__GETSTATENAMES_B__46_0_OFFSET))(this, n);
		}

		::System::String* _GetStateNames_b__46_1(::NodeCanvas::Framework::Node* n)
		{
			return ((::System::String*(*)(::PVOID, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM___C__GETSTATENAMES_B__46_1_OFFSET))(this, n);
		}
	};
}

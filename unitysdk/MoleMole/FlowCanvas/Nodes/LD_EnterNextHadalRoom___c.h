#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3E2EF1FFB1C88E56_Class_1_E30C28B1C26233E4;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x160475C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16047600)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM___C___TRYLOADNEXTHADALROOM_B__9_1_OFFSET UNITYSDK_OFFSET(0x16047610)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_EnterNextHadalRoom___c_TypeDefinitionIndex = 71350;

	class LD_EnterNextHadalRoom___c : public ::System::Object
	{
	public:
		static ::MoleMole::FlowCanvas::Nodes::LD_EnterNextHadalRoom___c** StaticGet___9()
		{
			return (::MoleMole::FlowCanvas::Nodes::LD_EnterNextHadalRoom___c**)Il2CppClass::FromTypeDefinitionIndex(LD_EnterNextHadalRoom___c_TypeDefinitionIndex)->GetStaticField(0x3C620);
		}
		static ::System::Action_1<::Class_1_3E2EF1FFB1C88E56_Class_1_E30C28B1C26233E4*>** StaticGet___9__9_1()
		{
			return (::System::Action_1<::Class_1_3E2EF1FFB1C88E56_Class_1_E30C28B1C26233E4*>**)Il2CppClass::FromTypeDefinitionIndex(LD_EnterNextHadalRoom___c_TypeDefinitionIndex)->GetStaticField(0x3C628);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM___C__CTOR_OFFSET))(this);
		}

		::System::Void __TryLoadNextHadalRoom_b__9_1(::Class_1_3E2EF1FFB1C88E56_Class_1_E30C28B1C26233E4* tCtx)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3E2EF1FFB1C88E56_Class_1_E30C28B1C26233E4*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM___C___TRYLOADNEXTHADALROOM_B__9_1_OFFSET))(this, tCtx);
		}
	};
}

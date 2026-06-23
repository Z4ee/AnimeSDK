#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueHandler_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_OPERATECOUNTUPUINODE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x116157E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_OPERATECOUNTUPUINODE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11615820)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_OPERATECOUNTUPUINODE___C__REGISTERPORTS_B__3_1_OFFSET UNITYSDK_OFFSET(0x11615830)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_OperateCountUpUINode___c_TypeDefinitionIndex = 64094;

	class LD_OperateCountUpUINode___c : public ::System::Object
	{
	public:
		static ::FlowCanvas::ValueHandler_1<::System::Single>** StaticGet___9__3_1()
		{
			return (::FlowCanvas::ValueHandler_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LD_OperateCountUpUINode___c_TypeDefinitionIndex)->GetStaticField(0x375C0);
		}
		static ::MoleMole::FlowCanvas::Nodes::LD_OperateCountUpUINode___c** StaticGet___9()
		{
			return (::MoleMole::FlowCanvas::Nodes::LD_OperateCountUpUINode___c**)Il2CppClass::FromTypeDefinitionIndex(LD_OperateCountUpUINode___c_TypeDefinitionIndex)->GetStaticField(0x375C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_OPERATECOUNTUPUINODE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_OPERATECOUNTUPUINODE___C__CTOR_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__3_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_OPERATECOUNTUPUINODE___C__REGISTERPORTS_B__3_1_OFFSET))(this);
		}
	};
}

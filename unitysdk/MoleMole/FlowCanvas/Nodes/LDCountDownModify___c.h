#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueHandler_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCOUNTDOWNMODIFY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E6A920)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCOUNTDOWNMODIFY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E6A960)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCOUNTDOWNMODIFY___C__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x17E6A970)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCountDownModify___c_TypeDefinitionIndex = 83133;

	class LDCountDownModify___c : public ::System::Object
	{
	public:
		static ::FlowCanvas::ValueHandler_1<::System::Single>** StaticGet___9__3_0()
		{
			return (::FlowCanvas::ValueHandler_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LDCountDownModify___c_TypeDefinitionIndex)->GetStaticField(0x44CC0);
		}
		static ::MoleMole::FlowCanvas::Nodes::LDCountDownModify___c** StaticGet___9()
		{
			return (::MoleMole::FlowCanvas::Nodes::LDCountDownModify___c**)Il2CppClass::FromTypeDefinitionIndex(LDCountDownModify___c_TypeDefinitionIndex)->GetStaticField(0x44CC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOUNTDOWNMODIFY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOUNTDOWNMODIFY___C__CTOR_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__3_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOUNTDOWNMODIFY___C__REGISTERPORTS_B__3_0_OFFSET))(this);
		}
	};
}

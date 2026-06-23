#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CA0D50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16CA0D90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C___TRYPLAYDYNAMICENDPERFORMS_B__18_2_OFFSET UNITYSDK_OFFSET(0x16CA0DA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelEndNode___c_TypeDefinitionIndex = 54399;

	class LDLevelEndNode___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__18_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LDLevelEndNode___c_TypeDefinitionIndex)->GetStaticField(0x37570);
		}
		static ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode___c** StaticGet___9()
		{
			return (::MoleMole::FlowCanvas::Nodes::LDLevelEndNode___c**)Il2CppClass::FromTypeDefinitionIndex(LDLevelEndNode___c_TypeDefinitionIndex)->GetStaticField(0x37578);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__CTOR_OFFSET))(this);
		}

		::System::Void __TryPlayDynamicEndPerforms_b__18_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C___TRYPLAYDYNAMICENDPERFORMS_B__18_2_OFFSET))(this);
		}
	};
}

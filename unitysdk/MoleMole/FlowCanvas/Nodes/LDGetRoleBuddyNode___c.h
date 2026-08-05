#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueHandler_1; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETROLEBUDDYNODE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B832B10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETROLEBUDDYNODE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B832B50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETROLEBUDDYNODE___C__REGISTERPORTS_B__1_0_OFFSET UNITYSDK_OFFSET(0x1B832B60)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetRoleBuddyNode___c_TypeDefinitionIndex = 41520;

	class LDGetRoleBuddyNode___c : public ::System::Object
	{
	public:
		static ::FlowCanvas::ValueHandler_1<::MoleMole::Battle::Entity*>** StaticGet___9__1_0()
		{
			return (::FlowCanvas::ValueHandler_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(LDGetRoleBuddyNode___c_TypeDefinitionIndex)->GetStaticField(0x4A800);
		}
		static ::MoleMole::FlowCanvas::Nodes::LDGetRoleBuddyNode___c** StaticGet___9()
		{
			return (::MoleMole::FlowCanvas::Nodes::LDGetRoleBuddyNode___c**)Il2CppClass::FromTypeDefinitionIndex(LDGetRoleBuddyNode___c_TypeDefinitionIndex)->GetStaticField(0x4A808);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETROLEBUDDYNODE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETROLEBUDDYNODE___C__CTOR_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__1_0()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETROLEBUDDYNODE___C__REGISTERPORTS_B__1_0_OFFSET))(this);
		}
	};
}

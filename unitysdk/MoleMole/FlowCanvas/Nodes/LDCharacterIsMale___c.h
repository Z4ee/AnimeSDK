#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueHandler_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCHARACTERISMALE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x130000B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHARACTERISMALE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x130000F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHARACTERISMALE___C__REGISTERPORTS_B__0_0_OFFSET UNITYSDK_OFFSET(0x13000100)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCharacterIsMale___c_TypeDefinitionIndex = 84915;

	class LDCharacterIsMale___c : public ::System::Object
	{
	public:
		static ::FlowCanvas::ValueHandler_1<::System::Boolean>** StaticGet___9__0_0()
		{
			return (::FlowCanvas::ValueHandler_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LDCharacterIsMale___c_TypeDefinitionIndex)->GetStaticField(0x484D0);
		}
		static ::MoleMole::FlowCanvas::Nodes::LDCharacterIsMale___c** StaticGet___9()
		{
			return (::MoleMole::FlowCanvas::Nodes::LDCharacterIsMale___c**)Il2CppClass::FromTypeDefinitionIndex(LDCharacterIsMale___c_TypeDefinitionIndex)->GetStaticField(0x484D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHARACTERISMALE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHARACTERISMALE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RegisterPorts_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHARACTERISMALE___C__REGISTERPORTS_B__0_0_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueHandler_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_HASCHALLENGE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1B19C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_HASCHALLENGE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B1A00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_HASCHALLENGE___C__REGISTERPORTS_B__3_1_OFFSET UNITYSDK_OFFSET(0x1B1B1A10)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_HASCHALLENGE___C__REGISTERPORTS_B__3_2_OFFSET UNITYSDK_OFFSET(0x1B1B1C20)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_HasChallenge___c_TypeDefinitionIndex = 60649;

	class LD_HasChallenge___c : public ::System::Object
	{
	public:
		static ::FlowCanvas::ValueHandler_1<::System::Int32>** StaticGet___9__3_1()
		{
			return (::FlowCanvas::ValueHandler_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LD_HasChallenge___c_TypeDefinitionIndex)->GetStaticField(0x3F860);
		}
		static ::MoleMole::FlowCanvas::Nodes::LD_HasChallenge___c** StaticGet___9()
		{
			return (::MoleMole::FlowCanvas::Nodes::LD_HasChallenge___c**)Il2CppClass::FromTypeDefinitionIndex(LD_HasChallenge___c_TypeDefinitionIndex)->GetStaticField(0x3F868);
		}
		static ::FlowCanvas::ValueHandler_1<::System::Single>** StaticGet___9__3_2()
		{
			return (::FlowCanvas::ValueHandler_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LD_HasChallenge___c_TypeDefinitionIndex)->GetStaticField(0x3F870);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_HASCHALLENGE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_HASCHALLENGE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__3_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_HASCHALLENGE___C__REGISTERPORTS_B__3_1_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__3_2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_HASCHALLENGE___C__REGISTERPORTS_B__3_2_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x182DAD10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x182DAD50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW___C__DOPRELOAD_B__8_0_OFFSET UNITYSDK_OFFSET(0x182DAD60)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowPopWindow___c_TypeDefinitionIndex = 60433;

	class LDShowPopWindow___c : public ::System::Object
	{
	public:
		static ::MoleMole::FlowCanvas::Nodes::LDShowPopWindow___c** StaticGet___9()
		{
			return (::MoleMole::FlowCanvas::Nodes::LDShowPopWindow___c**)Il2CppClass::FromTypeDefinitionIndex(LDShowPopWindow___c_TypeDefinitionIndex)->GetStaticField(0x375A0);
		}
		static ::System::Action** StaticGet___9__8_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LDShowPopWindow___c_TypeDefinitionIndex)->GetStaticField(0x375A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW___C__CTOR_OFFSET))(this);
		}

		::System::Void _DoPreload_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW___C__DOPRELOAD_B__8_0_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWGENERALBOTTOMTIP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19244F10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWGENERALBOTTOMTIP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19244F50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWGENERALBOTTOMTIP___C__REGISTERPORTS_B__3_1_OFFSET UNITYSDK_OFFSET(0x19244F60)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowGeneralBottomTip___c_TypeDefinitionIndex = 74839;

	class LDShowGeneralBottomTip___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__3_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LDShowGeneralBottomTip___c_TypeDefinitionIndex)->GetStaticField(0x4A810);
		}
		static ::MoleMole::FlowCanvas::Nodes::LDShowGeneralBottomTip___c** StaticGet___9()
		{
			return (::MoleMole::FlowCanvas::Nodes::LDShowGeneralBottomTip___c**)Il2CppClass::FromTypeDefinitionIndex(LDShowGeneralBottomTip___c_TypeDefinitionIndex)->GetStaticField(0x4A818);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWGENERALBOTTOMTIP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWGENERALBOTTOMTIP___C__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWGENERALBOTTOMTIP___C__REGISTERPORTS_B__3_1_OFFSET))(this);
		}
	};
}

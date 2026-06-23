#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMEGETSCORE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19123F00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMEGETSCORE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19123F40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMEGETSCORE___C__REGISTERPORTS_G__GETSCORE_0_0_OFFSET UNITYSDK_OFFSET(0x19123F50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShootGameGetScore___c_TypeDefinitionIndex = 84177;

	class LDShootGameGetScore___c : public ::System::Object
	{
	public:
		static ::MoleMole::FlowCanvas::Nodes::LDShootGameGetScore___c** StaticGet___9()
		{
			return (::MoleMole::FlowCanvas::Nodes::LDShootGameGetScore___c**)Il2CppClass::FromTypeDefinitionIndex(LDShootGameGetScore___c_TypeDefinitionIndex)->GetStaticField(0x37590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMEGETSCORE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMEGETSCORE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_g__GetScore_0_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMEGETSCORE___C__REGISTERPORTS_G__GETSCORE_0_0_OFFSET))(this);
		}
	};
}

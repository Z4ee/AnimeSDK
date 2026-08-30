#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PORTALBUFFSELECTSTATE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD459B0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PORTALBUFFSELECTSTATE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD459F0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PORTALBUFFSELECTSTATE___C__ONENTER_B__0_0_OFFSET UNITYSDK_OFFSET(0x1BD45A00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_PortalBuffSelectState___c_TypeDefinitionIndex = 64656;

	class GridFightFlowDirector_PortalBuffSelectState___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__0_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector_PortalBuffSelectState___c_TypeDefinitionIndex)->GetStaticField(0x27770);
		}
		static ::RPG::Client::GridFightFlowDirector_PortalBuffSelectState___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightFlowDirector_PortalBuffSelectState___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector_PortalBuffSelectState___c_TypeDefinitionIndex)->GetStaticField(0x27778);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PORTALBUFFSELECTSTATE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PORTALBUFFSELECTSTATE___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnEnter_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PORTALBUFFSELECTSTATE___C__ONENTER_B__0_0_OFFSET))(this);
		}
	};
}

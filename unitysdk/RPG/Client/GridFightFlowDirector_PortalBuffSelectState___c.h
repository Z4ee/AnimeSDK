#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PORTALBUFFSELECTSTATE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9819160)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PORTALBUFFSELECTSTATE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x98191A0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PORTALBUFFSELECTSTATE___C__ONENTER_B__0_0_OFFSET UNITYSDK_OFFSET(0x98191B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_PortalBuffSelectState___c_TypeDefinitionIndex = 52488;

	class GridFightFlowDirector_PortalBuffSelectState___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__0_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector_PortalBuffSelectState___c_TypeDefinitionIndex)->GetStaticField(0x14C30);
		}
		static ::RPG::Client::GridFightFlowDirector_PortalBuffSelectState___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightFlowDirector_PortalBuffSelectState___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector_PortalBuffSelectState___c_TypeDefinitionIndex)->GetStaticField(0x14C38);
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

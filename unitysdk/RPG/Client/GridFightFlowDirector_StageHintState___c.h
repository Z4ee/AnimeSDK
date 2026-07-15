#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_STAGEHINTSTATE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6A8DF0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_STAGEHINTSTATE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6A8E30)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_STAGEHINTSTATE___C__ONENTER_B__0_0_OFFSET UNITYSDK_OFFSET(0x1A6A8E40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_StageHintState___c_TypeDefinitionIndex = 61677;

	class GridFightFlowDirector_StageHintState___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightFlowDirector_StageHintState___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightFlowDirector_StageHintState___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector_StageHintState___c_TypeDefinitionIndex)->GetStaticField(0x245C0);
		}
		static ::System::Action** StaticGet___9__0_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector_StageHintState___c_TypeDefinitionIndex)->GetStaticField(0x245C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_STAGEHINTSTATE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_STAGEHINTSTATE___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnEnter_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_STAGEHINTSTATE___C__ONENTER_B__0_0_OFFSET))(this);
		}
	};
}

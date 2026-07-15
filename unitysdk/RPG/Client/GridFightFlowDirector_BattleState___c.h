#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_BATTLESTATE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6A6410)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_BATTLESTATE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6A6450)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_BATTLESTATE___C__ONEVENT_B__2_0_OFFSET UNITYSDK_OFFSET(0x1A6A6460)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_BattleState___c_TypeDefinitionIndex = 61675;

	class GridFightFlowDirector_BattleState___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightFlowDirector_BattleState___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightFlowDirector_BattleState___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector_BattleState___c_TypeDefinitionIndex)->GetStaticField(0x244A0);
		}
		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector_BattleState___c_TypeDefinitionIndex)->GetStaticField(0x244A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_BATTLESTATE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_BATTLESTATE___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnEvent_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_BATTLESTATE___C__ONEVENT_B__2_0_OFFSET))(this);
		}
	};
}

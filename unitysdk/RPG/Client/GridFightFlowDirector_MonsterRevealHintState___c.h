#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_MONSTERREVEALHINTSTATE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9818E10)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_MONSTERREVEALHINTSTATE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9818E50)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_MONSTERREVEALHINTSTATE___C__ONENTER_B__0_0_OFFSET UNITYSDK_OFFSET(0x9818E60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_MonsterRevealHintState___c_TypeDefinitionIndex = 52495;

	class GridFightFlowDirector_MonsterRevealHintState___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightFlowDirector_MonsterRevealHintState___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightFlowDirector_MonsterRevealHintState___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector_MonsterRevealHintState___c_TypeDefinitionIndex)->GetStaticField(0x14BC0);
		}
		static ::System::Action** StaticGet___9__0_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector_MonsterRevealHintState___c_TypeDefinitionIndex)->GetStaticField(0x14BC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_MONSTERREVEALHINTSTATE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_MONSTERREVEALHINTSTATE___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnEnter_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_MONSTERREVEALHINTSTATE___C__ONENTER_B__0_0_OFFSET))(this);
		}
	};
}

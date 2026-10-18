#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightFlowDirector_BattleResultClosedEvent; }
namespace RPG::Client { class GridFightFlowDirector_PendingActionUpdateEvent; }
namespace RPG::Client { class GridFightFlowDirector_SettleResultEvent; }
namespace RPG::Client { class GridFightFlowDirector_StageHintClosedEvent; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD1335D0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD133600)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C___INITSTATES_B__42_0_OFFSET UNITYSDK_OFFSET(0xD133610)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C___INITSTATES_B__42_1_OFFSET UNITYSDK_OFFSET(0xD133990)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C___INITSTATES_B__42_2_OFFSET UNITYSDK_OFFSET(0xD133B80)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C___INITSTATES_B__42_3_OFFSET UNITYSDK_OFFSET(0xD133BC0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C___INITSTATES_B__42_4_OFFSET UNITYSDK_OFFSET(0xD133C00)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C___INITSTATES_B__42_5_OFFSET UNITYSDK_OFFSET(0xD133D40)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C___INITSTATES_B__42_6_OFFSET UNITYSDK_OFFSET(0xD133EF0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C___INITSTATES_B__42_7_OFFSET UNITYSDK_OFFSET(0xD133F10)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C___INITSTATES_B__42_8_OFFSET UNITYSDK_OFFSET(0xD134200)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C___INITSTATES_B__42_9_OFFSET UNITYSDK_OFFSET(0xD134330)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector___c_TypeDefinitionIndex = 64609;

	class GridFightFlowDirector___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::GridFightFlowDirector_PendingActionUpdateEvent*>** StaticGet___9__42_2()
		{
			return (::System::Predicate_1<::RPG::Client::GridFightFlowDirector_PendingActionUpdateEvent*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector___c_TypeDefinitionIndex)->GetStaticField(0x6BB80);
		}
		static ::System::Predicate_1<::RPG::Client::GridFightFlowDirector_StageHintClosedEvent*>** StaticGet___9__42_6()
		{
			return (::System::Predicate_1<::RPG::Client::GridFightFlowDirector_StageHintClosedEvent*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector___c_TypeDefinitionIndex)->GetStaticField(0x6BB88);
		}
		static ::System::Predicate_1<::RPG::Client::GridFightFlowDirector_PendingActionUpdateEvent*>** StaticGet___9__42_1()
		{
			return (::System::Predicate_1<::RPG::Client::GridFightFlowDirector_PendingActionUpdateEvent*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector___c_TypeDefinitionIndex)->GetStaticField(0x6BB90);
		}
		static ::System::Predicate_1<::RPG::Client::GridFightFlowDirector_PendingActionUpdateEvent*>** StaticGet___9__42_3()
		{
			return (::System::Predicate_1<::RPG::Client::GridFightFlowDirector_PendingActionUpdateEvent*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector___c_TypeDefinitionIndex)->GetStaticField(0x6BB98);
		}
		static ::System::Predicate_1<::RPG::Client::GridFightFlowDirector_BattleResultClosedEvent*>** StaticGet___9__42_8()
		{
			return (::System::Predicate_1<::RPG::Client::GridFightFlowDirector_BattleResultClosedEvent*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector___c_TypeDefinitionIndex)->GetStaticField(0x6BBA0);
		}
		static ::System::Predicate_1<::RPG::Client::GridFightFlowDirector_PendingActionUpdateEvent*>** StaticGet___9__42_0()
		{
			return (::System::Predicate_1<::RPG::Client::GridFightFlowDirector_PendingActionUpdateEvent*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector___c_TypeDefinitionIndex)->GetStaticField(0x6BBA8);
		}
		static ::RPG::Client::GridFightFlowDirector___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightFlowDirector___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector___c_TypeDefinitionIndex)->GetStaticField(0x6BBB0);
		}
		static ::System::Predicate_1<::RPG::Client::GridFightFlowDirector_PendingActionUpdateEvent*>** StaticGet___9__42_4()
		{
			return (::System::Predicate_1<::RPG::Client::GridFightFlowDirector_PendingActionUpdateEvent*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector___c_TypeDefinitionIndex)->GetStaticField(0x6BBB8);
		}
		static ::System::Predicate_1<::RPG::Client::GridFightFlowDirector_SettleResultEvent*>** StaticGet___9__42_9()
		{
			return (::System::Predicate_1<::RPG::Client::GridFightFlowDirector_SettleResultEvent*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector___c_TypeDefinitionIndex)->GetStaticField(0x6BBC0);
		}
		static ::System::Predicate_1<::RPG::Client::GridFightFlowDirector_StageHintClosedEvent*>** StaticGet___9__42_5()
		{
			return (::System::Predicate_1<::RPG::Client::GridFightFlowDirector_StageHintClosedEvent*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector___c_TypeDefinitionIndex)->GetStaticField(0x6BBC8);
		}
		static ::System::Predicate_1<::RPG::Client::GridFightFlowDirector_BattleResultClosedEvent*>** StaticGet___9__42_7()
		{
			return (::System::Predicate_1<::RPG::Client::GridFightFlowDirector_BattleResultClosedEvent*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector___c_TypeDefinitionIndex)->GetStaticField(0x6BBD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __InitStates_b__42_0(::RPG::Client::GridFightFlowDirector_PendingActionUpdateEvent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_PendingActionUpdateEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C___INITSTATES_B__42_0_OFFSET))(this, a1);
		}

		::System::Boolean __InitStates_b__42_1(::RPG::Client::GridFightFlowDirector_PendingActionUpdateEvent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_PendingActionUpdateEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C___INITSTATES_B__42_1_OFFSET))(this, a1);
		}

		::System::Boolean __InitStates_b__42_2(::RPG::Client::GridFightFlowDirector_PendingActionUpdateEvent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_PendingActionUpdateEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C___INITSTATES_B__42_2_OFFSET))(this, a1);
		}

		::System::Boolean __InitStates_b__42_3(::RPG::Client::GridFightFlowDirector_PendingActionUpdateEvent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_PendingActionUpdateEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C___INITSTATES_B__42_3_OFFSET))(this, a1);
		}

		::System::Boolean __InitStates_b__42_4(::RPG::Client::GridFightFlowDirector_PendingActionUpdateEvent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_PendingActionUpdateEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C___INITSTATES_B__42_4_OFFSET))(this, a1);
		}

		::System::Boolean __InitStates_b__42_5(::RPG::Client::GridFightFlowDirector_StageHintClosedEvent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_StageHintClosedEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C___INITSTATES_B__42_5_OFFSET))(this, a1);
		}

		::System::Boolean __InitStates_b__42_6(::RPG::Client::GridFightFlowDirector_StageHintClosedEvent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_StageHintClosedEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C___INITSTATES_B__42_6_OFFSET))(this, a1);
		}

		::System::Boolean __InitStates_b__42_7(::RPG::Client::GridFightFlowDirector_BattleResultClosedEvent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_BattleResultClosedEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C___INITSTATES_B__42_7_OFFSET))(this, a1);
		}

		::System::Boolean __InitStates_b__42_8(::RPG::Client::GridFightFlowDirector_BattleResultClosedEvent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_BattleResultClosedEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C___INITSTATES_B__42_8_OFFSET))(this, a1);
		}

		::System::Boolean __InitStates_b__42_9(::RPG::Client::GridFightFlowDirector_SettleResultEvent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_SettleResultEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C___INITSTATES_B__42_9_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightFlowDirector_BattleResultClosedEvent; }
namespace RPG::Client { class GridFightFlowDirector_PendingActionUpdateEvent; }
namespace RPG::Client { class GridFightFlowDirector_SettleResultEvent; }
namespace RPG::Client { class GridFightFlowDirector_StageHintClosedEvent; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD43230)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD43260)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C___INITSTATES_B__42_0_OFFSET UNITYSDK_OFFSET(0x1BD43270)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C___INITSTATES_B__42_1_OFFSET UNITYSDK_OFFSET(0x1BD435F0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C___INITSTATES_B__42_2_OFFSET UNITYSDK_OFFSET(0x1BD437E0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C___INITSTATES_B__42_3_OFFSET UNITYSDK_OFFSET(0x1BD43820)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C___INITSTATES_B__42_4_OFFSET UNITYSDK_OFFSET(0x1BD43860)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C___INITSTATES_B__42_5_OFFSET UNITYSDK_OFFSET(0x1BD439A0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C___INITSTATES_B__42_6_OFFSET UNITYSDK_OFFSET(0x1BD43B40)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C___INITSTATES_B__42_7_OFFSET UNITYSDK_OFFSET(0x1BD43B60)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C___INITSTATES_B__42_8_OFFSET UNITYSDK_OFFSET(0x1BD43E40)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C___INITSTATES_B__42_9_OFFSET UNITYSDK_OFFSET(0x1BD43F70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector___c_TypeDefinitionIndex = 64669;

	class GridFightFlowDirector___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightFlowDirector___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightFlowDirector___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector___c_TypeDefinitionIndex)->GetStaticField(0x27230);
		}
		static ::System::Predicate_1<::RPG::Client::GridFightFlowDirector_PendingActionUpdateEvent*>** StaticGet___9__42_4()
		{
			return (::System::Predicate_1<::RPG::Client::GridFightFlowDirector_PendingActionUpdateEvent*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector___c_TypeDefinitionIndex)->GetStaticField(0x27238);
		}
		static ::System::Predicate_1<::RPG::Client::GridFightFlowDirector_SettleResultEvent*>** StaticGet___9__42_9()
		{
			return (::System::Predicate_1<::RPG::Client::GridFightFlowDirector_SettleResultEvent*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector___c_TypeDefinitionIndex)->GetStaticField(0x27240);
		}
		static ::System::Predicate_1<::RPG::Client::GridFightFlowDirector_PendingActionUpdateEvent*>** StaticGet___9__42_1()
		{
			return (::System::Predicate_1<::RPG::Client::GridFightFlowDirector_PendingActionUpdateEvent*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector___c_TypeDefinitionIndex)->GetStaticField(0x27248);
		}
		static ::System::Predicate_1<::RPG::Client::GridFightFlowDirector_PendingActionUpdateEvent*>** StaticGet___9__42_2()
		{
			return (::System::Predicate_1<::RPG::Client::GridFightFlowDirector_PendingActionUpdateEvent*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector___c_TypeDefinitionIndex)->GetStaticField(0x27250);
		}
		static ::System::Predicate_1<::RPG::Client::GridFightFlowDirector_PendingActionUpdateEvent*>** StaticGet___9__42_3()
		{
			return (::System::Predicate_1<::RPG::Client::GridFightFlowDirector_PendingActionUpdateEvent*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector___c_TypeDefinitionIndex)->GetStaticField(0x27258);
		}
		static ::System::Predicate_1<::RPG::Client::GridFightFlowDirector_StageHintClosedEvent*>** StaticGet___9__42_5()
		{
			return (::System::Predicate_1<::RPG::Client::GridFightFlowDirector_StageHintClosedEvent*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector___c_TypeDefinitionIndex)->GetStaticField(0x27260);
		}
		static ::System::Predicate_1<::RPG::Client::GridFightFlowDirector_BattleResultClosedEvent*>** StaticGet___9__42_8()
		{
			return (::System::Predicate_1<::RPG::Client::GridFightFlowDirector_BattleResultClosedEvent*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector___c_TypeDefinitionIndex)->GetStaticField(0x27268);
		}
		static ::System::Predicate_1<::RPG::Client::GridFightFlowDirector_BattleResultClosedEvent*>** StaticGet___9__42_7()
		{
			return (::System::Predicate_1<::RPG::Client::GridFightFlowDirector_BattleResultClosedEvent*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector___c_TypeDefinitionIndex)->GetStaticField(0x27270);
		}
		static ::System::Predicate_1<::RPG::Client::GridFightFlowDirector_StageHintClosedEvent*>** StaticGet___9__42_6()
		{
			return (::System::Predicate_1<::RPG::Client::GridFightFlowDirector_StageHintClosedEvent*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector___c_TypeDefinitionIndex)->GetStaticField(0x27278);
		}
		static ::System::Predicate_1<::RPG::Client::GridFightFlowDirector_PendingActionUpdateEvent*>** StaticGet___9__42_0()
		{
			return (::System::Predicate_1<::RPG::Client::GridFightFlowDirector_PendingActionUpdateEvent*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector___c_TypeDefinitionIndex)->GetStaticField(0x27280);
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/BigFixPoint.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SummonMonster; }
namespace RPG::GameCore { class SummonMonsterData; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_ED6B14ED4C85AD25_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95B96D0)
#define CLASS_3_ED6B14ED4C85AD25_METHOD_3_000EEA853414B6D2_OFFSET UNITYSDK_OFFSET(0x95B7C50)
#define CLASS_3_ED6B14ED4C85AD25_METHOD_3_49458E6574772A35_OFFSET UNITYSDK_OFFSET(0x95B8E30)
#define CLASS_3_ED6B14ED4C85AD25_METHOD_3_655DE9A0E90434DB_OFFSET UNITYSDK_OFFSET(0x95B95C0)
#define CLASS_3_ED6B14ED4C85AD25_METHOD_3_7D6A93B68255F613_OFFSET UNITYSDK_OFFSET(0x95B90F0)
#define CLASS_3_ED6B14ED4C85AD25_METHOD_3_906EBAD7AEE08C52_OFFSET UNITYSDK_OFFSET(0x95B8D70)
#define CLASS_3_ED6B14ED4C85AD25_METHOD_3_9F5A6C9FA74A3738_OFFSET UNITYSDK_OFFSET(0x95B9550)
#define CLASS_3_ED6B14ED4C85AD25_METHOD_3_CEE7B87FCBE2B3EE_OFFSET UNITYSDK_OFFSET(0x95B9050)
#define CLASS_3_ED6B14ED4C85AD25_METHOD_3_FF9B91499478520A_OFFSET UNITYSDK_OFFSET(0x95B9270)
#define CLASS_3_ED6B14ED4C85AD25_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x95B7860)
#define CLASS_3_ED6B14ED4C85AD25__CTOR_OFFSET UNITYSDK_OFFSET(0x95B77C0)
#define CLASS_3_ED6B14ED4C85AD25___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95B9740)

inline static constexpr unsigned int Class_3_ED6B14ED4C85AD25_TypeDefinitionIndex = 51328;

class Class_3_ED6B14ED4C85AD25 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SummonMonster*>
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SummonMonster* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SummonMonster*))((::PBYTE)hIl2Cpp + CLASS_3_ED6B14ED4C85AD25__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ED6B14ED4C85AD25_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_3_000EEA853414B6D2(::RPG::GameCore::SummonMonsterData* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::SummonMonsterData*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_ED6B14ED4C85AD25_METHOD_3_000EEA853414B6D2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7D6A93B68255F613(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_ED6B14ED4C85AD25_METHOD_3_7D6A93B68255F613_OFFSET))(this, a1);
	}

	::System::Void Method_3_49458E6574772A35(::RPG::GameCore::FixPoint& a1, ::RPG::GameCore::FixPoint& a2, ::System::Boolean& a3, ::RPG::GameCore::BigFixPoint& a4, ::RPG::GameCore::BigFixPoint& a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixPoint&, ::System::Boolean&, ::RPG::GameCore::BigFixPoint&, ::RPG::GameCore::BigFixPoint&))((::PBYTE)hIl2Cpp + CLASS_3_ED6B14ED4C85AD25_METHOD_3_49458E6574772A35_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_CEE7B87FCBE2B3EE(::RPG::GameCore::FixPoint& a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_3_ED6B14ED4C85AD25_METHOD_3_CEE7B87FCBE2B3EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_FF9B91499478520A(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::Struct_2_5909FD7779934CCA a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_3_ED6B14ED4C85AD25_METHOD_3_FF9B91499478520A_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_3_655DE9A0E90434DB(::RPG::GameCore::AbilityProperty a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::Struct_2_5909FD7779934CCA a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::RPG::GameCore::AbilityProperty, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::Struct_2_5909FD7779934CCA, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_ED6B14ED4C85AD25_METHOD_3_655DE9A0E90434DB_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_3_9F5A6C9FA74A3738(::RPG::GameCore::AbilityProperty a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + CLASS_3_ED6B14ED4C85AD25_METHOD_3_9F5A6C9FA74A3738_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_3_906EBAD7AEE08C52()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ED6B14ED4C85AD25_METHOD_3_906EBAD7AEE08C52_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ED6B14ED4C85AD25_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ED6B14ED4C85AD25___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

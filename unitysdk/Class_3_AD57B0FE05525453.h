#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SummonMonster; }
namespace RPG::GameCore { class SummonMonsterData; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_AD57B0FE05525453_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157C6070)
#define CLASS_3_AD57B0FE05525453_METHOD_3_05FBA0AE5EEFB087_OFFSET UNITYSDK_OFFSET(0x157C56D0)
#define CLASS_3_AD57B0FE05525453_METHOD_3_655DE9A0E90434DB_OFFSET UNITYSDK_OFFSET(0x157C5F60)
#define CLASS_3_AD57B0FE05525453_METHOD_3_696695F855F90E54_OFFSET UNITYSDK_OFFSET(0x157C58C0)
#define CLASS_3_AD57B0FE05525453_METHOD_3_74988BE79C6A78F2_OFFSET UNITYSDK_OFFSET(0x157C5720)
#define CLASS_3_AD57B0FE05525453_METHOD_3_8B46F22B23243F6D_OFFSET UNITYSDK_OFFSET(0x157C59B0)
#define CLASS_3_AD57B0FE05525453_METHOD_3_8C3A5E0378AA506D_OFFSET UNITYSDK_OFFSET(0x157C47E0)
#define CLASS_3_AD57B0FE05525453_METHOD_3_9F5A6C9FA74A3738_OFFSET UNITYSDK_OFFSET(0x157C5EF0)
#define CLASS_3_AD57B0FE05525453_METHOD_3_FF9B91499478520A_OFFSET UNITYSDK_OFFSET(0x157C5C30)
#define CLASS_3_AD57B0FE05525453_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157C42E0)
#define CLASS_3_AD57B0FE05525453__CTOR_OFFSET UNITYSDK_OFFSET(0x157C4240)

inline static constexpr unsigned int Class_3_AD57B0FE05525453_TypeDefinitionIndex = 55863;

class Class_3_AD57B0FE05525453 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SummonMonster*>
{
public:
	::Class_3_07C3C4D2990C49EE* FIMFLIACJBE; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SummonMonster* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SummonMonster*))((::PBYTE)hIl2Cpp + CLASS_3_AD57B0FE05525453__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD57B0FE05525453_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_3_8C3A5E0378AA506D(::RPG::GameCore::SummonMonsterData* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::SummonMonsterData*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_AD57B0FE05525453_METHOD_3_8C3A5E0378AA506D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8B46F22B23243F6D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_AD57B0FE05525453_METHOD_3_8B46F22B23243F6D_OFFSET))(this, a1);
	}

	::System::Void Method_3_74988BE79C6A78F2(::RPG::GameCore::FixPoint& a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_3_AD57B0FE05525453_METHOD_3_74988BE79C6A78F2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_696695F855F90E54(::RPG::GameCore::FixPoint& a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_3_AD57B0FE05525453_METHOD_3_696695F855F90E54_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_FF9B91499478520A(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::Struct_2_5909FD7779934CCA a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_3_AD57B0FE05525453_METHOD_3_FF9B91499478520A_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_3_655DE9A0E90434DB(::RPG::GameCore::AbilityProperty a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::Struct_2_5909FD7779934CCA a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::RPG::GameCore::AbilityProperty, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::Struct_2_5909FD7779934CCA, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_AD57B0FE05525453_METHOD_3_655DE9A0E90434DB_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_3_9F5A6C9FA74A3738(::RPG::GameCore::AbilityProperty a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + CLASS_3_AD57B0FE05525453_METHOD_3_9F5A6C9FA74A3738_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_3_05FBA0AE5EEFB087()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD57B0FE05525453_METHOD_3_05FBA0AE5EEFB087_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD57B0FE05525453_DISPOSE_OFFSET))(this);
	}
};

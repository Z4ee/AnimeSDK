#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_07A210D994F284D8_3;
class Class_2_1DB6C02CA182EEBA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerParallelAbility; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { template <typename T1, typename T2, typename T3> class Triple_3; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_BC64DF9A816B750A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE000D10)
#define CLASS_2_BC64DF9A816B750A_METHOD_2_926F1207A6BA78F5_OFFSET UNITYSDK_OFFSET(0xE001BA0)
#define CLASS_2_BC64DF9A816B750A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDFFF260)
#define CLASS_2_BC64DF9A816B750A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE000C50)
#define CLASS_2_BC64DF9A816B750A_TICK_OFFSET UNITYSDK_OFFSET(0xE000D60)
#define CLASS_2_BC64DF9A816B750A__CCTOR_OFFSET UNITYSDK_OFFSET(0xE001D60)
#define CLASS_2_BC64DF9A816B750A__CTOR_OFFSET UNITYSDK_OFFSET(0xDFFEFE0)

inline static constexpr unsigned int Class_2_BC64DF9A816B750A_TypeDefinitionIndex = 51403;

class Class_2_BC64DF9A816B750A : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::Type** StaticGet_Field_2_7()
	{
		return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BC64DF9A816B750A_TypeDefinitionIndex)->GetStaticField(0x6CB0);
	}
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::Triple_3<::System::Boolean, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntityList*>*>* Field_2_8; // 0x20
	::Class_1_07A210D994F284D8_3* Field_2_3; // 0x28
	::System::Collections::Generic::List_1<::Class_2_1DB6C02CA182EEBA*>* Field_2_2; // 0x30
	::Il2CppArray<::Class_1_5F51D4049EA87B7B*>* Field_2_5; // 0x38
	::RPG::GameCore::TriggerParallelAbility* Field_2_1; // 0x40
	::RPG::GameCore::FixPoint Field_2_4; // 0x48
	::System::Boolean Field_2_6; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerParallelAbility* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerParallelAbility*))((::PBYTE)hIl2Cpp + CLASS_2_BC64DF9A816B750A__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BC64DF9A816B750A__CCTOR_OFFSET))();
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC64DF9A816B750A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC64DF9A816B750A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC64DF9A816B750A_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BC64DF9A816B750A_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_926F1207A6BA78F5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BC64DF9A816B750A_METHOD_2_926F1207A6BA78F5_OFFSET))(this, a1);
	}
};

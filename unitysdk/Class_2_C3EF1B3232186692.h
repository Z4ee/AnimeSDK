#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MonsterDieCheck; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C3EF1B3232186692_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92BAF60)
#define CLASS_2_C3EF1B3232186692_METHOD_2_A47BB82463F77F6E_OFFSET UNITYSDK_OFFSET(0x92BB150)
#define CLASS_2_C3EF1B3232186692_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x92BAFA0)
#define CLASS_2_C3EF1B3232186692_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x92BB3C0)
#define CLASS_2_C3EF1B3232186692_TICK_OFFSET UNITYSDK_OFFSET(0x92BB440)
#define CLASS_2_C3EF1B3232186692__CTOR_OFFSET UNITYSDK_OFFSET(0x92BAF10)

inline static constexpr unsigned int Class_2_C3EF1B3232186692_TypeDefinitionIndex = 53701;

class Class_2_C3EF1B3232186692 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::MonsterDieCheck* Field_2_0; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonsterDieCheck* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonsterDieCheck*))((::PBYTE)hIl2Cpp + CLASS_2_C3EF1B3232186692__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3EF1B3232186692_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3EF1B3232186692_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3EF1B3232186692_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C3EF1B3232186692_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A47BB82463F77F6E(::RPG::GameCore::GameEntity* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_C3EF1B3232186692_METHOD_2_A47BB82463F77F6E_OFFSET))(this, a1, a2);
	}
};

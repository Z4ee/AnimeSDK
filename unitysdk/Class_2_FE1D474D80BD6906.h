#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_C3FD3943CDE7D4EA;
namespace RPG::GameCore { class ProcessStoredDamage; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_2_FE1D474D80BD6906_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17C8CE60)
#define CLASS_2_FE1D474D80BD6906_METHOD_2_181E9561D1E76777_OFFSET UNITYSDK_OFFSET(0x17C8D630)
#define CLASS_2_FE1D474D80BD6906_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17C8CEA0)
#define CLASS_2_FE1D474D80BD6906_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17C8D830)
#define CLASS_2_FE1D474D80BD6906_TICK_OFFSET UNITYSDK_OFFSET(0x17C8D880)
#define CLASS_2_FE1D474D80BD6906__CTOR_OFFSET UNITYSDK_OFFSET(0x17C8CE50)

inline static constexpr unsigned int Class_2_FE1D474D80BD6906_TypeDefinitionIndex = 55470;

class Class_2_FE1D474D80BD6906 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::ProcessStoredDamage* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ProcessStoredDamage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ProcessStoredDamage*))((::PBYTE)hIl2Cpp + CLASS_2_FE1D474D80BD6906__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE1D474D80BD6906_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE1D474D80BD6906_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_2_181E9561D1E76777(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::Class_1_C3FD3943CDE7D4EA* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::Class_1_C3FD3943CDE7D4EA*))((::PBYTE)hIl2Cpp + CLASS_2_FE1D474D80BD6906_METHOD_2_181E9561D1E76777_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE1D474D80BD6906_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FE1D474D80BD6906_TICK_OFFSET))(this, a1);
	}
};

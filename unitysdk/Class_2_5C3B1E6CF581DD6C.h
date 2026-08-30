#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class DrinkMakerPreBartendPerformanceEndNotify; }
namespace RPG::GameCore { class PlayScreenTransfer; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5C3B1E6CF581DD6C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15416330)
#define CLASS_2_5C3B1E6CF581DD6C_METHOD_2_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x154164B0)
#define CLASS_2_5C3B1E6CF581DD6C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154163D0)
#define CLASS_2_5C3B1E6CF581DD6C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15416500)
#define CLASS_2_5C3B1E6CF581DD6C_TICK_OFFSET UNITYSDK_OFFSET(0x15416370)
#define CLASS_2_5C3B1E6CF581DD6C__CTOR_OFFSET UNITYSDK_OFFSET(0x154162C0)

inline static constexpr unsigned int Class_2_5C3B1E6CF581DD6C_TypeDefinitionIndex = 58241;

class Class_2_5C3B1E6CF581DD6C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::DrinkMakerPreBartendPerformanceEndNotify* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::GameCore::PlayScreenTransfer* FHBIIIIJOCD; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DrinkMakerPreBartendPerformanceEndNotify* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DrinkMakerPreBartendPerformanceEndNotify*))((::PBYTE)hIl2Cpp + CLASS_2_5C3B1E6CF581DD6C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C3B1E6CF581DD6C_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5C3B1E6CF581DD6C_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C3B1E6CF581DD6C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C3B1E6CF581DD6C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C3B1E6CF581DD6C_METHOD_2_7646FFE662147970_OFFSET))(this);
	}
};

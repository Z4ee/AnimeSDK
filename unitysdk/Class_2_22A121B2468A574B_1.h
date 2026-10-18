#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_FA3DB7B30E78C0CA_22;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_22A121B2468A574B_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF51100)
#define CLASS_2_22A121B2468A574B_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF51140)
#define CLASS_2_22A121B2468A574B_1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBF51190)
#define CLASS_2_22A121B2468A574B_1_TICK_OFFSET UNITYSDK_OFFSET(0xBF511D0)
#define CLASS_2_22A121B2468A574B_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBF510F0)

inline static constexpr unsigned int Class_2_22A121B2468A574B_1_TypeDefinitionIndex = 58902;

class Class_2_22A121B2468A574B_1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_22* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_22*))((::PBYTE)hIl2Cpp + CLASS_2_22A121B2468A574B_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22A121B2468A574B_1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22A121B2468A574B_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22A121B2468A574B_1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_22A121B2468A574B_1_TICK_OFFSET))(this, a1);
	}
};

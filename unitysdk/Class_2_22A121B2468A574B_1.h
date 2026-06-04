#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_06CA57680E115A32_9;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_22A121B2468A574B_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC6DBD0)
#define CLASS_2_22A121B2468A574B_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAC6DC10)
#define CLASS_2_22A121B2468A574B_1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAC6DC60)
#define CLASS_2_22A121B2468A574B_1_TICK_OFFSET UNITYSDK_OFFSET(0xAC6DCA0)
#define CLASS_2_22A121B2468A574B_1__CTOR_OFFSET UNITYSDK_OFFSET(0xAC6DBC0)

inline static constexpr unsigned int Class_2_22A121B2468A574B_1_TypeDefinitionIndex = 55035;

class Class_2_22A121B2468A574B_1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_06CA57680E115A32_9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_06CA57680E115A32_9*))((::PBYTE)hIl2Cpp + CLASS_2_22A121B2468A574B_1__CTOR_OFFSET))(this, a1, a2);
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

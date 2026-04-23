#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_06CA57680E115A32_5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_22A121B2468A574B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9851D50)
#define CLASS_2_22A121B2468A574B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9851BE0)
#define CLASS_2_22A121B2468A574B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9851D00)
#define CLASS_2_22A121B2468A574B_TICK_OFFSET UNITYSDK_OFFSET(0x9851D90)
#define CLASS_2_22A121B2468A574B__CTOR_OFFSET UNITYSDK_OFFSET(0x9851BD0)

inline static constexpr unsigned int Class_2_22A121B2468A574B_TypeDefinitionIndex = 53643;

class Class_2_22A121B2468A574B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_06CA57680E115A32_5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_06CA57680E115A32_5*))((::PBYTE)hIl2Cpp + CLASS_2_22A121B2468A574B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22A121B2468A574B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22A121B2468A574B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22A121B2468A574B_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_22A121B2468A574B_TICK_OFFSET))(this, a1);
	}
};

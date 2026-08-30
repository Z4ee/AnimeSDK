#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_FA3DB7B30E78C0CA_5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_22A121B2468A574B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB74C850)
#define CLASS_2_22A121B2468A574B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB74C750)
#define CLASS_2_22A121B2468A574B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB74C800)
#define CLASS_2_22A121B2468A574B_TICK_OFFSET UNITYSDK_OFFSET(0xB74C890)
#define CLASS_2_22A121B2468A574B__CTOR_OFFSET UNITYSDK_OFFSET(0xB74C740)

inline static constexpr unsigned int Class_2_22A121B2468A574B_TypeDefinitionIndex = 58310;

class Class_2_22A121B2468A574B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_5*))((::PBYTE)hIl2Cpp + CLASS_2_22A121B2468A574B__CTOR_OFFSET))(this, a1, a2);
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

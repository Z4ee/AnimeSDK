#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_9E1E11FE8F8A3BE2_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_42C2DA9C1BFE91A7_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15FF5410)
#define CLASS_3_42C2DA9C1BFE91A7_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15FF5450)
#define CLASS_3_42C2DA9C1BFE91A7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF53D0)

inline static constexpr unsigned int Class_3_42C2DA9C1BFE91A7_1_TypeDefinitionIndex = 54082;

class Class_3_42C2DA9C1BFE91A7_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_9E1E11FE8F8A3BE2_1*>
{
public:
	::System::Int32 APNGJPMPMOB; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_9E1E11FE8F8A3BE2_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_9E1E11FE8F8A3BE2_1*))((::PBYTE)hIl2Cpp + CLASS_3_42C2DA9C1BFE91A7_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_42C2DA9C1BFE91A7_1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_42C2DA9C1BFE91A7_1_ONTASKBEGIN_OFFSET))(this);
	}
};

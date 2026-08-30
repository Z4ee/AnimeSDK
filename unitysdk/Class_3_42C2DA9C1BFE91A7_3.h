#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_4B4C632F05EE5573;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_42C2DA9C1BFE91A7_3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CBBA60)
#define CLASS_3_42C2DA9C1BFE91A7_3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CBBAA0)
#define CLASS_3_42C2DA9C1BFE91A7_3__CTOR_OFFSET UNITYSDK_OFFSET(0x15CBBA20)

inline static constexpr unsigned int Class_3_42C2DA9C1BFE91A7_3_TypeDefinitionIndex = 54365;

class Class_3_42C2DA9C1BFE91A7_3 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_4B4C632F05EE5573*>
{
public:
	::System::Int32 APNGJPMPMOB; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_4B4C632F05EE5573* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_4B4C632F05EE5573*))((::PBYTE)hIl2Cpp + CLASS_3_42C2DA9C1BFE91A7_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_42C2DA9C1BFE91A7_3_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_42C2DA9C1BFE91A7_3_ONTASKBEGIN_OFFSET))(this);
	}
};

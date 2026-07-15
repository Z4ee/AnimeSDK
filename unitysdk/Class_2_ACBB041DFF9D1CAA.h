#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class StopRandomMissionTalk; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_ACBB041DFF9D1CAA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17AAA010)
#define CLASS_2_ACBB041DFF9D1CAA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17AAA050)
#define CLASS_2_ACBB041DFF9D1CAA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17AAA0B0)
#define CLASS_2_ACBB041DFF9D1CAA_TICK_OFFSET UNITYSDK_OFFSET(0x17AAA100)
#define CLASS_2_ACBB041DFF9D1CAA__CTOR_OFFSET UNITYSDK_OFFSET(0x17AAA000)

inline static constexpr unsigned int Class_2_ACBB041DFF9D1CAA_TypeDefinitionIndex = 56108;

class Class_2_ACBB041DFF9D1CAA : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::StopRandomMissionTalk* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopRandomMissionTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopRandomMissionTalk*))((::PBYTE)hIl2Cpp + CLASS_2_ACBB041DFF9D1CAA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACBB041DFF9D1CAA_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACBB041DFF9D1CAA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACBB041DFF9D1CAA_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ACBB041DFF9D1CAA_TICK_OFFSET))(this, a1);
	}
};

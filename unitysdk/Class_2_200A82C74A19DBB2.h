#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_FA3DB7B30E78C0CA_36;
namespace RPG::GameCore { class ReleaseEnvProfileForStory; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_200A82C74A19DBB2_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB3CD270)
#define CLASS_2_200A82C74A19DBB2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB3CD2B0)
#define CLASS_2_200A82C74A19DBB2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB3CD520)
#define CLASS_2_200A82C74A19DBB2_TICK_OFFSET UNITYSDK_OFFSET(0xB3CD570)
#define CLASS_2_200A82C74A19DBB2__CTOR_OFFSET UNITYSDK_OFFSET(0xB3CD260)

inline static constexpr unsigned int Class_2_200A82C74A19DBB2_TypeDefinitionIndex = 58382;

class Class_2_200A82C74A19DBB2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::ReleaseEnvProfileForStory* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_36* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_36*))((::PBYTE)hIl2Cpp + CLASS_2_200A82C74A19DBB2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200A82C74A19DBB2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200A82C74A19DBB2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_200A82C74A19DBB2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_200A82C74A19DBB2_TICK_OFFSET))(this, a1);
	}
};

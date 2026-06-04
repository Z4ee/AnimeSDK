#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_9CAA42EF32347EE5_2;
namespace RPG::GameCore { class SetTargetCrossHairVisible; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_C618C2A1438C85A5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10C90010)
#define CLASS_2_C618C2A1438C85A5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10C90050)
#define CLASS_2_C618C2A1438C85A5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10C901F0)
#define CLASS_2_C618C2A1438C85A5_TICK_OFFSET UNITYSDK_OFFSET(0x10C90240)
#define CLASS_2_C618C2A1438C85A5__CTOR_OFFSET UNITYSDK_OFFSET(0x10C8FF90)

inline static constexpr unsigned int Class_2_C618C2A1438C85A5_TypeDefinitionIndex = 52684;

class Class_2_C618C2A1438C85A5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetTargetCrossHairVisible* Field_2_0; // 0x18
	::Class_1_9CAA42EF32347EE5_2* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetCrossHairVisible* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetCrossHairVisible*))((::PBYTE)hIl2Cpp + CLASS_2_C618C2A1438C85A5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C618C2A1438C85A5_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C618C2A1438C85A5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C618C2A1438C85A5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C618C2A1438C85A5_TICK_OFFSET))(this, a1);
	}
};

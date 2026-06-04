#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_E3332B678B8C5C07;
namespace RPG::GameCore { class LevelGraphConfig; }
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace RPG::GameCore { class StartSubGraphRaw; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_6180D94999EC13F6_DISPOSE_OFFSET UNITYSDK_OFFSET(0xACE41D0)
#define CLASS_2_6180D94999EC13F6_METHOD_2_4D02336BF40A174D_OFFSET UNITYSDK_OFFSET(0xACE4690)
#define CLASS_2_6180D94999EC13F6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xACE4480)
#define CLASS_2_6180D94999EC13F6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xACE4230)
#define CLASS_2_6180D94999EC13F6_TICK_OFFSET UNITYSDK_OFFSET(0xACE43B0)
#define CLASS_2_6180D94999EC13F6__CTOR_OFFSET UNITYSDK_OFFSET(0xACE4150)

inline static constexpr unsigned int Class_2_6180D94999EC13F6_TypeDefinitionIndex = 49810;

class Class_2_6180D94999EC13F6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::LevelGraphConfig* Field_2_0; // 0x18
	::RPG::GameCore::StartSubGraphRaw* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::Class_2_E3332B678B8C5C07* Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartSubGraphRaw* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartSubGraphRaw*))((::PBYTE)hIl2Cpp + CLASS_2_6180D94999EC13F6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6180D94999EC13F6_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6180D94999EC13F6_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6180D94999EC13F6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6180D94999EC13F6_ONTASKRESET_OFFSET))(this);
	}

	::RPG::GameCore::LevelGraphValueSource* Method_2_4D02336BF40A174D()
	{
		return ((::RPG::GameCore::LevelGraphValueSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6180D94999EC13F6_METHOD_2_4D02336BF40A174D_OFFSET))(this);
	}
};

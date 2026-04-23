#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShuffleTargetList; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A6007120640F8A24_DISPOSE_OFFSET UNITYSDK_OFFSET(0x98B62E0)
#define CLASS_2_A6007120640F8A24_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x98B6320)
#define CLASS_2_A6007120640F8A24_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x98B6440)
#define CLASS_2_A6007120640F8A24_TICK_OFFSET UNITYSDK_OFFSET(0x98B6490)
#define CLASS_2_A6007120640F8A24__CTOR_OFFSET UNITYSDK_OFFSET(0x98B62D0)

inline static constexpr unsigned int Class_2_A6007120640F8A24_TypeDefinitionIndex = 51283;

class Class_2_A6007120640F8A24 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShuffleTargetList* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShuffleTargetList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShuffleTargetList*))((::PBYTE)hIl2Cpp + CLASS_2_A6007120640F8A24__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6007120640F8A24_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6007120640F8A24_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6007120640F8A24_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A6007120640F8A24_TICK_OFFSET))(this, a1);
	}
};

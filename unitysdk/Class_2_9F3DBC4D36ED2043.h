#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class SwitchCharacterAnchorV2; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_9F3DBC4D36ED2043_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12A067A0)
#define CLASS_2_9F3DBC4D36ED2043_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12A06AB0)
#define CLASS_2_9F3DBC4D36ED2043_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12A06890)
#define CLASS_2_9F3DBC4D36ED2043_TICK_OFFSET UNITYSDK_OFFSET(0x12A06910)
#define CLASS_2_9F3DBC4D36ED2043__CTOR_OFFSET UNITYSDK_OFFSET(0x12A06630)

inline static constexpr unsigned int Class_2_9F3DBC4D36ED2043_TypeDefinitionIndex = 49155;

class Class_2_9F3DBC4D36ED2043 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x20
	::RPG::GameCore::SwitchCharacterAnchorV2* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchCharacterAnchorV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchCharacterAnchorV2*))((::PBYTE)hIl2Cpp + CLASS_2_9F3DBC4D36ED2043__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F3DBC4D36ED2043_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9F3DBC4D36ED2043_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F3DBC4D36ED2043_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F3DBC4D36ED2043_ONTASKRESET_OFFSET))(this);
	}
};

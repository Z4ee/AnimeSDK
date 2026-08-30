#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PropEscalatorMoveStop; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_8C2BCB174B12F26F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA2ACE0)
#define CLASS_2_8C2BCB174B12F26F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA2AD80)
#define CLASS_2_8C2BCB174B12F26F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA2AD30)
#define CLASS_2_8C2BCB174B12F26F_TICK_OFFSET UNITYSDK_OFFSET(0xBA2AEC0)
#define CLASS_2_8C2BCB174B12F26F__CTOR_OFFSET UNITYSDK_OFFSET(0xBA2ACD0)

inline static constexpr unsigned int Class_2_8C2BCB174B12F26F_TypeDefinitionIndex = 58470;

class Class_2_8C2BCB174B12F26F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::PropEscalatorMoveStop* OFKGLJOAMLD; // 0x20
	::System::String* IJMGEMMNNPI; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropEscalatorMoveStop* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropEscalatorMoveStop*))((::PBYTE)hIl2Cpp + CLASS_2_8C2BCB174B12F26F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C2BCB174B12F26F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C2BCB174B12F26F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C2BCB174B12F26F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8C2BCB174B12F26F_TICK_OFFSET))(this, a1);
	}
};

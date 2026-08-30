#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrainPartyShowEventFadeIn; }

#define CLASS_2_B5CD7CAF9AD255B9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x161E5B00)
#define CLASS_2_B5CD7CAF9AD255B9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x161E5D50)
#define CLASS_2_B5CD7CAF9AD255B9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x161E5B40)
#define CLASS_2_B5CD7CAF9AD255B9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x161E5CA0)
#define CLASS_2_B5CD7CAF9AD255B9_TICK_OFFSET UNITYSDK_OFFSET(0x161E5CF0)
#define CLASS_2_B5CD7CAF9AD255B9__CTOR_OFFSET UNITYSDK_OFFSET(0x161E5AF0)

inline static constexpr unsigned int Class_2_B5CD7CAF9AD255B9_TypeDefinitionIndex = 53686;

class Class_2_B5CD7CAF9AD255B9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::TrainPartyShowEventFadeIn* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TrainPartyShowEventFadeIn* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TrainPartyShowEventFadeIn*))((::PBYTE)hIl2Cpp + CLASS_2_B5CD7CAF9AD255B9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5CD7CAF9AD255B9_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5CD7CAF9AD255B9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5CD7CAF9AD255B9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B5CD7CAF9AD255B9_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5CD7CAF9AD255B9_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RemoveLevelAreas; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_C9DD464A1BBF1F80_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17EA9DC0)
#define CLASS_2_C9DD464A1BBF1F80_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x17EA9FC0)
#define CLASS_2_C9DD464A1BBF1F80_ONSKIP_OFFSET UNITYSDK_OFFSET(0x17EA9FD0)
#define CLASS_2_C9DD464A1BBF1F80_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17EA9E00)
#define CLASS_2_C9DD464A1BBF1F80_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17EA9F10)
#define CLASS_2_C9DD464A1BBF1F80_TICK_OFFSET UNITYSDK_OFFSET(0x17EA9F60)
#define CLASS_2_C9DD464A1BBF1F80__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA9DB0)

inline static constexpr unsigned int Class_2_C9DD464A1BBF1F80_TypeDefinitionIndex = 58536;

class Class_2_C9DD464A1BBF1F80 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RemoveLevelAreas* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveLevelAreas* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveLevelAreas*))((::PBYTE)hIl2Cpp + CLASS_2_C9DD464A1BBF1F80__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9DD464A1BBF1F80_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9DD464A1BBF1F80_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9DD464A1BBF1F80_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C9DD464A1BBF1F80_TICK_OFFSET))(this, a1);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9DD464A1BBF1F80_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9DD464A1BBF1F80_ONSKIP_OFFSET))(this);
	}
};

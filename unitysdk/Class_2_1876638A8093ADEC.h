#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class LockToast; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1876638A8093ADEC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF446DB0)
#define CLASS_2_1876638A8093ADEC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF446DF0)
#define CLASS_2_1876638A8093ADEC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF446E70)
#define CLASS_2_1876638A8093ADEC_TICK_OFFSET UNITYSDK_OFFSET(0xF446EC0)
#define CLASS_2_1876638A8093ADEC__CTOR_OFFSET UNITYSDK_OFFSET(0xF446DA0)

inline static constexpr unsigned int Class_2_1876638A8093ADEC_TypeDefinitionIndex = 58359;

class Class_2_1876638A8093ADEC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::LockToast* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockToast* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockToast*))((::PBYTE)hIl2Cpp + CLASS_2_1876638A8093ADEC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1876638A8093ADEC_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1876638A8093ADEC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1876638A8093ADEC_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1876638A8093ADEC_TICK_OFFSET))(this, a1);
	}
};

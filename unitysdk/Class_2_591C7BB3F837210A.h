#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class FrameCaptureIfNeed; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_591C7BB3F837210A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB93B590)
#define CLASS_2_591C7BB3F837210A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB93B5D0)
#define CLASS_2_591C7BB3F837210A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB93B720)
#define CLASS_2_591C7BB3F837210A_TICK_OFFSET UNITYSDK_OFFSET(0xB93B770)
#define CLASS_2_591C7BB3F837210A__CTOR_OFFSET UNITYSDK_OFFSET(0xB93B580)

inline static constexpr unsigned int Class_2_591C7BB3F837210A_TypeDefinitionIndex = 55282;

class Class_2_591C7BB3F837210A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::FrameCaptureIfNeed* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
	::System::Int32 OAOAKFFKDHB; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FrameCaptureIfNeed* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FrameCaptureIfNeed*))((::PBYTE)hIl2Cpp + CLASS_2_591C7BB3F837210A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_591C7BB3F837210A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_591C7BB3F837210A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_591C7BB3F837210A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_591C7BB3F837210A_TICK_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Class_2_C314A19E73347FF2_InnerState.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SynchronouslyTriggerSound; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_C314A19E73347FF2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14C714E0)
#define CLASS_2_C314A19E73347FF2_METHOD_2_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x14C71350)
#define CLASS_2_C314A19E73347FF2_METHOD_2_4BD4D7606154E372_1_OFFSET UNITYSDK_OFFSET(0x14C71800)
#define CLASS_2_C314A19E73347FF2_METHOD_2_4BD4D7606154E372_OFFSET UNITYSDK_OFFSET(0x14C71890)
#define CLASS_2_C314A19E73347FF2_METHOD_2_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x14C71A00)
#define CLASS_2_C314A19E73347FF2_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x14C71290)
#define CLASS_2_C314A19E73347FF2_METHOD_2_A94BAB85685275CB_OFFSET UNITYSDK_OFFSET(0x14C71920)
#define CLASS_2_C314A19E73347FF2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14C710C0)
#define CLASS_2_C314A19E73347FF2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14C71520)
#define CLASS_2_C314A19E73347FF2_TICK_OFFSET UNITYSDK_OFFSET(0x14C71570)
#define CLASS_2_C314A19E73347FF2__CTOR_OFFSET UNITYSDK_OFFSET(0x14C710B0)

inline static constexpr unsigned int Class_2_C314A19E73347FF2_TypeDefinitionIndex = 56658;

class Class_2_C314A19E73347FF2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::String* CBBKMNEHIMB; // 0x18
	::System::String* EKNDOJDMBPM; // 0x20
	::RPG::GameCore::SynchronouslyTriggerSound* OFKGLJOAMLD; // 0x28
	::RPG::GameCore::GameEntity* ONIACPBDNMH; // 0x30
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
	::Class_2_C314A19E73347FF2_InnerState DLNIGFGLPLJ; // 0x40
	::System::UInt32 DHEOFFACDEK; // 0x44

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SynchronouslyTriggerSound* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SynchronouslyTriggerSound*))((::PBYTE)hIl2Cpp + CLASS_2_C314A19E73347FF2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C314A19E73347FF2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C314A19E73347FF2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C314A19E73347FF2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C314A19E73347FF2_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C314A19E73347FF2_METHOD_2_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_2_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_C314A19E73347FF2_METHOD_2_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_2_A94BAB85685275CB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C314A19E73347FF2_METHOD_2_A94BAB85685275CB_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_4BD4D7606154E372()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C314A19E73347FF2_METHOD_2_4BD4D7606154E372_OFFSET))(this);
	}

	::System::Int32 Method_2_4BD4D7606154E372_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C314A19E73347FF2_METHOD_2_4BD4D7606154E372_1_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C314A19E73347FF2_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}
};

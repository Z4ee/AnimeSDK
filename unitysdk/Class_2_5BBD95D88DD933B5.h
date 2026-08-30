#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_C6FD03DFDE9D9EFF;
namespace RPG::GameCore { class SetAudienceGroupVisible; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5BBD95D88DD933B5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1953F830)
#define CLASS_2_5BBD95D88DD933B5_METHOD_2_03F25796FF41212C_OFFSET UNITYSDK_OFFSET(0x1953F6A0)
#define CLASS_2_5BBD95D88DD933B5_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1953F660)
#define CLASS_2_5BBD95D88DD933B5_METHOD_2_939B0A8FB671683E_OFFSET UNITYSDK_OFFSET(0x1953F4E0)
#define CLASS_2_5BBD95D88DD933B5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1953F9D0)
#define CLASS_2_5BBD95D88DD933B5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1953F7E0)
#define CLASS_2_5BBD95D88DD933B5_TICK_OFFSET UNITYSDK_OFFSET(0x1953F880)
#define CLASS_2_5BBD95D88DD933B5__CTOR_OFFSET UNITYSDK_OFFSET(0x1953F4D0)

inline static constexpr unsigned int Class_2_5BBD95D88DD933B5_TypeDefinitionIndex = 58659;

class Class_2_5BBD95D88DD933B5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SetAudienceGroupVisible* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAudienceGroupVisible* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAudienceGroupVisible*))((::PBYTE)hIl2Cpp + CLASS_2_5BBD95D88DD933B5__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_C6FD03DFDE9D9EFF* Method_2_939B0A8FB671683E()
	{
		return ((::Class_1_C6FD03DFDE9D9EFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BBD95D88DD933B5_METHOD_2_939B0A8FB671683E_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BBD95D88DD933B5_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_03F25796FF41212C(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5BBD95D88DD933B5_METHOD_2_03F25796FF41212C_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BBD95D88DD933B5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BBD95D88DD933B5_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5BBD95D88DD933B5_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BBD95D88DD933B5_ONTASKBEGIN_OFFSET))(this);
	}
};

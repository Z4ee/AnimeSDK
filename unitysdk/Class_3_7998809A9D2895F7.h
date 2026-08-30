#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A406659BC3B2A585_3;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7998809A9D2895F7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF768B0)
#define CLASS_3_7998809A9D2895F7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF768F0)
#define CLASS_3_7998809A9D2895F7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBF76960)
#define CLASS_3_7998809A9D2895F7_TICK_OFFSET UNITYSDK_OFFSET(0xBF769B0)
#define CLASS_3_7998809A9D2895F7__CTOR_OFFSET UNITYSDK_OFFSET(0xBF76870)

inline static constexpr unsigned int Class_3_7998809A9D2895F7_TypeDefinitionIndex = 58318;

class Class_3_7998809A9D2895F7 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A406659BC3B2A585_3*>
{
public:
	::System::Boolean IDBHEIBEGBA; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A406659BC3B2A585_3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A406659BC3B2A585_3*))((::PBYTE)hIl2Cpp + CLASS_3_7998809A9D2895F7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7998809A9D2895F7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7998809A9D2895F7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7998809A9D2895F7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7998809A9D2895F7_TICK_OFFSET))(this, a1);
	}
};

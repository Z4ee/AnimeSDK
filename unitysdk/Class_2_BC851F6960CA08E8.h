#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerUITopEffect; }

#define CLASS_2_BC851F6960CA08E8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B72080)
#define CLASS_2_BC851F6960CA08E8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18B720C0)
#define CLASS_2_BC851F6960CA08E8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18B723B0)
#define CLASS_2_BC851F6960CA08E8_TICK_OFFSET UNITYSDK_OFFSET(0x18B72400)
#define CLASS_2_BC851F6960CA08E8__CTOR_OFFSET UNITYSDK_OFFSET(0x18B72070)

inline static constexpr unsigned int Class_2_BC851F6960CA08E8_TypeDefinitionIndex = 53244;

class Class_2_BC851F6960CA08E8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::TriggerUITopEffect* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerUITopEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerUITopEffect*))((::PBYTE)hIl2Cpp + CLASS_2_BC851F6960CA08E8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC851F6960CA08E8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC851F6960CA08E8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC851F6960CA08E8_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BC851F6960CA08E8_TICK_OFFSET))(this, a1);
	}
};

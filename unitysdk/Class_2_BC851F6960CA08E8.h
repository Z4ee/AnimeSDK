#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerUITopEffect; }

#define CLASS_2_BC851F6960CA08E8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x127CE9D0)
#define CLASS_2_BC851F6960CA08E8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x127CEA10)
#define CLASS_2_BC851F6960CA08E8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x127CECD0)
#define CLASS_2_BC851F6960CA08E8_TICK_OFFSET UNITYSDK_OFFSET(0x127CED20)
#define CLASS_2_BC851F6960CA08E8__CTOR_OFFSET UNITYSDK_OFFSET(0x127CE9C0)

inline static constexpr unsigned int Class_2_BC851F6960CA08E8_TypeDefinitionIndex = 51419;

class Class_2_BC851F6960CA08E8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TriggerUITopEffect* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

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

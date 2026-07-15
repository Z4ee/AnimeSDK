#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class LensGlitchEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_41D05D8F2F08A76C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18C969E0)
#define CLASS_2_41D05D8F2F08A76C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18C96A20)
#define CLASS_2_41D05D8F2F08A76C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18C96CD0)
#define CLASS_2_41D05D8F2F08A76C_TICK_OFFSET UNITYSDK_OFFSET(0x18C96D20)
#define CLASS_2_41D05D8F2F08A76C__CTOR_OFFSET UNITYSDK_OFFSET(0x18C969D0)

inline static constexpr unsigned int Class_2_41D05D8F2F08A76C_TypeDefinitionIndex = 52640;

class Class_2_41D05D8F2F08A76C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::LensGlitchEffect* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LensGlitchEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LensGlitchEffect*))((::PBYTE)hIl2Cpp + CLASS_2_41D05D8F2F08A76C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41D05D8F2F08A76C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41D05D8F2F08A76C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41D05D8F2F08A76C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_41D05D8F2F08A76C_TICK_OFFSET))(this, a1);
	}
};

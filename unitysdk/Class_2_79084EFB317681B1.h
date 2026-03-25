#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GlobalMainIntensityEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_79084EFB317681B1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10AA49C0)
#define CLASS_2_79084EFB317681B1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10AA4410)
#define CLASS_2_79084EFB317681B1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10AA4910)
#define CLASS_2_79084EFB317681B1_TICK_OFFSET UNITYSDK_OFFSET(0x10AA4960)
#define CLASS_2_79084EFB317681B1__CTOR_OFFSET UNITYSDK_OFFSET(0x10AA4400)

inline static constexpr unsigned int Class_2_79084EFB317681B1_TypeDefinitionIndex = 45307;

class Class_2_79084EFB317681B1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GlobalMainIntensityEffect* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GlobalMainIntensityEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GlobalMainIntensityEffect*))((::PBYTE)hIl2Cpp + CLASS_2_79084EFB317681B1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79084EFB317681B1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79084EFB317681B1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_79084EFB317681B1_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79084EFB317681B1_DISPOSE_OFFSET))(this);
	}
};

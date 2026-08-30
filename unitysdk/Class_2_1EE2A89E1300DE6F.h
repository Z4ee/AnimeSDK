#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class LoadLittleGameArea; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1EE2A89E1300DE6F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC342900)
#define CLASS_2_1EE2A89E1300DE6F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC3427C0)
#define CLASS_2_1EE2A89E1300DE6F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC3428B0)
#define CLASS_2_1EE2A89E1300DE6F_TICK_OFFSET UNITYSDK_OFFSET(0xC342940)
#define CLASS_2_1EE2A89E1300DE6F__CTOR_OFFSET UNITYSDK_OFFSET(0xC3427B0)

inline static constexpr unsigned int Class_2_1EE2A89E1300DE6F_TypeDefinitionIndex = 58350;

class Class_2_1EE2A89E1300DE6F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::LoadLittleGameArea* IGHAHBNLIJA; // 0x18
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LoadLittleGameArea* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LoadLittleGameArea*))((::PBYTE)hIl2Cpp + CLASS_2_1EE2A89E1300DE6F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1EE2A89E1300DE6F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1EE2A89E1300DE6F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1EE2A89E1300DE6F_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1EE2A89E1300DE6F_TICK_OFFSET))(this, a1);
	}
};

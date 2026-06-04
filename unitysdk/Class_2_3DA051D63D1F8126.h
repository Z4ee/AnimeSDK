#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ModifierPlayerChangeEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_3DA051D63D1F8126_DISPOSE_OFFSET UNITYSDK_OFFSET(0xACB0430)
#define CLASS_2_3DA051D63D1F8126_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xACB0470)
#define CLASS_2_3DA051D63D1F8126_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xACB06C0)
#define CLASS_2_3DA051D63D1F8126_TICK_OFFSET UNITYSDK_OFFSET(0xACB0710)
#define CLASS_2_3DA051D63D1F8126__CTOR_OFFSET UNITYSDK_OFFSET(0xACB0350)

inline static constexpr unsigned int Class_2_3DA051D63D1F8126_TypeDefinitionIndex = 51546;

class Class_2_3DA051D63D1F8126 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::ModifierPlayerChangeEffect* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifierPlayerChangeEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifierPlayerChangeEffect*))((::PBYTE)hIl2Cpp + CLASS_2_3DA051D63D1F8126__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DA051D63D1F8126_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DA051D63D1F8126_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DA051D63D1F8126_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3DA051D63D1F8126_TICK_OFFSET))(this, a1);
	}
};

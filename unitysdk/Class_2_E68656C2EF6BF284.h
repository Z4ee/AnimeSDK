#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ElfProgressUpgrade; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E68656C2EF6BF284_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A93370)
#define CLASS_2_E68656C2EF6BF284_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17A933C0)
#define CLASS_2_E68656C2EF6BF284_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17A93710)
#define CLASS_2_E68656C2EF6BF284_TICK_OFFSET UNITYSDK_OFFSET(0x17A93760)
#define CLASS_2_E68656C2EF6BF284__CTOR_OFFSET UNITYSDK_OFFSET(0x17A93360)

inline static constexpr unsigned int Class_2_E68656C2EF6BF284_TypeDefinitionIndex = 55517;

class Class_2_E68656C2EF6BF284 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::ElfProgressUpgrade* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ElfProgressUpgrade* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ElfProgressUpgrade*))((::PBYTE)hIl2Cpp + CLASS_2_E68656C2EF6BF284__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E68656C2EF6BF284_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E68656C2EF6BF284_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E68656C2EF6BF284_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E68656C2EF6BF284_TICK_OFFSET))(this, a1);
	}
};

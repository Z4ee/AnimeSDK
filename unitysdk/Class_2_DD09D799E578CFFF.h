#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowEntityFloatMessage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_DD09D799E578CFFF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4B0630)
#define CLASS_2_DD09D799E578CFFF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA4B0670)
#define CLASS_2_DD09D799E578CFFF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA4B09C0)
#define CLASS_2_DD09D799E578CFFF_TICK_OFFSET UNITYSDK_OFFSET(0xA4B0A10)
#define CLASS_2_DD09D799E578CFFF__CTOR_OFFSET UNITYSDK_OFFSET(0xA4B0620)

inline static constexpr unsigned int Class_2_DD09D799E578CFFF_TypeDefinitionIndex = 52707;

class Class_2_DD09D799E578CFFF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowEntityFloatMessage* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowEntityFloatMessage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowEntityFloatMessage*))((::PBYTE)hIl2Cpp + CLASS_2_DD09D799E578CFFF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD09D799E578CFFF_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD09D799E578CFFF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD09D799E578CFFF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DD09D799E578CFFF_TICK_OFFSET))(this, a1);
	}
};

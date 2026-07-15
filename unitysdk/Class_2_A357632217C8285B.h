#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SwitchByCommandType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A357632217C8285B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17C84080)
#define CLASS_2_A357632217C8285B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17C840C0)
#define CLASS_2_A357632217C8285B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17C84280)
#define CLASS_2_A357632217C8285B_TICK_OFFSET UNITYSDK_OFFSET(0x17C842D0)
#define CLASS_2_A357632217C8285B__CTOR_OFFSET UNITYSDK_OFFSET(0x17C84070)

inline static constexpr unsigned int Class_2_A357632217C8285B_TypeDefinitionIndex = 53155;

class Class_2_A357632217C8285B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::SwitchByCommandType* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchByCommandType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchByCommandType*))((::PBYTE)hIl2Cpp + CLASS_2_A357632217C8285B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A357632217C8285B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A357632217C8285B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A357632217C8285B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A357632217C8285B_TICK_OFFSET))(this, a1);
	}
};

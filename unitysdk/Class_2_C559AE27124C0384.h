#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RogueShowSelectMainPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_C559AE27124C0384_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1562FC50)
#define CLASS_2_C559AE27124C0384_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1562FCF0)
#define CLASS_2_C559AE27124C0384_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1562FD60)
#define CLASS_2_C559AE27124C0384_TICK_OFFSET UNITYSDK_OFFSET(0x1562FC90)
#define CLASS_2_C559AE27124C0384__CTOR_OFFSET UNITYSDK_OFFSET(0x1562FC40)

inline static constexpr unsigned int Class_2_C559AE27124C0384_TypeDefinitionIndex = 55855;

class Class_2_C559AE27124C0384 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::RogueShowSelectMainPage* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueShowSelectMainPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueShowSelectMainPage*))((::PBYTE)hIl2Cpp + CLASS_2_C559AE27124C0384__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C559AE27124C0384_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C559AE27124C0384_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C559AE27124C0384_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C559AE27124C0384_ONTASKRESET_OFFSET))(this);
	}
};

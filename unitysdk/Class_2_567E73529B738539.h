#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetCharacterFormation; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_567E73529B738539_DISPOSE_OFFSET UNITYSDK_OFFSET(0x117708B0)
#define CLASS_2_567E73529B738539_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x117708F0)
#define CLASS_2_567E73529B738539_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11770EB0)
#define CLASS_2_567E73529B738539_TICK_OFFSET UNITYSDK_OFFSET(0x11770F00)
#define CLASS_2_567E73529B738539__CTOR_OFFSET UNITYSDK_OFFSET(0x117708A0)

inline static constexpr unsigned int Class_2_567E73529B738539_TypeDefinitionIndex = 51051;

class Class_2_567E73529B738539 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::SetCharacterFormation* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterFormation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterFormation*))((::PBYTE)hIl2Cpp + CLASS_2_567E73529B738539__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_567E73529B738539_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_567E73529B738539_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_567E73529B738539_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_567E73529B738539_TICK_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowCurrentMapPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A7A8E27531BA22EA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x930FBA0)
#define CLASS_2_A7A8E27531BA22EA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x930FC40)
#define CLASS_2_A7A8E27531BA22EA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x930FCB0)
#define CLASS_2_A7A8E27531BA22EA_TICK_OFFSET UNITYSDK_OFFSET(0x930FBE0)
#define CLASS_2_A7A8E27531BA22EA__CTOR_OFFSET UNITYSDK_OFFSET(0x930FB90)

inline static constexpr unsigned int Class_2_A7A8E27531BA22EA_TypeDefinitionIndex = 54045;

class Class_2_A7A8E27531BA22EA : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowCurrentMapPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowCurrentMapPage*))((::PBYTE)hIl2Cpp + CLASS_2_A7A8E27531BA22EA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7A8E27531BA22EA_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A7A8E27531BA22EA_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7A8E27531BA22EA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7A8E27531BA22EA_ONTASKRESET_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowCurrentMapPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A7A8E27531BA22EA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16F613B0)
#define CLASS_2_A7A8E27531BA22EA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16F61450)
#define CLASS_2_A7A8E27531BA22EA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16F614C0)
#define CLASS_2_A7A8E27531BA22EA_TICK_OFFSET UNITYSDK_OFFSET(0x16F613F0)
#define CLASS_2_A7A8E27531BA22EA__CTOR_OFFSET UNITYSDK_OFFSET(0x16F613A0)

inline static constexpr unsigned int Class_2_A7A8E27531BA22EA_TypeDefinitionIndex = 55998;

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

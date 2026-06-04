#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class MuteMonsterLastKill; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5CF342D82A7D1E72_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCECB000)
#define CLASS_2_5CF342D82A7D1E72_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCECB040)
#define CLASS_2_5CF342D82A7D1E72_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCECB200)
#define CLASS_2_5CF342D82A7D1E72_TICK_OFFSET UNITYSDK_OFFSET(0xCECB250)
#define CLASS_2_5CF342D82A7D1E72__CTOR_OFFSET UNITYSDK_OFFSET(0xCECAFF0)

inline static constexpr unsigned int Class_2_5CF342D82A7D1E72_TypeDefinitionIndex = 54429;

class Class_2_5CF342D82A7D1E72 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::MuteMonsterLastKill* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MuteMonsterLastKill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MuteMonsterLastKill*))((::PBYTE)hIl2Cpp + CLASS_2_5CF342D82A7D1E72__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CF342D82A7D1E72_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CF342D82A7D1E72_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CF342D82A7D1E72_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5CF342D82A7D1E72_TICK_OFFSET))(this, a1);
	}
};

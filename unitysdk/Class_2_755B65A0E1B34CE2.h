#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TravelShipHideUI; }

#define CLASS_2_755B65A0E1B34CE2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10588BD0)
#define CLASS_2_755B65A0E1B34CE2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10588C70)
#define CLASS_2_755B65A0E1B34CE2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10588DA0)
#define CLASS_2_755B65A0E1B34CE2_TICK_OFFSET UNITYSDK_OFFSET(0x10588C10)
#define CLASS_2_755B65A0E1B34CE2__CTOR_OFFSET UNITYSDK_OFFSET(0x10588BC0)

inline static constexpr unsigned int Class_2_755B65A0E1B34CE2_TypeDefinitionIndex = 43271;

class Class_2_755B65A0E1B34CE2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_2; // 0x18
	::RPG::GameCore::TravelShipHideUI* Field_2_1; // 0x20
	::System::UInt32 Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TravelShipHideUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TravelShipHideUI*))((::PBYTE)hIl2Cpp + CLASS_2_755B65A0E1B34CE2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_755B65A0E1B34CE2_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_755B65A0E1B34CE2_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_755B65A0E1B34CE2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_755B65A0E1B34CE2_ONTASKRESET_OFFSET))(this);
	}
};

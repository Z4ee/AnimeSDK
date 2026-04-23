#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TravelShipHideDockMapIcon; }

#define CLASS_2_AE43BBA620A344B1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11DC44E0)
#define CLASS_2_AE43BBA620A344B1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11DC4580)
#define CLASS_2_AE43BBA620A344B1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11DC48F0)
#define CLASS_2_AE43BBA620A344B1_TICK_OFFSET UNITYSDK_OFFSET(0x11DC4520)
#define CLASS_2_AE43BBA620A344B1__CTOR_OFFSET UNITYSDK_OFFSET(0x11DC44D0)

inline static constexpr unsigned int Class_2_AE43BBA620A344B1_TypeDefinitionIndex = 49265;

class Class_2_AE43BBA620A344B1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::TravelShipHideDockMapIcon* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TravelShipHideDockMapIcon* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TravelShipHideDockMapIcon*))((::PBYTE)hIl2Cpp + CLASS_2_AE43BBA620A344B1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE43BBA620A344B1_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AE43BBA620A344B1_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE43BBA620A344B1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE43BBA620A344B1_ONTASKRESET_OFFSET))(this);
	}
};

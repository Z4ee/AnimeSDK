#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropCurveReadMoveRatio; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_80AD4A35834AE2C0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E42550)
#define CLASS_2_80AD4A35834AE2C0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9E425A0)
#define CLASS_2_80AD4A35834AE2C0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9E429D0)
#define CLASS_2_80AD4A35834AE2C0_TICK_OFFSET UNITYSDK_OFFSET(0x9E42670)
#define CLASS_2_80AD4A35834AE2C0__CTOR_OFFSET UNITYSDK_OFFSET(0x9E42540)

inline static constexpr unsigned int Class_2_80AD4A35834AE2C0_TypeDefinitionIndex = 53785;

class Class_2_80AD4A35834AE2C0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameEntity* Field_2_3; // 0x18
	::RPG::GameCore::GameEntity* Field_2_4; // 0x20
	::RPG::GameCore::PropCurveReadMoveRatio* Field_2_0; // 0x28
	::System::String* Field_2_2; // 0x30
	::RPG::GameCore::TaskContext* Field_2_1; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropCurveReadMoveRatio* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropCurveReadMoveRatio*))((::PBYTE)hIl2Cpp + CLASS_2_80AD4A35834AE2C0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80AD4A35834AE2C0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80AD4A35834AE2C0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_80AD4A35834AE2C0_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80AD4A35834AE2C0_ONTASKRESET_OFFSET))(this);
	}
};

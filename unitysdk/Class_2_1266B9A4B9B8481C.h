#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class GlobalTimeSlow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1266B9A4B9B8481C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x170D2320)
#define CLASS_2_1266B9A4B9B8481C_METHOD_2_79329BF7EA8A0EED_OFFSET UNITYSDK_OFFSET(0x170D2FE0)
#define CLASS_2_1266B9A4B9B8481C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x170D2360)
#define CLASS_2_1266B9A4B9B8481C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x170D2F30)
#define CLASS_2_1266B9A4B9B8481C_TICK_OFFSET UNITYSDK_OFFSET(0x170D2F80)
#define CLASS_2_1266B9A4B9B8481C__CTOR_OFFSET UNITYSDK_OFFSET(0x170D2310)

inline static constexpr unsigned int Class_2_1266B9A4B9B8481C_TypeDefinitionIndex = 52589;

class Class_2_1266B9A4B9B8481C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GlobalTimeSlow* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GlobalTimeSlow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GlobalTimeSlow*))((::PBYTE)hIl2Cpp + CLASS_2_1266B9A4B9B8481C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1266B9A4B9B8481C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1266B9A4B9B8481C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1266B9A4B9B8481C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1266B9A4B9B8481C_TICK_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_79329BF7EA8A0EED(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_2_1266B9A4B9B8481C_METHOD_2_79329BF7EA8A0EED_OFFSET))(a1);
	}
};

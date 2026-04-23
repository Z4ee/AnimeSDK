#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/MiniGameEventReason.h"

class Class_3_C270952194C1A3FA_4;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_41DAC8EC541DB839_DISPOSE_OFFSET UNITYSDK_OFFSET(0x903B730)
#define CLASS_2_41DAC8EC541DB839_METHOD_2_3A524DCA4ED63DFE_OFFSET UNITYSDK_OFFSET(0x903BCF0)
#define CLASS_2_41DAC8EC541DB839_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x903B910)
#define CLASS_2_41DAC8EC541DB839_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x903B7D0)
#define CLASS_2_41DAC8EC541DB839_TICK_OFFSET UNITYSDK_OFFSET(0x903BB30)
#define CLASS_2_41DAC8EC541DB839__CTOR_OFFSET UNITYSDK_OFFSET(0x903B720)

inline static constexpr unsigned int Class_2_41DAC8EC541DB839_TypeDefinitionIndex = 48739;

class Class_2_41DAC8EC541DB839 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_2_4; // 0x20
	::RPG::GameCore::TaskContext* Field_2_0; // 0x28
	::RPG::Client::FiveDimGameInstance* Field_2_2; // 0x30
	::Class_3_C270952194C1A3FA_4* Field_2_1; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_C270952194C1A3FA_4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_C270952194C1A3FA_4*))((::PBYTE)hIl2Cpp + CLASS_2_41DAC8EC541DB839__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41DAC8EC541DB839_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41DAC8EC541DB839_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41DAC8EC541DB839_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_41DAC8EC541DB839_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_3A524DCA4ED63DFE(::RPG::Client::LittleGame::FiveDim::MiniGameEventReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::MiniGameEventReason))((::PBYTE)hIl2Cpp + CLASS_2_41DAC8EC541DB839_METHOD_2_3A524DCA4ED63DFE_OFFSET))(this, a1);
	}
};

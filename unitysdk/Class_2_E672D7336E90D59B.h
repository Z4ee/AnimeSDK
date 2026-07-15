#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_425;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace RPG::GameCore { class WaitTurnCount; }

#define CLASS_2_E672D7336E90D59B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158BD860)
#define CLASS_2_E672D7336E90D59B_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x158BDB50)
#define CLASS_2_E672D7336E90D59B_METHOD_2_8195634BB4648E50_OFFSET UNITYSDK_OFFSET(0x158BE250)
#define CLASS_2_E672D7336E90D59B_METHOD_2_8DF4953C131A0338_OFFSET UNITYSDK_OFFSET(0x158BDF50)
#define CLASS_2_E672D7336E90D59B_METHOD_2_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x158BDEB0)
#define CLASS_2_E672D7336E90D59B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158BD9F0)
#define CLASS_2_E672D7336E90D59B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x158BDD20)
#define CLASS_2_E672D7336E90D59B_TICK_OFFSET UNITYSDK_OFFSET(0x158BDD70)
#define CLASS_2_E672D7336E90D59B__CTOR_OFFSET UNITYSDK_OFFSET(0x158BD7D0)

inline static constexpr unsigned int Class_2_E672D7336E90D59B_TypeDefinitionIndex = 56300;

class Class_2_E672D7336E90D59B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::WaitTurnCount* Field_2_2; // 0x28
	::System::UInt32 Field_2_3; // 0x30
	::System::UInt32 Field_2_4; // 0x34

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitTurnCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitTurnCount*))((::PBYTE)hIl2Cpp + CLASS_2_E672D7336E90D59B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E672D7336E90D59B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E672D7336E90D59B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E672D7336E90D59B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E672D7336E90D59B_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_8DF4953C131A0338(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_E672D7336E90D59B_METHOD_2_8DF4953C131A0338_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E672D7336E90D59B_METHOD_2_70589F89E4D22649_OFFSET))(this);
	}

	::System::UInt32 Method_2_8195634BB4648E50(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_2_E672D7336E90D59B_METHOD_2_8195634BB4648E50_OFFSET))(this, a1);
	}

	::System::Void Method_2_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E672D7336E90D59B_METHOD_2_F4ADC37B63F4E9EF_OFFSET))(this);
	}
};

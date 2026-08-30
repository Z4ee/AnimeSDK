#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerRogueAvatarPick; }

#define CLASS_2_AAA9B77C0F3BD977_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6B91F0)
#define CLASS_2_AAA9B77C0F3BD977_METHOD_2_4E393AA46F990612_OFFSET UNITYSDK_OFFSET(0xB6B9600)
#define CLASS_2_AAA9B77C0F3BD977_METHOD_2_C197CB827FE7006F_OFFSET UNITYSDK_OFFSET(0xB6B93C0)
#define CLASS_2_AAA9B77C0F3BD977_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6B9290)
#define CLASS_2_AAA9B77C0F3BD977_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB6B95B0)
#define CLASS_2_AAA9B77C0F3BD977_TICK_OFFSET UNITYSDK_OFFSET(0xB6B9230)
#define CLASS_2_AAA9B77C0F3BD977__CTOR_OFFSET UNITYSDK_OFFSET(0xB6B91E0)
#define CLASS_2_AAA9B77C0F3BD977__ONTASKBEGIN_B__3_0_OFFSET UNITYSDK_OFFSET(0xB6B9720)

inline static constexpr unsigned int Class_2_AAA9B77C0F3BD977_TypeDefinitionIndex = 58942;

class Class_2_AAA9B77C0F3BD977 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TriggerRogueAvatarPick* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::Client::UIController* OGOFNHAGOPO; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerRogueAvatarPick* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerRogueAvatarPick*))((::PBYTE)hIl2Cpp + CLASS_2_AAA9B77C0F3BD977__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AAA9B77C0F3BD977_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AAA9B77C0F3BD977_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AAA9B77C0F3BD977_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AAA9B77C0F3BD977_ONTASKRESET_OFFSET))(this);
	}

	::RPG::Client::UIController* Method_2_C197CB827FE7006F()
	{
		return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AAA9B77C0F3BD977_METHOD_2_C197CB827FE7006F_OFFSET))(this);
	}

	::RPG::GameCore::PropComponent* Method_2_4E393AA46F990612()
	{
		return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AAA9B77C0F3BD977_METHOD_2_4E393AA46F990612_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__3_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AAA9B77C0F3BD977__ONTASKBEGIN_B__3_0_OFFSET))(this);
	}
};

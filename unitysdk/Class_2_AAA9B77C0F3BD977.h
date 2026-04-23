#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerRogueAvatarPick; }

#define CLASS_2_AAA9B77C0F3BD977_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11BF6920)
#define CLASS_2_AAA9B77C0F3BD977_METHOD_2_16FA1B4F03A95136_OFFSET UNITYSDK_OFFSET(0x11BF6AE0)
#define CLASS_2_AAA9B77C0F3BD977_METHOD_2_68758F54AFF5CC3A_OFFSET UNITYSDK_OFFSET(0x11BF6D60)
#define CLASS_2_AAA9B77C0F3BD977_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11BF69C0)
#define CLASS_2_AAA9B77C0F3BD977_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11BF6D10)
#define CLASS_2_AAA9B77C0F3BD977_TICK_OFFSET UNITYSDK_OFFSET(0x11BF6960)
#define CLASS_2_AAA9B77C0F3BD977__CTOR_OFFSET UNITYSDK_OFFSET(0x11BF6910)
#define CLASS_2_AAA9B77C0F3BD977__ONTASKBEGIN_B__3_0_OFFSET UNITYSDK_OFFSET(0x11BF6E20)

inline static constexpr unsigned int Class_2_AAA9B77C0F3BD977_TypeDefinitionIndex = 54206;

class Class_2_AAA9B77C0F3BD977 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::TriggerRogueAvatarPick* Field_2_2; // 0x20
	::RPG::Client::UIController* Field_2_0; // 0x28

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

	::RPG::Client::UIController* Method_2_16FA1B4F03A95136()
	{
		return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AAA9B77C0F3BD977_METHOD_2_16FA1B4F03A95136_OFFSET))(this);
	}

	::RPG::GameCore::PropComponent* Method_2_68758F54AFF5CC3A()
	{
		return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AAA9B77C0F3BD977_METHOD_2_68758F54AFF5CC3A_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__3_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AAA9B77C0F3BD977__ONTASKBEGIN_B__3_0_OFFSET))(this);
	}
};

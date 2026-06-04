#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerRogueSelectLimitedAvatar; }

#define CLASS_2_4BC2C044376A95E4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD7EEF70)
#define CLASS_2_4BC2C044376A95E4_METHOD_2_4E393AA46F990612_OFFSET UNITYSDK_OFFSET(0xD7EF440)
#define CLASS_2_4BC2C044376A95E4_METHOD_2_B0BB27D2236C28DE_OFFSET UNITYSDK_OFFSET(0xD7EF130)
#define CLASS_2_4BC2C044376A95E4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD7EF010)
#define CLASS_2_4BC2C044376A95E4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD7EF3F0)
#define CLASS_2_4BC2C044376A95E4_TICK_OFFSET UNITYSDK_OFFSET(0xD7EEFB0)
#define CLASS_2_4BC2C044376A95E4__CTOR_OFFSET UNITYSDK_OFFSET(0xD7EEF60)
#define CLASS_2_4BC2C044376A95E4__ONTASKBEGIN_B__3_0_OFFSET UNITYSDK_OFFSET(0xD7EF500)

inline static constexpr unsigned int Class_2_4BC2C044376A95E4_TypeDefinitionIndex = 54937;

class Class_2_4BC2C044376A95E4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::TriggerRogueSelectLimitedAvatar* Field_2_1; // 0x20
	::RPG::Client::UIController* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerRogueSelectLimitedAvatar* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerRogueSelectLimitedAvatar*))((::PBYTE)hIl2Cpp + CLASS_2_4BC2C044376A95E4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BC2C044376A95E4_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4BC2C044376A95E4_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BC2C044376A95E4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BC2C044376A95E4_ONTASKRESET_OFFSET))(this);
	}

	::RPG::Client::UIController* Method_2_B0BB27D2236C28DE()
	{
		return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BC2C044376A95E4_METHOD_2_B0BB27D2236C28DE_OFFSET))(this);
	}

	::RPG::GameCore::PropComponent* Method_2_4E393AA46F990612()
	{
		return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BC2C044376A95E4_METHOD_2_4E393AA46F990612_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__3_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BC2C044376A95E4__ONTASKBEGIN_B__3_0_OFFSET))(this);
	}
};

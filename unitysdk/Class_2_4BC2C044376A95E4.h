#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerRogueSelectLimitedAvatar; }

#define CLASS_2_4BC2C044376A95E4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF234910)
#define CLASS_2_4BC2C044376A95E4_METHOD_2_4E393AA46F990612_OFFSET UNITYSDK_OFFSET(0xF234DE0)
#define CLASS_2_4BC2C044376A95E4_METHOD_2_B0BB27D2236C28DE_OFFSET UNITYSDK_OFFSET(0xF234AD0)
#define CLASS_2_4BC2C044376A95E4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF2349B0)
#define CLASS_2_4BC2C044376A95E4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF234D90)
#define CLASS_2_4BC2C044376A95E4_TICK_OFFSET UNITYSDK_OFFSET(0xF234950)
#define CLASS_2_4BC2C044376A95E4__CTOR_OFFSET UNITYSDK_OFFSET(0xF234900)
#define CLASS_2_4BC2C044376A95E4__ONTASKBEGIN_B__3_0_OFFSET UNITYSDK_OFFSET(0xF234F00)

inline static constexpr unsigned int Class_2_4BC2C044376A95E4_TypeDefinitionIndex = 58799;

class Class_2_4BC2C044376A95E4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TriggerRogueSelectLimitedAvatar* OFKGLJOAMLD; // 0x18
	::RPG::Client::UIController* OGOFNHAGOPO; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28

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

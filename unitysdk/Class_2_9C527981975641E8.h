#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropDestruct; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_9C527981975641E8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18746900)
#define CLASS_2_9C527981975641E8_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18746B50)
#define CLASS_2_9C527981975641E8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18746950)
#define CLASS_2_9C527981975641E8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18746AA0)
#define CLASS_2_9C527981975641E8_TICK_OFFSET UNITYSDK_OFFSET(0x18746AF0)
#define CLASS_2_9C527981975641E8__CTOR_OFFSET UNITYSDK_OFFSET(0x187468F0)

inline static constexpr unsigned int Class_2_9C527981975641E8_TypeDefinitionIndex = 53431;

class Class_2_9C527981975641E8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::PropDestruct* OFKGLJOAMLD; // 0x20
	::RPG::GameCore::PropComponent* NKILIBDMOMC; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropDestruct* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropDestruct*))((::PBYTE)hIl2Cpp + CLASS_2_9C527981975641E8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C527981975641E8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C527981975641E8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C527981975641E8_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9C527981975641E8_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C527981975641E8_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

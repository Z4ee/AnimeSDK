#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_1CD633F3449963C2;
class Class_1_BAD2D343EF0045A3;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialClickBtn; }

#define CLASS_2_C5ED41B623CC4BFF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10902E40)
#define CLASS_2_C5ED41B623CC4BFF_METHOD_2_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x10903150)
#define CLASS_2_C5ED41B623CC4BFF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10902E90)
#define CLASS_2_C5ED41B623CC4BFF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10903020)
#define CLASS_2_C5ED41B623CC4BFF_TICK_OFFSET UNITYSDK_OFFSET(0x10903070)
#define CLASS_2_C5ED41B623CC4BFF__CTOR_OFFSET UNITYSDK_OFFSET(0x10902E30)

inline static constexpr unsigned int Class_2_C5ED41B623CC4BFF_TypeDefinitionIndex = 47492;

class Class_2_C5ED41B623CC4BFF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::TutorialClickBtn* Field_2_0; // 0x20
	::Class_1_1CD633F3449963C2* Field_2_3; // 0x28
	::Class_1_BAD2D343EF0045A3* Field_2_2; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialClickBtn* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialClickBtn*))((::PBYTE)hIl2Cpp + CLASS_2_C5ED41B623CC4BFF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5ED41B623CC4BFF_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5ED41B623CC4BFF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5ED41B623CC4BFF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C5ED41B623CC4BFF_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5ED41B623CC4BFF_METHOD_2_6A0EBEECA245A27C_OFFSET))(this);
	}
};

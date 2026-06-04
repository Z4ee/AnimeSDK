#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_1CD633F3449963C2;
class Class_1_53F0644B4D7513CF;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialClickBtn; }

#define CLASS_2_C5ED41B623CC4BFF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12AA2920)
#define CLASS_2_C5ED41B623CC4BFF_METHOD_2_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x12AA2C00)
#define CLASS_2_C5ED41B623CC4BFF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12AA2970)
#define CLASS_2_C5ED41B623CC4BFF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12AA2AD0)
#define CLASS_2_C5ED41B623CC4BFF_TICK_OFFSET UNITYSDK_OFFSET(0x12AA2B20)
#define CLASS_2_C5ED41B623CC4BFF__CTOR_OFFSET UNITYSDK_OFFSET(0x12AA2910)

inline static constexpr unsigned int Class_2_C5ED41B623CC4BFF_TypeDefinitionIndex = 54953;

class Class_2_C5ED41B623CC4BFF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TutorialClickBtn* Field_2_0; // 0x18
	::Class_1_53F0644B4D7513CF* Field_2_1; // 0x20
	::Class_1_1CD633F3449963C2* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_3; // 0x30

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

	::System::Void Method_2_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5ED41B623CC4BFF_METHOD_2_DB67EEFB041425EC_OFFSET))(this);
	}
};

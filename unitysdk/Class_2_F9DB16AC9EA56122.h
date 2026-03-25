#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_36264895A759B0FF;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitTimelineFinish; }

#define CLASS_2_F9DB16AC9EA56122_DISPOSE_OFFSET UNITYSDK_OFFSET(0x109F9560)
#define CLASS_2_F9DB16AC9EA56122_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x109F9C90)
#define CLASS_2_F9DB16AC9EA56122_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x109F9890)
#define CLASS_2_F9DB16AC9EA56122_ONSKIP_OFFSET UNITYSDK_OFFSET(0x109F9CA0)
#define CLASS_2_F9DB16AC9EA56122_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x109F95A0)
#define CLASS_2_F9DB16AC9EA56122_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x109F98E0)
#define CLASS_2_F9DB16AC9EA56122_TICK_OFFSET UNITYSDK_OFFSET(0x109F9940)
#define CLASS_2_F9DB16AC9EA56122__CTOR_OFFSET UNITYSDK_OFFSET(0x109F9540)

inline static constexpr unsigned int Class_2_F9DB16AC9EA56122_TypeDefinitionIndex = 45416;

class Class_2_F9DB16AC9EA56122 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_36264895A759B0FF* Field_2_2; // 0x18
	::RPG::GameCore::WaitTimelineFinish* Field_2_0; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::System::UInt32 Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitTimelineFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitTimelineFinish*))((::PBYTE)hIl2Cpp + CLASS_2_F9DB16AC9EA56122__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9DB16AC9EA56122_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9DB16AC9EA56122_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9DB16AC9EA56122_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F9DB16AC9EA56122_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9DB16AC9EA56122_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9DB16AC9EA56122_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9DB16AC9EA56122_ONSKIP_OFFSET))(this);
	}
};

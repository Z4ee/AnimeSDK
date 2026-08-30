#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class PropWaterWheelStopRotate; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7860FC8A6BF44CB2_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF3E2C90)
#define CLASS_2_7860FC8A6BF44CB2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF3E2CF0)
#define CLASS_2_7860FC8A6BF44CB2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF3E2740)
#define CLASS_2_7860FC8A6BF44CB2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF3E2C40)
#define CLASS_2_7860FC8A6BF44CB2_TICK_OFFSET UNITYSDK_OFFSET(0xF3E2D40)
#define CLASS_2_7860FC8A6BF44CB2__CTOR_OFFSET UNITYSDK_OFFSET(0xF3E2730)

inline static constexpr unsigned int Class_2_7860FC8A6BF44CB2_TypeDefinitionIndex = 58515;

class Class_2_7860FC8A6BF44CB2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* CIFOILLJFNF; // 0x18
	::RPG::GameCore::PropWaterWheelStopRotate* OFKGLJOAMLD; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropWaterWheelStopRotate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropWaterWheelStopRotate*))((::PBYTE)hIl2Cpp + CLASS_2_7860FC8A6BF44CB2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7860FC8A6BF44CB2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7860FC8A6BF44CB2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7860FC8A6BF44CB2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7860FC8A6BF44CB2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7860FC8A6BF44CB2_TICK_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class PropWaterWheelStopRotate; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7860FC8A6BF44CB2_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD9C6D30)
#define CLASS_2_7860FC8A6BF44CB2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD9C6D90)
#define CLASS_2_7860FC8A6BF44CB2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD9C6870)
#define CLASS_2_7860FC8A6BF44CB2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD9C6CE0)
#define CLASS_2_7860FC8A6BF44CB2_TICK_OFFSET UNITYSDK_OFFSET(0xD9C6DE0)
#define CLASS_2_7860FC8A6BF44CB2__CTOR_OFFSET UNITYSDK_OFFSET(0xD9C6860)

inline static constexpr unsigned int Class_2_7860FC8A6BF44CB2_TypeDefinitionIndex = 53835;

class Class_2_7860FC8A6BF44CB2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PropWaterWheelStopRotate* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x28

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

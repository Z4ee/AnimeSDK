#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_382;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class MarbleEventListener; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_ADC16073F2E5921A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9914540)
#define CLASS_2_ADC16073F2E5921A_METHOD_2_5F3AE37087DCC4E1_OFFSET UNITYSDK_OFFSET(0x99146C0)
#define CLASS_2_ADC16073F2E5921A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9914400)
#define CLASS_2_ADC16073F2E5921A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x99144F0)
#define CLASS_2_ADC16073F2E5921A_TICK_OFFSET UNITYSDK_OFFSET(0x9914A50)
#define CLASS_2_ADC16073F2E5921A__CTOR_OFFSET UNITYSDK_OFFSET(0x9914230)

inline static constexpr unsigned int Class_2_ADC16073F2E5921A_TypeDefinitionIndex = 48881;

class Class_2_ADC16073F2E5921A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::MarbleEventListener* Field_2_1; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x20
	::Class_3_E21F6DE9B7FA4D05* Field_2_5; // 0x28
	::RPG::GameCore::TaskContext* Field_2_0; // 0x30
	::Class_3_E21F6DE9B7FA4D05* Field_2_4; // 0x38
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MarbleEventListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MarbleEventListener*))((::PBYTE)hIl2Cpp + CLASS_2_ADC16073F2E5921A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADC16073F2E5921A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADC16073F2E5921A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADC16073F2E5921A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_5F3AE37087DCC4E1(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_ADC16073F2E5921A_METHOD_2_5F3AE37087DCC4E1_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ADC16073F2E5921A_TICK_OFFSET))(this, a1);
	}
};

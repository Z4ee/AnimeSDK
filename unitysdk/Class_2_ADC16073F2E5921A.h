#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_425;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class MarbleEventListener; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_ADC16073F2E5921A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16F02600)
#define CLASS_2_ADC16073F2E5921A_METHOD_2_6BD012F436E1844D_OFFSET UNITYSDK_OFFSET(0x16F02940)
#define CLASS_2_ADC16073F2E5921A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16F024B0)
#define CLASS_2_ADC16073F2E5921A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16F025B0)
#define CLASS_2_ADC16073F2E5921A_TICK_OFFSET UNITYSDK_OFFSET(0x16F02E00)
#define CLASS_2_ADC16073F2E5921A__CTOR_OFFSET UNITYSDK_OFFSET(0x16F02290)

inline static constexpr unsigned int Class_2_ADC16073F2E5921A_TypeDefinitionIndex = 50601;

class Class_2_ADC16073F2E5921A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x30
	::RPG::GameCore::MarbleEventListener* Field_2_4; // 0x38
	::Class_3_07C3C4D2990C49EE* Field_2_5; // 0x40

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

	::System::Void Method_2_6BD012F436E1844D(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_ADC16073F2E5921A_METHOD_2_6BD012F436E1844D_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ADC16073F2E5921A_TICK_OFFSET))(this, a1);
	}
};

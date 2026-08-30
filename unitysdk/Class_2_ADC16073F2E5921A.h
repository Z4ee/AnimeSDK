#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_460;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class MarbleEventListener; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_ADC16073F2E5921A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB540240)
#define CLASS_2_ADC16073F2E5921A_METHOD_2_6BD012F436E1844D_OFFSET UNITYSDK_OFFSET(0xB540580)
#define CLASS_2_ADC16073F2E5921A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5400F0)
#define CLASS_2_ADC16073F2E5921A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB5401F0)
#define CLASS_2_ADC16073F2E5921A_TICK_OFFSET UNITYSDK_OFFSET(0xB540A40)
#define CLASS_2_ADC16073F2E5921A__CTOR_OFFSET UNITYSDK_OFFSET(0xB53FED0)

inline static constexpr unsigned int Class_2_ADC16073F2E5921A_TypeDefinitionIndex = 53282;

class Class_2_ADC16073F2E5921A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* GHGOMDLAMKI; // 0x18
	::RPG::GameCore::MarbleEventListener* IGHAHBNLIJA; // 0x20
	::Class_3_07C3C4D2990C49EE* BJLJAHMLKIO; // 0x28
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30
	::Class_3_07C3C4D2990C49EE* ENHDENNMJFB; // 0x38
	::Class_3_07C3C4D2990C49EE* JDCHGEBKOAL; // 0x40

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

	::System::Void Method_2_6BD012F436E1844D(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_ADC16073F2E5921A_METHOD_2_6BD012F436E1844D_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ADC16073F2E5921A_TICK_OFFSET))(this, a1);
	}
};

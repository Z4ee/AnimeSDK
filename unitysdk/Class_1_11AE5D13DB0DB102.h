#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4A5349CA33B57F66;
class Class_1_7D0B754E2D8CECAF;
class Class_3_FA020C2C23A72B3F;
namespace RPG::Client::CakeRace { class CakeRaceTriggerEventDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_11AE5D13DB0DB102_METHOD_1_02CD6B722260FFA3_OFFSET UNITYSDK_OFFSET(0x15A7AFD0)
#define CLASS_1_11AE5D13DB0DB102_METHOD_1_7E1BADD1D133FA1C_OFFSET UNITYSDK_OFFSET(0x15A7B170)
#define CLASS_1_11AE5D13DB0DB102_METHOD_1_AFB750A8C52EF41D_OFFSET UNITYSDK_OFFSET(0x15A7B040)
#define CLASS_1_11AE5D13DB0DB102_METHOD_1_B603F824C8000AC5_OFFSET UNITYSDK_OFFSET(0x15A7B300)
#define CLASS_1_11AE5D13DB0DB102_METHOD_1_CE391B90607D6B07_OFFSET UNITYSDK_OFFSET(0x15A7B570)
#define CLASS_1_11AE5D13DB0DB102_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x15A7B020)
#define CLASS_1_11AE5D13DB0DB102__CTOR_OFFSET UNITYSDK_OFFSET(0x15A7B110)

inline static constexpr unsigned int Class_1_11AE5D13DB0DB102_TypeDefinitionIndex = 77636;

class Class_1_11AE5D13DB0DB102 : public ::System::Object
{
public:
	::RPG::Client::CakeRace::CakeRaceTriggerEventDataItem* ANKJMMMHCLB; // 0x10
	::System::Collections::Generic::List_1<::Class_1_4A5349CA33B57F66*>* CLLOHMIFFHJ; // 0x18

	::System::Void _ctor(::RPG::Client::CakeRace::CakeRaceTriggerEventDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceTriggerEventDataItem*))((::PBYTE)hIl2Cpp + CLASS_1_11AE5D13DB0DB102__CTOR_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* Method_1_02CD6B722260FFA3()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11AE5D13DB0DB102_METHOD_1_02CD6B722260FFA3_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11AE5D13DB0DB102_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	static ::Class_1_11AE5D13DB0DB102* Method_1_AFB750A8C52EF41D(::RPG::Client::CakeRace::CakeRaceTriggerEventDataItem* a1)
	{
		return ((::Class_1_11AE5D13DB0DB102*(*)(::RPG::Client::CakeRace::CakeRaceTriggerEventDataItem*))((::PBYTE)hIl2Cpp + CLASS_1_11AE5D13DB0DB102_METHOD_1_AFB750A8C52EF41D_OFFSET))(a1);
	}

	::System::Void Method_1_7E1BADD1D133FA1C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11AE5D13DB0DB102_METHOD_1_7E1BADD1D133FA1C_OFFSET))(this);
	}

	::System::Void Method_1_B603F824C8000AC5(::Class_3_FA020C2C23A72B3F* a1, ::Class_1_7D0B754E2D8CECAF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FA020C2C23A72B3F*, ::Class_1_7D0B754E2D8CECAF*))((::PBYTE)hIl2Cpp + CLASS_1_11AE5D13DB0DB102_METHOD_1_B603F824C8000AC5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_CE391B90607D6B07(::Class_3_FA020C2C23A72B3F* a1, ::Class_1_7D0B754E2D8CECAF* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_FA020C2C23A72B3F*, ::Class_1_7D0B754E2D8CECAF*))((::PBYTE)hIl2Cpp + CLASS_1_11AE5D13DB0DB102_METHOD_1_CE391B90607D6B07_OFFSET))(this, a1, a2);
	}
};

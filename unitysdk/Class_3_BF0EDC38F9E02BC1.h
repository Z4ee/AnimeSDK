#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_Task_1.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"

class Class_1_D93F8AE271D8A728;
class Class_1_E71C1FEE230A1337;
class Class_2_21AD365C113DC484;
class Class_2_FBC1E64DC5B2C441;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRacePathFind; }

#define CLASS_3_BF0EDC38F9E02BC1_METHOD_3_038B802C5A0BB779_OFFSET UNITYSDK_OFFSET(0x1C0A1170)
#define CLASS_3_BF0EDC38F9E02BC1_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1C0A1700)
#define CLASS_3_BF0EDC38F9E02BC1_METHOD_3_364E91940C737CC9_OFFSET UNITYSDK_OFFSET(0x1C0A0960)
#define CLASS_3_BF0EDC38F9E02BC1_METHOD_3_5D58929524CB6A9E_OFFSET UNITYSDK_OFFSET(0x1C0A1250)
#define CLASS_3_BF0EDC38F9E02BC1_METHOD_3_AC57C1C4868FD160_OFFSET UNITYSDK_OFFSET(0x1C0A0710)
#define CLASS_3_BF0EDC38F9E02BC1_METHOD_3_BB0ECC64FFD1F25D_OFFSET UNITYSDK_OFFSET(0x1C0A07F0)
#define CLASS_3_BF0EDC38F9E02BC1_METHOD_3_BBC9D412E51F1B4C_OFFSET UNITYSDK_OFFSET(0x1C0A18D0)
#define CLASS_3_BF0EDC38F9E02BC1_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1C0A17C0)
#define CLASS_3_BF0EDC38F9E02BC1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1C0A0530)
#define CLASS_3_BF0EDC38F9E02BC1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1C0A0DC0)
#define CLASS_3_BF0EDC38F9E02BC1_TICK_OFFSET UNITYSDK_OFFSET(0x1C0A0E10)
#define CLASS_3_BF0EDC38F9E02BC1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C09E040)

inline static constexpr unsigned int Class_3_BF0EDC38F9E02BC1_TypeDefinitionIndex = 36300;

class Class_3_BF0EDC38F9E02BC1 : public ::RPG::Client::LittleGameShare::ST_Task_1<::RPG::Client::LittleGameShare::ST_Main_CakeRacePathFind*>
{
public:
	::Class_2_21AD365C113DC484* JMMECHDFLKH; // 0x28
	::Class_2_FBC1E64DC5B2C441* HEJHGJIGEGK; // 0x30
	::System::Int32 HBDJCFFDGDD; // 0x38
	::System::Int32 PGMIOKKLHIE; // 0x3C
	::System::Boolean EJBKPGOBJKD; // 0x40
	::System::Boolean JEPHPLPKGNN; // 0x41
	::System::UInt32 LOPMOAGGCPP; // 0x44

	::System::Void _ctor(::Class_1_D93F8AE271D8A728* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePathFind* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D93F8AE271D8A728*, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePathFind*))((::PBYTE)hIl2Cpp + CLASS_3_BF0EDC38F9E02BC1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF0EDC38F9E02BC1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF0EDC38F9E02BC1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BF0EDC38F9E02BC1_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF0EDC38F9E02BC1_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_364E91940C737CC9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF0EDC38F9E02BC1_METHOD_3_364E91940C737CC9_OFFSET))(this);
	}

	::System::Boolean Method_3_5D58929524CB6A9E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF0EDC38F9E02BC1_METHOD_3_5D58929524CB6A9E_OFFSET))(this);
	}

	::System::Void Method_3_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF0EDC38F9E02BC1_METHOD_3_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_3_BB0ECC64FFD1F25D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_BF0EDC38F9E02BC1_METHOD_3_BB0ECC64FFD1F25D_OFFSET))(this, a1);
	}

	::System::Void Method_3_038B802C5A0BB779(::Class_1_E71C1FEE230A1337* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E71C1FEE230A1337*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_BF0EDC38F9E02BC1_METHOD_3_038B802C5A0BB779_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AC57C1C4868FD160()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF0EDC38F9E02BC1_METHOD_3_AC57C1C4868FD160_OFFSET))(this);
	}

	::System::Void Method_3_BBC9D412E51F1B4C(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::GameCore::CakeRaceMoveState a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::RPG::GameCore::CakeRaceMoveState))((::PBYTE)hIl2Cpp + CLASS_3_BF0EDC38F9E02BC1_METHOD_3_BBC9D412E51F1B4C_OFFSET))(this, a1, a2, a3, a4);
	}
};

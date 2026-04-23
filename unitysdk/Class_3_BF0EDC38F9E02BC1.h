#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_Task_1.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"

class Class_1_3617AACD677C263F;
class Class_1_8A3C2FE068793E61;
class Class_2_3ABA989E5AECB261;
class Class_2_FBC1E64DC5B2C441;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRacePathFind; }

#define CLASS_3_BF0EDC38F9E02BC1_METHOD_3_038B802C5A0BB779_OFFSET UNITYSDK_OFFSET(0x17CBB0F0)
#define CLASS_3_BF0EDC38F9E02BC1_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x17CBB780)
#define CLASS_3_BF0EDC38F9E02BC1_METHOD_3_364E91940C737CC9_OFFSET UNITYSDK_OFFSET(0x17CBA950)
#define CLASS_3_BF0EDC38F9E02BC1_METHOD_3_5D58929524CB6A9E_OFFSET UNITYSDK_OFFSET(0x17CBB2C0)
#define CLASS_3_BF0EDC38F9E02BC1_METHOD_3_AC57C1C4868FD160_OFFSET UNITYSDK_OFFSET(0x17CBA700)
#define CLASS_3_BF0EDC38F9E02BC1_METHOD_3_BB0ECC64FFD1F25D_OFFSET UNITYSDK_OFFSET(0x17CBA7E0)
#define CLASS_3_BF0EDC38F9E02BC1_METHOD_3_BBC9D412E51F1B4C_OFFSET UNITYSDK_OFFSET(0x17CBBD40)
#define CLASS_3_BF0EDC38F9E02BC1_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x17CBB840)
#define CLASS_3_BF0EDC38F9E02BC1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17CBA570)
#define CLASS_3_BF0EDC38F9E02BC1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17CBAD40)
#define CLASS_3_BF0EDC38F9E02BC1_TICK_OFFSET UNITYSDK_OFFSET(0x17CBAD90)
#define CLASS_3_BF0EDC38F9E02BC1__CTOR_OFFSET UNITYSDK_OFFSET(0x17CBA4A0)
#define CLASS_3_BF0EDC38F9E02BC1___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x17CBBE70)

inline static constexpr unsigned int Class_3_BF0EDC38F9E02BC1_TypeDefinitionIndex = 34486;

class Class_3_BF0EDC38F9E02BC1 : public ::RPG::Client::LittleGameShare::ST_Task_1<::RPG::Client::LittleGameShare::ST_Main_CakeRacePathFind*>
{
public:
	::Class_2_FBC1E64DC5B2C441* Field_3_6; // 0x28
	::Class_2_3ABA989E5AECB261* Field_3_5; // 0x30
	::System::UInt32 Field_3_2; // 0x38
	::System::Int32 Field_3_0; // 0x3C
	::System::Int32 Field_3_1; // 0x40
	::System::Boolean Field_3_4; // 0x44
	::System::Boolean Field_3_3; // 0x45

	::System::Void _ctor(::Class_1_8A3C2FE068793E61* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePathFind* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A3C2FE068793E61*, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePathFind*))((::PBYTE)hIl2Cpp + CLASS_3_BF0EDC38F9E02BC1__CTOR_OFFSET))(this, a1, a2);
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

	::System::Void Method_3_038B802C5A0BB779(::Class_1_3617AACD677C263F* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3617AACD677C263F*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_BF0EDC38F9E02BC1_METHOD_3_038B802C5A0BB779_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AC57C1C4868FD160()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF0EDC38F9E02BC1_METHOD_3_AC57C1C4868FD160_OFFSET))(this);
	}

	::System::Void Method_3_BBC9D412E51F1B4C(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::GameCore::CakeRaceMoveState a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::RPG::GameCore::CakeRaceMoveState))((::PBYTE)hIl2Cpp + CLASS_3_BF0EDC38F9E02BC1_METHOD_3_BBC9D412E51F1B4C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BF0EDC38F9E02BC1___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};

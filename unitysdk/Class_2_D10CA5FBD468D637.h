#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_547;
class Class_1_A509A996D269C6F2_1;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PeiPeiChallengeCheckPoint; }
namespace RPG::GameCore { class PeiPeiChallengeControllerInit; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D10CA5FBD468D637_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9BD2A0)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_03BFDB1C3240A55A_OFFSET UNITYSDK_OFFSET(0xB9BD890)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_081030A5FADB8669_OFFSET UNITYSDK_OFFSET(0xB9BDF80)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_0A4B9B2045975F53_OFFSET UNITYSDK_OFFSET(0xB9BDB80)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_3BFE3B9EF8374F61_OFFSET UNITYSDK_OFFSET(0xB9BEE80)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_3C2E750B4D78DF48_OFFSET UNITYSDK_OFFSET(0xB9BE1C0)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_64DDC7E435EC03EB_OFFSET UNITYSDK_OFFSET(0xB9BE420)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_791E2E44FCCE0018_OFFSET UNITYSDK_OFFSET(0xB9BE330)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_80B76CA3BC860A58_OFFSET UNITYSDK_OFFSET(0xB9BE650)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0xB9BD770)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_9D0688AE2E08E349_OFFSET UNITYSDK_OFFSET(0xB9BF0E0)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_A84CEAF7AFA573B3_OFFSET UNITYSDK_OFFSET(0xB9BD2F0)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_ABAF2DCAD651CD1D_OFFSET UNITYSDK_OFFSET(0xB9BE930)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB9BE2E0)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_ED65AE7582736594_OFFSET UNITYSDK_OFFSET(0xB9BE7C0)
#define CLASS_2_D10CA5FBD468D637_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9BD640)
#define CLASS_2_D10CA5FBD468D637_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB9BE610)
#define CLASS_2_D10CA5FBD468D637_TICK_OFFSET UNITYSDK_OFFSET(0xB9BD5E0)
#define CLASS_2_D10CA5FBD468D637__CTOR_OFFSET UNITYSDK_OFFSET(0xB9BD040)

inline static constexpr unsigned int Class_2_D10CA5FBD468D637_TypeDefinitionIndex = 53063;

class Class_2_D10CA5FBD468D637 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* KOMBLLHAFDC; // 0x0
	// static const ::System::String* LBADBANPMMH; // 0x0
	// static const ::System::String* ACMHCFDKFDH; // 0x0
	// static const ::System::String* DEGKLJADFGL; // 0x0
	// static const ::System::String* DEMBDDHDGME; // 0x0
	::System::Collections::Generic::List_1<::Class_1_A509A996D269C6F2_1*>* DAAMLCOEBNG; // 0x18
	::RPG::Client::AdventurePhase* BLAFNEBDBCH; // 0x20
	::RPG::GameCore::RuntimeGroupInfo* DMIJAIJDKNP; // 0x28
	::RPG::GameCore::PeiPeiChallengeControllerInit* IGHAHBNLIJA; // 0x30
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x38
	::System::Int32 KBDPMBDJIOF; // 0x40
	::System::Int32 INMLIMFILPE; // 0x44
	::System::UInt32 PEEFHNHDBMF; // 0x48
	::System::Boolean BJIMNGNKDGD; // 0x4C
	::System::Boolean EDGCMJOLMHL; // 0x4D

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PeiPeiChallengeControllerInit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PeiPeiChallengeControllerInit*))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_0A4B9B2045975F53(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_METHOD_2_0A4B9B2045975F53_OFFSET))(this, a1);
	}

	::System::Void Method_2_081030A5FADB8669(::RPG::GameCore::PeiPeiChallengeCheckPoint* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PeiPeiChallengeCheckPoint*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_METHOD_2_081030A5FADB8669_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_METHOD_2_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Void Method_2_03BFDB1C3240A55A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_METHOD_2_03BFDB1C3240A55A_OFFSET))(this);
	}

	::System::Void Method_2_A84CEAF7AFA573B3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_METHOD_2_A84CEAF7AFA573B3_OFFSET))(this);
	}

	::System::Void Method_2_3C2E750B4D78DF48(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_METHOD_2_3C2E750B4D78DF48_OFFSET))(this, a1);
	}

	::System::Void Method_2_791E2E44FCCE0018(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_METHOD_2_791E2E44FCCE0018_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_80B76CA3BC860A58(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_METHOD_2_80B76CA3BC860A58_OFFSET))(this, a1);
	}

	::System::Void Method_2_ABAF2DCAD651CD1D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_METHOD_2_ABAF2DCAD651CD1D_OFFSET))(this, a1);
	}

	::System::Void Method_2_ED65AE7582736594()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_METHOD_2_ED65AE7582736594_OFFSET))(this);
	}

	::System::Void Method_2_3BFE3B9EF8374F61()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_METHOD_2_3BFE3B9EF8374F61_OFFSET))(this);
	}

	::System::Void Method_2_9D0688AE2E08E349()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_METHOD_2_9D0688AE2E08E349_OFFSET))(this);
	}

	::System::Void Method_2_64DDC7E435EC03EB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_METHOD_2_64DDC7E435EC03EB_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

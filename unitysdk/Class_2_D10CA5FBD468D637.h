#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_460;
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

#define CLASS_2_D10CA5FBD468D637_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16AFF540)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_03BFDB1C3240A55A_OFFSET UNITYSDK_OFFSET(0x16AFFB30)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_081030A5FADB8669_OFFSET UNITYSDK_OFFSET(0x16B00220)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_0A4B9B2045975F53_OFFSET UNITYSDK_OFFSET(0x16AFFE20)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_3BFE3B9EF8374F61_OFFSET UNITYSDK_OFFSET(0x16B01120)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_3C2E750B4D78DF48_OFFSET UNITYSDK_OFFSET(0x16B00460)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_64DDC7E435EC03EB_OFFSET UNITYSDK_OFFSET(0x16B006C0)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_791E2E44FCCE0018_OFFSET UNITYSDK_OFFSET(0x16B005D0)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0x16B01380)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_80B76CA3BC860A58_OFFSET UNITYSDK_OFFSET(0x16B008F0)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x16AFFA10)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_A84CEAF7AFA573B3_OFFSET UNITYSDK_OFFSET(0x16AFF590)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_ABAF2DCAD651CD1D_OFFSET UNITYSDK_OFFSET(0x16B00BD0)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16B00580)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_ED65AE7582736594_OFFSET UNITYSDK_OFFSET(0x16B00A60)
#define CLASS_2_D10CA5FBD468D637_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16AFF8E0)
#define CLASS_2_D10CA5FBD468D637_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16B008B0)
#define CLASS_2_D10CA5FBD468D637_TICK_OFFSET UNITYSDK_OFFSET(0x16AFF880)
#define CLASS_2_D10CA5FBD468D637__CTOR_OFFSET UNITYSDK_OFFSET(0x16AFF2E0)

inline static constexpr unsigned int Class_2_D10CA5FBD468D637_TypeDefinitionIndex = 53337;

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
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
	::RPG::GameCore::RuntimeGroupInfo* DMIJAIJDKNP; // 0x30
	::RPG::GameCore::PeiPeiChallengeControllerInit* IGHAHBNLIJA; // 0x38
	::System::Boolean BJIMNGNKDGD; // 0x40
	::System::Boolean EDGCMJOLMHL; // 0x41
	::System::Int32 INMLIMFILPE; // 0x44
	::System::Int32 KBDPMBDJIOF; // 0x48
	::System::UInt32 PEEFHNHDBMF; // 0x4C

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

	::System::Void Method_2_3C2E750B4D78DF48(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_METHOD_2_3C2E750B4D78DF48_OFFSET))(this, a1);
	}

	::System::Void Method_2_791E2E44FCCE0018(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_METHOD_2_791E2E44FCCE0018_OFFSET))(this, a1);
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

	::System::Void Method_2_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_METHOD_2_7C2C2820B36B9508_OFFSET))(this);
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

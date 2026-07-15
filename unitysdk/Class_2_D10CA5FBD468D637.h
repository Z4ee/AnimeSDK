#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_425;
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

#define CLASS_2_D10CA5FBD468D637_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A69D90)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_03BFDB1C3240A55A_OFFSET UNITYSDK_OFFSET(0x16A6A380)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_081030A5FADB8669_OFFSET UNITYSDK_OFFSET(0x16A6AA70)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_0A4B9B2045975F53_OFFSET UNITYSDK_OFFSET(0x16A6A670)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_3BFE3B9EF8374F61_OFFSET UNITYSDK_OFFSET(0x16A6B970)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_3C2E750B4D78DF48_OFFSET UNITYSDK_OFFSET(0x16A6ACB0)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_64DDC7E435EC03EB_OFFSET UNITYSDK_OFFSET(0x16A6AF10)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_791E2E44FCCE0018_OFFSET UNITYSDK_OFFSET(0x16A6AE20)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0x16A6BBD0)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_80B76CA3BC860A58_OFFSET UNITYSDK_OFFSET(0x16A6B140)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x16A6A260)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_A84CEAF7AFA573B3_OFFSET UNITYSDK_OFFSET(0x16A69DE0)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_ABAF2DCAD651CD1D_OFFSET UNITYSDK_OFFSET(0x16A6B420)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16A6ADD0)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_ED65AE7582736594_OFFSET UNITYSDK_OFFSET(0x16A6B2B0)
#define CLASS_2_D10CA5FBD468D637_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16A6A130)
#define CLASS_2_D10CA5FBD468D637_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16A6B100)
#define CLASS_2_D10CA5FBD468D637_TICK_OFFSET UNITYSDK_OFFSET(0x16A6A0D0)
#define CLASS_2_D10CA5FBD468D637__CTOR_OFFSET UNITYSDK_OFFSET(0x16A69B30)

inline static constexpr unsigned int Class_2_D10CA5FBD468D637_TypeDefinitionIndex = 50655;

class Class_2_D10CA5FBD468D637 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	::RPG::GameCore::RuntimeGroupInfo* Field_2_5; // 0x18
	::System::Collections::Generic::List_1<::Class_1_A509A996D269C6F2_1*>* Field_2_6; // 0x20
	::RPG::GameCore::TaskContext* Field_2_7; // 0x28
	::RPG::GameCore::PeiPeiChallengeControllerInit* Field_2_8; // 0x30
	::RPG::Client::AdventurePhase* Field_2_9; // 0x38
	::System::UInt32 Field_2_10; // 0x40
	::System::Int32 Field_2_11; // 0x44
	::System::Boolean Field_2_12; // 0x48
	::System::Boolean Field_2_13; // 0x49
	::System::Int32 Field_2_14; // 0x4C

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

	::System::Void Method_2_3C2E750B4D78DF48(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_METHOD_2_3C2E750B4D78DF48_OFFSET))(this, a1);
	}

	::System::Void Method_2_791E2E44FCCE0018(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_METHOD_2_791E2E44FCCE0018_OFFSET))(this, a1);
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

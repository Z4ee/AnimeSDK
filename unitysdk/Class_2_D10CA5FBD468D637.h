#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_401;
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

#define CLASS_2_D10CA5FBD468D637_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA7D9260)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_081030A5FADB8669_OFFSET UNITYSDK_OFFSET(0xA7D9D10)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_0A4B9B2045975F53_OFFSET UNITYSDK_OFFSET(0xA7D9980)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0xA7DAB20)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_33C1DB4C8E5800FD_OFFSET UNITYSDK_OFFSET(0xA7DA4E0)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_3C2E750B4D78DF48_OFFSET UNITYSDK_OFFSET(0xA7D9F50)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_4B214700971975B6_OFFSET UNITYSDK_OFFSET(0xA7D92B0)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_805B6D82357700A5_OFFSET UNITYSDK_OFFSET(0xA7DA0C0)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_80B76CA3BC860A58_OFFSET UNITYSDK_OFFSET(0xA7DA370)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0xA7D9650)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_9D0688AE2E08E349_OFFSET UNITYSDK_OFFSET(0xA7DACD0)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0xA7D9770)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_ABAF2DCAD651CD1D_OFFSET UNITYSDK_OFFSET(0xA7DA5D0)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA7DA070)
#define CLASS_2_D10CA5FBD468D637_METHOD_2_FE275294F69C24FC_OFFSET UNITYSDK_OFFSET(0xA7DA1B0)
#define CLASS_2_D10CA5FBD468D637_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA7D9520)
#define CLASS_2_D10CA5FBD468D637_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA7DA330)
#define CLASS_2_D10CA5FBD468D637_TICK_OFFSET UNITYSDK_OFFSET(0xA7D94C0)
#define CLASS_2_D10CA5FBD468D637__CTOR_OFFSET UNITYSDK_OFFSET(0xA7D90B0)

inline static constexpr unsigned int Class_2_D10CA5FBD468D637_TypeDefinitionIndex = 49601;

class Class_2_D10CA5FBD468D637 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	::RPG::GameCore::PeiPeiChallengeControllerInit* Field_2_5; // 0x18
	::System::Collections::Generic::List_1<::Class_1_A509A996D269C6F2_1*>* Field_2_6; // 0x20
	::RPG::GameCore::TaskContext* Field_2_7; // 0x28
	::RPG::GameCore::RuntimeGroupInfo* Field_2_8; // 0x30
	::RPG::Client::AdventurePhase* Field_2_9; // 0x38
	::System::Boolean Field_2_10; // 0x40
	::System::Boolean Field_2_11; // 0x41
	::System::UInt32 Field_2_12; // 0x44
	::System::Int32 Field_2_13; // 0x48
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

	::System::Void Method_2_A5B6063FFC26FC8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_METHOD_2_A5B6063FFC26FC8F_OFFSET))(this);
	}

	::System::Void Method_2_4B214700971975B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_METHOD_2_4B214700971975B6_OFFSET))(this);
	}

	::System::Void Method_2_3C2E750B4D78DF48(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_METHOD_2_3C2E750B4D78DF48_OFFSET))(this, a1);
	}

	::System::Void Method_2_805B6D82357700A5(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_METHOD_2_805B6D82357700A5_OFFSET))(this, a1);
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

	::System::Void Method_2_33C1DB4C8E5800FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_METHOD_2_33C1DB4C8E5800FD_OFFSET))(this);
	}

	::System::Void Method_2_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_METHOD_2_0B7E3489D2C0938B_OFFSET))(this);
	}

	::System::Void Method_2_9D0688AE2E08E349()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_METHOD_2_9D0688AE2E08E349_OFFSET))(this);
	}

	::System::Void Method_2_FE275294F69C24FC(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_METHOD_2_FE275294F69C24FC_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D10CA5FBD468D637_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

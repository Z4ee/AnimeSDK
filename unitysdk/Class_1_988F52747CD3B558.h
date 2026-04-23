#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceCommandQueueType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_341;
class Class_1_8D7092159A75E2E6_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_988F52747CD3B558_METHOD_1_0A7C75AE549C5CCF_OFFSET UNITYSDK_OFFSET(0x9352F70)
#define CLASS_1_988F52747CD3B558_METHOD_1_2172697947412F01_OFFSET UNITYSDK_OFFSET(0x9352E80)
#define CLASS_1_988F52747CD3B558_METHOD_1_3B0713AEC39528CC_OFFSET UNITYSDK_OFFSET(0x9353120)
#define CLASS_1_988F52747CD3B558_METHOD_1_524D628C225B8D68_OFFSET UNITYSDK_OFFSET(0x9353370)
#define CLASS_1_988F52747CD3B558_METHOD_1_8B933DECC394D41D_OFFSET UNITYSDK_OFFSET(0x9353190)
#define CLASS_1_988F52747CD3B558_METHOD_1_A8D19485AA054B2A_OFFSET UNITYSDK_OFFSET(0x9352C10)
#define CLASS_1_988F52747CD3B558_METHOD_1_C2D092172B4855DB_OFFSET UNITYSDK_OFFSET(0x9352DA0)
#define CLASS_1_988F52747CD3B558__CTOR_OFFSET UNITYSDK_OFFSET(0x9352D10)

inline static constexpr unsigned int Class_1_988F52747CD3B558_TypeDefinitionIndex = 71663;

class Class_1_988F52747CD3B558 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::CakeRace::CakeRaceCommandQueueType, ::Class_1_8D7092159A75E2E6_1*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_988F52747CD3B558__CTOR_OFFSET))(this);
	}

	static ::Class_1_988F52747CD3B558* Method_1_A8D19485AA054B2A()
	{
		return ((::Class_1_988F52747CD3B558*(*)())((::PBYTE)hIl2Cpp + CLASS_1_988F52747CD3B558_METHOD_1_A8D19485AA054B2A_OFFSET))();
	}

	::Class_1_8D7092159A75E2E6_1* Method_1_C2D092172B4855DB(::RPG::Client::LittleGame::CakeRace::CakeRaceCommandQueueType a1)
	{
		return ((::Class_1_8D7092159A75E2E6_1*(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCommandQueueType))((::PBYTE)hIl2Cpp + CLASS_1_988F52747CD3B558_METHOD_1_C2D092172B4855DB_OFFSET))(this, a1);
	}

	::Class_1_8D7092159A75E2E6_1* Method_1_2172697947412F01(::RPG::Client::LittleGame::CakeRace::CakeRaceCommandQueueType a1)
	{
		return ((::Class_1_8D7092159A75E2E6_1*(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCommandQueueType))((::PBYTE)hIl2Cpp + CLASS_1_988F52747CD3B558_METHOD_1_2172697947412F01_OFFSET))(this, a1);
	}

	::System::Void Method_1_0A7C75AE549C5CCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_988F52747CD3B558_METHOD_1_0A7C75AE549C5CCF_OFFSET))(this);
	}

	::System::Void Method_1_3B0713AEC39528CC(::RPG::Client::LittleGame::CakeRace::CakeRaceCommandQueueType a1, ::Class_0_16E4307DCC419505_341* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCommandQueueType, ::Class_0_16E4307DCC419505_341*))((::PBYTE)hIl2Cpp + CLASS_1_988F52747CD3B558_METHOD_1_3B0713AEC39528CC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8B933DECC394D41D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_988F52747CD3B558_METHOD_1_8B933DECC394D41D_OFFSET))(this);
	}

	::System::Void Method_1_524D628C225B8D68(::RPG::Client::LittleGame::CakeRace::CakeRaceCommandQueueType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCommandQueueType))((::PBYTE)hIl2Cpp + CLASS_1_988F52747CD3B558_METHOD_1_524D628C225B8D68_OFFSET))(this, a1);
	}
};

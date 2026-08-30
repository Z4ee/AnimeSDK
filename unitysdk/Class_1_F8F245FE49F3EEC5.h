#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceCommandQueueType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_413;
class Class_1_AC1CFCD19875ADD2_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F8F245FE49F3EEC5_METHOD_1_2172697947412F01_OFFSET UNITYSDK_OFFSET(0x1A8212E0)
#define CLASS_1_F8F245FE49F3EEC5_METHOD_1_524D628C225B8D68_OFFSET UNITYSDK_OFFSET(0x1A821890)
#define CLASS_1_F8F245FE49F3EEC5_METHOD_1_686221D5DF498040_OFFSET UNITYSDK_OFFSET(0x1A821650)
#define CLASS_1_F8F245FE49F3EEC5_METHOD_1_8F1212AF9A7E14BE_OFFSET UNITYSDK_OFFSET(0x1A8215E0)
#define CLASS_1_F8F245FE49F3EEC5_METHOD_1_A8D19485AA054B2A_OFFSET UNITYSDK_OFFSET(0x1A821070)
#define CLASS_1_F8F245FE49F3EEC5_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x1A8213C0)
#define CLASS_1_F8F245FE49F3EEC5_METHOD_1_C2D092172B4855DB_OFFSET UNITYSDK_OFFSET(0x1A821200)
#define CLASS_1_F8F245FE49F3EEC5__CTOR_OFFSET UNITYSDK_OFFSET(0x1A821170)

inline static constexpr unsigned int Class_1_F8F245FE49F3EEC5_TypeDefinitionIndex = 77694;

class Class_1_F8F245FE49F3EEC5 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::CakeRace::CakeRaceCommandQueueType, ::Class_1_AC1CFCD19875ADD2_1*>* FINPLJLNALN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F245FE49F3EEC5__CTOR_OFFSET))(this);
	}

	static ::Class_1_F8F245FE49F3EEC5* Method_1_A8D19485AA054B2A()
	{
		return ((::Class_1_F8F245FE49F3EEC5*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F8F245FE49F3EEC5_METHOD_1_A8D19485AA054B2A_OFFSET))();
	}

	::Class_1_AC1CFCD19875ADD2_1* Method_1_C2D092172B4855DB(::RPG::Client::LittleGame::CakeRace::CakeRaceCommandQueueType a1)
	{
		return ((::Class_1_AC1CFCD19875ADD2_1*(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCommandQueueType))((::PBYTE)hIl2Cpp + CLASS_1_F8F245FE49F3EEC5_METHOD_1_C2D092172B4855DB_OFFSET))(this, a1);
	}

	::Class_1_AC1CFCD19875ADD2_1* Method_1_2172697947412F01(::RPG::Client::LittleGame::CakeRace::CakeRaceCommandQueueType a1)
	{
		return ((::Class_1_AC1CFCD19875ADD2_1*(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCommandQueueType))((::PBYTE)hIl2Cpp + CLASS_1_F8F245FE49F3EEC5_METHOD_1_2172697947412F01_OFFSET))(this, a1);
	}

	::System::Void Method_1_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F245FE49F3EEC5_METHOD_1_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void Method_1_8F1212AF9A7E14BE(::RPG::Client::LittleGame::CakeRace::CakeRaceCommandQueueType a1, ::Class_0_16E4307DCC419505_413* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCommandQueueType, ::Class_0_16E4307DCC419505_413*))((::PBYTE)hIl2Cpp + CLASS_1_F8F245FE49F3EEC5_METHOD_1_8F1212AF9A7E14BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_686221D5DF498040()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F245FE49F3EEC5_METHOD_1_686221D5DF498040_OFFSET))(this);
	}

	::System::Void Method_1_524D628C225B8D68(::RPG::Client::LittleGame::CakeRace::CakeRaceCommandQueueType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCommandQueueType))((::PBYTE)hIl2Cpp + CLASS_1_F8F245FE49F3EEC5_METHOD_1_524D628C225B8D68_OFFSET))(this, a1);
	}
};

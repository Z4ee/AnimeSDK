#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceEventType.h"
#include "unitysdk/RPG/GameCore/CakeRaceTriggerEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_53D73740749143A2;
class Class_3_FA020C2C23A72B3F;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2489838D39B36611_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD1A0B70)
#define CLASS_1_2489838D39B36611_METHOD_1_2B66C008535F8B01_OFFSET UNITYSDK_OFFSET(0xD1A0910)
#define CLASS_1_2489838D39B36611_METHOD_1_599D97DBBAB2CBCE_OFFSET UNITYSDK_OFFSET(0xD1A0CD0)
#define CLASS_1_2489838D39B36611_METHOD_1_A124427AABD6F076_OFFSET UNITYSDK_OFFSET(0xD1A0E30)
#define CLASS_1_2489838D39B36611_METHOD_1_A396886527012FF7_OFFSET UNITYSDK_OFFSET(0xD1A0A60)
#define CLASS_1_2489838D39B36611_METHOD_1_CB81EEE9CC7C2687_OFFSET UNITYSDK_OFFSET(0xD1A0740)
#define CLASS_1_2489838D39B36611_METHOD_1_D31839E08C336BDD_OFFSET UNITYSDK_OFFSET(0xD1A0BF0)
#define CLASS_1_2489838D39B36611__CTOR_OFFSET UNITYSDK_OFFSET(0xD1A0870)

inline static constexpr unsigned int Class_1_2489838D39B36611_TypeDefinitionIndex = 72615;

class Class_1_2489838D39B36611 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceTriggerEventType, ::Class_1_53D73740749143A2*>* Field_1_0; // 0x10
	::Class_3_FA020C2C23A72B3F* Field_1_1; // 0x18

	::System::Void _ctor(::Class_3_FA020C2C23A72B3F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + CLASS_1_2489838D39B36611__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_2489838D39B36611* Method_1_CB81EEE9CC7C2687(::Class_3_FA020C2C23A72B3F* a1)
	{
		return ((::Class_1_2489838D39B36611*(*)(::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + CLASS_1_2489838D39B36611_METHOD_1_CB81EEE9CC7C2687_OFFSET))(a1);
	}

	::System::Void Method_1_2B66C008535F8B01()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2489838D39B36611_METHOD_1_2B66C008535F8B01_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2489838D39B36611_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A396886527012FF7(::RPG::Client::LittleGame::CakeRace::CakeRaceEventType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceEventType))((::PBYTE)hIl2Cpp + CLASS_1_2489838D39B36611_METHOD_1_A396886527012FF7_OFFSET))(this, a1);
	}

	::System::Void Method_1_D31839E08C336BDD(::RPG::Client::LittleGame::CakeRace::CakeRaceEventType a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceEventType, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2489838D39B36611_METHOD_1_D31839E08C336BDD_OFFSET))(this, a1, a2);
	}

	::Class_1_53D73740749143A2* Method_1_599D97DBBAB2CBCE(::RPG::Client::LittleGame::CakeRace::CakeRaceEventType a1)
	{
		return ((::Class_1_53D73740749143A2*(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceEventType))((::PBYTE)hIl2Cpp + CLASS_1_2489838D39B36611_METHOD_1_599D97DBBAB2CBCE_OFFSET))(this, a1);
	}

	static ::RPG::GameCore::CakeRaceTriggerEventType Method_1_A124427AABD6F076(::RPG::Client::LittleGame::CakeRace::CakeRaceEventType a1)
	{
		return ((::RPG::GameCore::CakeRaceTriggerEventType(*)(::RPG::Client::LittleGame::CakeRace::CakeRaceEventType))((::PBYTE)hIl2Cpp + CLASS_1_2489838D39B36611_METHOD_1_A124427AABD6F076_OFFSET))(a1);
	}
};

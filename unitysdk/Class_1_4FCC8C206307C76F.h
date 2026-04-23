#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceEventType.h"
#include "unitysdk/RPG/GameCore/CakeRaceTriggerEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_671CF0E35C67EB11;
class Class_3_626F93E2306641CC;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4FCC8C206307C76F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD46560)
#define CLASS_1_4FCC8C206307C76F_METHOD_1_2B66C008535F8B01_OFFSET UNITYSDK_OFFSET(0xCD46310)
#define CLASS_1_4FCC8C206307C76F_METHOD_1_599D97DBBAB2CBCE_OFFSET UNITYSDK_OFFSET(0xCD466C0)
#define CLASS_1_4FCC8C206307C76F_METHOD_1_A124427AABD6F076_OFFSET UNITYSDK_OFFSET(0xCD46830)
#define CLASS_1_4FCC8C206307C76F_METHOD_1_A396886527012FF7_OFFSET UNITYSDK_OFFSET(0xCD46460)
#define CLASS_1_4FCC8C206307C76F_METHOD_1_CB81EEE9CC7C2687_OFFSET UNITYSDK_OFFSET(0xCD46140)
#define CLASS_1_4FCC8C206307C76F_METHOD_1_D072FA229F253A0B_OFFSET UNITYSDK_OFFSET(0xCD465E0)
#define CLASS_1_4FCC8C206307C76F__CTOR_OFFSET UNITYSDK_OFFSET(0xCD46270)

inline static constexpr unsigned int Class_1_4FCC8C206307C76F_TypeDefinitionIndex = 71593;

class Class_1_4FCC8C206307C76F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceTriggerEventType, ::Class_1_671CF0E35C67EB11*>* Field_1_1; // 0x10
	::Class_3_626F93E2306641CC* Field_1_0; // 0x18

	::System::Void _ctor(::Class_3_626F93E2306641CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + CLASS_1_4FCC8C206307C76F__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_4FCC8C206307C76F* Method_1_CB81EEE9CC7C2687(::Class_3_626F93E2306641CC* a1)
	{
		return ((::Class_1_4FCC8C206307C76F*(*)(::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + CLASS_1_4FCC8C206307C76F_METHOD_1_CB81EEE9CC7C2687_OFFSET))(a1);
	}

	::System::Void Method_1_2B66C008535F8B01()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FCC8C206307C76F_METHOD_1_2B66C008535F8B01_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FCC8C206307C76F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A396886527012FF7(::RPG::Client::LittleGame::CakeRace::CakeRaceEventType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceEventType))((::PBYTE)hIl2Cpp + CLASS_1_4FCC8C206307C76F_METHOD_1_A396886527012FF7_OFFSET))(this, a1);
	}

	::System::Void Method_1_D072FA229F253A0B(::RPG::Client::LittleGame::CakeRace::CakeRaceEventType a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceEventType, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4FCC8C206307C76F_METHOD_1_D072FA229F253A0B_OFFSET))(this, a1, a2);
	}

	::Class_1_671CF0E35C67EB11* Method_1_599D97DBBAB2CBCE(::RPG::Client::LittleGame::CakeRace::CakeRaceEventType a1)
	{
		return ((::Class_1_671CF0E35C67EB11*(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceEventType))((::PBYTE)hIl2Cpp + CLASS_1_4FCC8C206307C76F_METHOD_1_599D97DBBAB2CBCE_OFFSET))(this, a1);
	}

	static ::RPG::GameCore::CakeRaceTriggerEventType Method_1_A124427AABD6F076(::RPG::Client::LittleGame::CakeRace::CakeRaceEventType a1)
	{
		return ((::RPG::GameCore::CakeRaceTriggerEventType(*)(::RPG::Client::LittleGame::CakeRace::CakeRaceEventType))((::PBYTE)hIl2Cpp + CLASS_1_4FCC8C206307C76F_METHOD_1_A124427AABD6F076_OFFSET))(a1);
	}
};

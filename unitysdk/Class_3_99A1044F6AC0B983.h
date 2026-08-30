#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_39.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceEventType.h"

class Class_3_FA020C2C23A72B3F;
namespace System { class Object; }

#define CLASS_3_99A1044F6AC0B983_METHOD_3_DB256E149BD163CA_OFFSET UNITYSDK_OFFSET(0x15527B20)
#define CLASS_3_99A1044F6AC0B983_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x15527C50)
#define CLASS_3_99A1044F6AC0B983_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x15527BC0)
#define CLASS_3_99A1044F6AC0B983__CTOR_OFFSET UNITYSDK_OFFSET(0x15527CD0)

inline static constexpr unsigned int Class_3_99A1044F6AC0B983_TypeDefinitionIndex = 77699;

class Class_3_99A1044F6AC0B983 : public ::Class_2_A48F3719AA1CF200_39
{
public:
	::Class_3_FA020C2C23A72B3F* PDENFEFCAGN; // 0x20
	::System::Object* EPJJGFNHKEM; // 0x28
	::RPG::Client::LittleGame::CakeRace::CakeRaceEventType GPIKLKPPMDG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99A1044F6AC0B983__CTOR_OFFSET))(this);
	}

	static ::Class_3_99A1044F6AC0B983* Method_3_DB256E149BD163CA(::Class_3_FA020C2C23A72B3F* a1, ::RPG::Client::LittleGame::CakeRace::CakeRaceEventType a2, ::System::Object* a3)
	{
		return ((::Class_3_99A1044F6AC0B983*(*)(::Class_3_FA020C2C23A72B3F*, ::RPG::Client::LittleGame::CakeRace::CakeRaceEventType, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_99A1044F6AC0B983_METHOD_3_DB256E149BD163CA_OFFSET))(a1, a2, a3);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99A1044F6AC0B983_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99A1044F6AC0B983_ONCLEAR_OFFSET))(this);
	}
};

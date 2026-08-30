#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_21F7296E79A49D3E;
class Class_3_C6C803F6D2DDE4D8;
class Class_3_FA020C2C23A72B3F;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E5089DBCFA972BFF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC0DCC00)
#define CLASS_1_E5089DBCFA972BFF_METHOD_1_2C86FF4C19E3569C_OFFSET UNITYSDK_OFFSET(0xC0DD310)
#define CLASS_1_E5089DBCFA972BFF_METHOD_1_3696F6B81A16A4ED_OFFSET UNITYSDK_OFFSET(0xC0DD670)
#define CLASS_1_E5089DBCFA972BFF_METHOD_1_77874E60424D9865_OFFSET UNITYSDK_OFFSET(0xC0DCC40)
#define CLASS_1_E5089DBCFA972BFF_METHOD_1_7C71CB790E29B940_OFFSET UNITYSDK_OFFSET(0xC0DCE40)
#define CLASS_1_E5089DBCFA972BFF_METHOD_1_A94863B01245A433_OFFSET UNITYSDK_OFFSET(0xC0DD160)
#define CLASS_1_E5089DBCFA972BFF_METHOD_1_CB81EEE9CC7C2687_OFFSET UNITYSDK_OFFSET(0xC0DCA50)
#define CLASS_1_E5089DBCFA972BFF__CTOR_OFFSET UNITYSDK_OFFSET(0xC0DCB60)

inline static constexpr unsigned int Class_1_E5089DBCFA972BFF_TypeDefinitionIndex = 77566;

class Class_1_E5089DBCFA972BFF : public ::System::Object
{
public:
	::Class_3_FA020C2C23A72B3F* PDENFEFCAGN; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::CakeRace::CakeRaceEventType, ::System::Collections::Generic::List_1<::Class_1_21F7296E79A49D3E*>*>* EFBHGNCEAEE; // 0x18

	::System::Void _ctor(::Class_3_FA020C2C23A72B3F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + CLASS_1_E5089DBCFA972BFF__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_E5089DBCFA972BFF* Method_1_CB81EEE9CC7C2687(::Class_3_FA020C2C23A72B3F* a1)
	{
		return ((::Class_1_E5089DBCFA972BFF*(*)(::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + CLASS_1_E5089DBCFA972BFF_METHOD_1_CB81EEE9CC7C2687_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5089DBCFA972BFF_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_77874E60424D9865(::RPG::Client::LittleGame::CakeRace::CakeRaceEventType a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceEventType, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E5089DBCFA972BFF_METHOD_1_77874E60424D9865_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7C71CB790E29B940(::RPG::Client::LittleGame::CakeRace::CakeRaceEventType a1, ::Class_3_C6C803F6D2DDE4D8* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceEventType, ::Class_3_C6C803F6D2DDE4D8*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E5089DBCFA972BFF_METHOD_1_7C71CB790E29B940_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A94863B01245A433(::RPG::Client::LittleGame::CakeRace::CakeRaceEventType a1, ::Class_3_C6C803F6D2DDE4D8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceEventType, ::Class_3_C6C803F6D2DDE4D8*))((::PBYTE)hIl2Cpp + CLASS_1_E5089DBCFA972BFF_METHOD_1_A94863B01245A433_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2C86FF4C19E3569C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E5089DBCFA972BFF_METHOD_1_2C86FF4C19E3569C_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_3696F6B81A16A4ED(::Class_3_C6C803F6D2DDE4D8* a1)
	{
		return ((::System::Boolean(*)(::Class_3_C6C803F6D2DDE4D8*))((::PBYTE)hIl2Cpp + CLASS_1_E5089DBCFA972BFF_METHOD_1_3696F6B81A16A4ED_OFFSET))(a1);
	}
};

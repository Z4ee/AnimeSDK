#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A45A3A893E113CFD.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceEventType.h"

class Class_3_626F93E2306641CC;
namespace System { class Object; }

#define CLASS_3_99A1044F6AC0B983_METHOD_3_DB256E149BD163CA_OFFSET UNITYSDK_OFFSET(0x129ACBD0)
#define CLASS_3_99A1044F6AC0B983_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x129ACD00)
#define CLASS_3_99A1044F6AC0B983_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x129ACC70)
#define CLASS_3_99A1044F6AC0B983__CTOR_OFFSET UNITYSDK_OFFSET(0x129ACD80)
#define CLASS_3_99A1044F6AC0B983___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x129ACDF0)
#define CLASS_3_99A1044F6AC0B983___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x129ACD90)

inline static constexpr unsigned int Class_3_99A1044F6AC0B983_TypeDefinitionIndex = 71667;

class Class_3_99A1044F6AC0B983 : public ::Class_2_A45A3A893E113CFD
{
public:
	::System::Object* Field_3_2; // 0x20
	::Class_3_626F93E2306641CC* Field_3_0; // 0x28
	::RPG::Client::LittleGame::CakeRace::CakeRaceEventType Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99A1044F6AC0B983__CTOR_OFFSET))(this);
	}

	static ::Class_3_99A1044F6AC0B983* Method_3_DB256E149BD163CA(::Class_3_626F93E2306641CC* a1, ::RPG::Client::LittleGame::CakeRace::CakeRaceEventType a2, ::System::Object* a3)
	{
		return ((::Class_3_99A1044F6AC0B983*(*)(::Class_3_626F93E2306641CC*, ::RPG::Client::LittleGame::CakeRace::CakeRaceEventType, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_99A1044F6AC0B983_METHOD_3_DB256E149BD163CA_OFFSET))(a1, a2, a3);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99A1044F6AC0B983_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99A1044F6AC0B983_ONCLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99A1044F6AC0B983___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99A1044F6AC0B983___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
	}
};

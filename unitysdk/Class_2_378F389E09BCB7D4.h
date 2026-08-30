#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/AComponentUpdateHandler_1.h"

class Class_0_16E4307DCC419505_38;
class Class_1_8D39391BE1EB18E1;
namespace Entitas { class IEntity; }

#define CLASS_2_378F389E09BCB7D4_ONADD_OFFSET UNITYSDK_OFFSET(0x1A838F50)
#define CLASS_2_378F389E09BCB7D4_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x1A839210)
#define CLASS_2_378F389E09BCB7D4_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A839090)
#define CLASS_2_378F389E09BCB7D4__CTOR_OFFSET UNITYSDK_OFFSET(0x1A839360)

inline static constexpr unsigned int Class_2_378F389E09BCB7D4_TypeDefinitionIndex = 78642;

class Class_2_378F389E09BCB7D4 : public ::RPG::Client::LittleGameShare::AComponentUpdateHandler_1<::Class_1_8D39391BE1EB18E1*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_378F389E09BCB7D4__CTOR_OFFSET))(this);
	}

	::System::Void OnAdd(::Entitas::IEntity* a1, ::Class_1_8D39391BE1EB18E1* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_8D39391BE1EB18E1*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_378F389E09BCB7D4_ONADD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnUpdate(::Entitas::IEntity* a1, ::Class_1_8D39391BE1EB18E1* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_8D39391BE1EB18E1*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_378F389E09BCB7D4_ONUPDATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnRemove(::Entitas::IEntity* a1, ::Class_0_16E4307DCC419505_38* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_378F389E09BCB7D4_ONREMOVE_OFFSET))(this, a1, a2);
	}
};

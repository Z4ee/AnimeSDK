#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/AComponentUpdateHandler_1.h"

class Class_0_16E4307DCC419505_38;
class Class_1_D2CCD41744F83728;
namespace Entitas { class IEntity; }

#define CLASS_2_099BE094A1102B60_ONADD_OFFSET UNITYSDK_OFFSET(0x149F17F0)
#define CLASS_2_099BE094A1102B60_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x149F1980)
#define CLASS_2_099BE094A1102B60_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x149F1850)
#define CLASS_2_099BE094A1102B60__CTOR_OFFSET UNITYSDK_OFFSET(0x149F19D0)

inline static constexpr unsigned int Class_2_099BE094A1102B60_TypeDefinitionIndex = 75160;

class Class_2_099BE094A1102B60 : public ::RPG::Client::LittleGameShare::AComponentUpdateHandler_1<::Class_1_D2CCD41744F83728*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_099BE094A1102B60__CTOR_OFFSET))(this);
	}

	::System::Void OnAdd(::Entitas::IEntity* a1, ::Class_1_D2CCD41744F83728* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_D2CCD41744F83728*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_099BE094A1102B60_ONADD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnUpdate(::Entitas::IEntity* a1, ::Class_1_D2CCD41744F83728* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_D2CCD41744F83728*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_099BE094A1102B60_ONUPDATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnRemove(::Entitas::IEntity* a1, ::Class_0_16E4307DCC419505_38* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_099BE094A1102B60_ONREMOVE_OFFSET))(this, a1, a2);
	}
};

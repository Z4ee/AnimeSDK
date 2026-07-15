#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/AComponentUpdateHandler_1.h"

class Class_0_16E4307DCC419505_38;
class Class_1_2075784BD100ED3E;
namespace Entitas { class IEntity; }

#define CLASS_2_9940B1A30BB919E3_ONADD_OFFSET UNITYSDK_OFFSET(0x16C94E20)
#define CLASS_2_9940B1A30BB919E3_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x16C95910)
#define CLASS_2_9940B1A30BB919E3_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x16C95110)
#define CLASS_2_9940B1A30BB919E3__CTOR_OFFSET UNITYSDK_OFFSET(0x16C95A60)

inline static constexpr unsigned int Class_2_9940B1A30BB919E3_TypeDefinitionIndex = 75146;

class Class_2_9940B1A30BB919E3 : public ::RPG::Client::LittleGameShare::AComponentUpdateHandler_1<::Class_1_2075784BD100ED3E*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9940B1A30BB919E3__CTOR_OFFSET))(this);
	}

	::System::Void OnAdd(::Entitas::IEntity* a1, ::Class_1_2075784BD100ED3E* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_2075784BD100ED3E*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_9940B1A30BB919E3_ONADD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnUpdate(::Entitas::IEntity* a1, ::Class_1_2075784BD100ED3E* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_2075784BD100ED3E*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_9940B1A30BB919E3_ONUPDATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnRemove(::Entitas::IEntity* a1, ::Class_0_16E4307DCC419505_38* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_9940B1A30BB919E3_ONREMOVE_OFFSET))(this, a1, a2);
	}
};

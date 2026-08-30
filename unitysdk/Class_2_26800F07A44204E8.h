#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/AComponentUpdateHandler_1.h"

class Class_0_16E4307DCC419505_38;
class Class_1_9B203D26FE6E5939;
namespace Entitas { class IEntity; }

#define CLASS_2_26800F07A44204E8_ONADD_OFFSET UNITYSDK_OFFSET(0xC3790A0)
#define CLASS_2_26800F07A44204E8_ONREMOVE_OFFSET UNITYSDK_OFFSET(0xC379290)
#define CLASS_2_26800F07A44204E8_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xC379120)
#define CLASS_2_26800F07A44204E8__CTOR_OFFSET UNITYSDK_OFFSET(0xC3792E0)

inline static constexpr unsigned int Class_2_26800F07A44204E8_TypeDefinitionIndex = 78653;

class Class_2_26800F07A44204E8 : public ::RPG::Client::LittleGameShare::AComponentUpdateHandler_1<::Class_1_9B203D26FE6E5939*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26800F07A44204E8__CTOR_OFFSET))(this);
	}

	::System::Void OnAdd(::Entitas::IEntity* a1, ::Class_1_9B203D26FE6E5939* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_9B203D26FE6E5939*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_26800F07A44204E8_ONADD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnUpdate(::Entitas::IEntity* a1, ::Class_1_9B203D26FE6E5939* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_9B203D26FE6E5939*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_26800F07A44204E8_ONUPDATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnRemove(::Entitas::IEntity* a1, ::Class_0_16E4307DCC419505_38* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_26800F07A44204E8_ONREMOVE_OFFSET))(this, a1, a2);
	}
};

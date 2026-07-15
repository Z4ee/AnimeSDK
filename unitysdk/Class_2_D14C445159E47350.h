#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/AComponentUpdateHandler_1.h"

class Class_0_16E4307DCC419505_38;
class Class_1_8BA26F44C7FAFF0E;
namespace Entitas { class IEntity; }

#define CLASS_2_D14C445159E47350_METHOD_2_3EB231FECB3AA72E_OFFSET UNITYSDK_OFFSET(0x17697450)
#define CLASS_2_D14C445159E47350_ONADD_OFFSET UNITYSDK_OFFSET(0x17697270)
#define CLASS_2_D14C445159E47350_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x17697620)
#define CLASS_2_D14C445159E47350_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x176972D0)
#define CLASS_2_D14C445159E47350__CTOR_OFFSET UNITYSDK_OFFSET(0x17697670)

inline static constexpr unsigned int Class_2_D14C445159E47350_TypeDefinitionIndex = 75158;

class Class_2_D14C445159E47350 : public ::RPG::Client::LittleGameShare::AComponentUpdateHandler_1<::Class_1_8BA26F44C7FAFF0E*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D14C445159E47350__CTOR_OFFSET))(this);
	}

	::System::Void OnAdd(::Entitas::IEntity* a1, ::Class_1_8BA26F44C7FAFF0E* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_8BA26F44C7FAFF0E*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_D14C445159E47350_ONADD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnUpdate(::Entitas::IEntity* a1, ::Class_1_8BA26F44C7FAFF0E* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_8BA26F44C7FAFF0E*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_D14C445159E47350_ONUPDATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnRemove(::Entitas::IEntity* a1, ::Class_0_16E4307DCC419505_38* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_D14C445159E47350_ONREMOVE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_3EB231FECB3AA72E(::Entitas::IEntity* a1, ::Class_0_16E4307DCC419505_38* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Entitas::IEntity*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_D14C445159E47350_METHOD_2_3EB231FECB3AA72E_OFFSET))(this, a1, a2);
	}
};

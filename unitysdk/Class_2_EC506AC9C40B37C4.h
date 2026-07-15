#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/AComponentUpdateHandler_1.h"

class Class_0_16E4307DCC419505_38;
class Class_1_902E15B16155CC1C;
namespace Entitas { class IEntity; }

#define CLASS_2_EC506AC9C40B37C4_METHOD_2_3EB231FECB3AA72E_OFFSET UNITYSDK_OFFSET(0x18AD9F40)
#define CLASS_2_EC506AC9C40B37C4_ONADD_OFFSET UNITYSDK_OFFSET(0x18AD9E20)
#define CLASS_2_EC506AC9C40B37C4_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x18ADA240)
#define CLASS_2_EC506AC9C40B37C4_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x18ADA110)
#define CLASS_2_EC506AC9C40B37C4__CTOR_OFFSET UNITYSDK_OFFSET(0x18ADA3B0)

inline static constexpr unsigned int Class_2_EC506AC9C40B37C4_TypeDefinitionIndex = 75151;

class Class_2_EC506AC9C40B37C4 : public ::RPG::Client::LittleGameShare::AComponentUpdateHandler_1<::Class_1_902E15B16155CC1C*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC506AC9C40B37C4__CTOR_OFFSET))(this);
	}

	::System::Void OnAdd(::Entitas::IEntity* a1, ::Class_1_902E15B16155CC1C* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_902E15B16155CC1C*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_EC506AC9C40B37C4_ONADD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnUpdate(::Entitas::IEntity* a1, ::Class_1_902E15B16155CC1C* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_902E15B16155CC1C*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_EC506AC9C40B37C4_ONUPDATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnRemove(::Entitas::IEntity* a1, ::Class_0_16E4307DCC419505_38* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_EC506AC9C40B37C4_ONREMOVE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_3EB231FECB3AA72E(::Entitas::IEntity* a1, ::Class_0_16E4307DCC419505_38* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Entitas::IEntity*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_EC506AC9C40B37C4_METHOD_2_3EB231FECB3AA72E_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/AComponentUpdateHandler_1.h"

class Class_0_16E4307DCC419505_29;
class Class_1_187EF9A26BFF97DE;
namespace Entitas { class IEntity; }

#define CLASS_2_B4BA02D10ED2077F_2_ONADD_OFFSET UNITYSDK_OFFSET(0xABCC400)
#define CLASS_2_B4BA02D10ED2077F_2_ONREMOVE_OFFSET UNITYSDK_OFFSET(0xABCC4C0)
#define CLASS_2_B4BA02D10ED2077F_2_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xABCC460)
#define CLASS_2_B4BA02D10ED2077F_2__CTOR_OFFSET UNITYSDK_OFFSET(0xABCC520)

inline static constexpr unsigned int Class_2_B4BA02D10ED2077F_2_TypeDefinitionIndex = 70589;

class Class_2_B4BA02D10ED2077F_2 : public ::RPG::Client::LittleGameShare::AComponentUpdateHandler_1<::Class_1_187EF9A26BFF97DE*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4BA02D10ED2077F_2__CTOR_OFFSET))(this);
	}

	::System::Void OnAdd(::Entitas::IEntity* a1, ::Class_1_187EF9A26BFF97DE* a2, ::Class_0_16E4307DCC419505_29* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_187EF9A26BFF97DE*, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_B4BA02D10ED2077F_2_ONADD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnUpdate(::Entitas::IEntity* a1, ::Class_1_187EF9A26BFF97DE* a2, ::Class_0_16E4307DCC419505_29* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_187EF9A26BFF97DE*, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_B4BA02D10ED2077F_2_ONUPDATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnRemove(::Entitas::IEntity* a1, ::Class_1_187EF9A26BFF97DE* a2, ::Class_0_16E4307DCC419505_29* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_187EF9A26BFF97DE*, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_B4BA02D10ED2077F_2_ONREMOVE_OFFSET))(this, a1, a2, a3);
	}
};

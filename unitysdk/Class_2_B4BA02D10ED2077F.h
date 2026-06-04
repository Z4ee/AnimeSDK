#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/AComponentUpdateHandler_1.h"

class Class_0_16E4307DCC419505_29;
class Class_1_1FD1B042898FC142;
namespace Entitas { class IEntity; }

#define CLASS_2_B4BA02D10ED2077F_ONADD_OFFSET UNITYSDK_OFFSET(0x13D07B00)
#define CLASS_2_B4BA02D10ED2077F_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x13D07CA0)
#define CLASS_2_B4BA02D10ED2077F_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13D07B60)
#define CLASS_2_B4BA02D10ED2077F__CTOR_OFFSET UNITYSDK_OFFSET(0x13D07D00)

inline static constexpr unsigned int Class_2_B4BA02D10ED2077F_TypeDefinitionIndex = 70587;

class Class_2_B4BA02D10ED2077F : public ::RPG::Client::LittleGameShare::AComponentUpdateHandler_1<::Class_1_1FD1B042898FC142*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4BA02D10ED2077F__CTOR_OFFSET))(this);
	}

	::System::Void OnAdd(::Entitas::IEntity* a1, ::Class_1_1FD1B042898FC142* a2, ::Class_0_16E4307DCC419505_29* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_1FD1B042898FC142*, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_B4BA02D10ED2077F_ONADD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnUpdate(::Entitas::IEntity* a1, ::Class_1_1FD1B042898FC142* a2, ::Class_0_16E4307DCC419505_29* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_1FD1B042898FC142*, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_B4BA02D10ED2077F_ONUPDATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnRemove(::Entitas::IEntity* a1, ::Class_1_1FD1B042898FC142* a2, ::Class_0_16E4307DCC419505_29* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_1FD1B042898FC142*, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_B4BA02D10ED2077F_ONREMOVE_OFFSET))(this, a1, a2, a3);
	}
};

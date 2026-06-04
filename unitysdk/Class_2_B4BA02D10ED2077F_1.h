#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/AComponentUpdateHandler_1.h"

class Class_0_16E4307DCC419505_29;
class Class_1_8C3A95B582B69105;
namespace Entitas { class IEntity; }

#define CLASS_2_B4BA02D10ED2077F_1_ONADD_OFFSET UNITYSDK_OFFSET(0xA92B8C0)
#define CLASS_2_B4BA02D10ED2077F_1_ONREMOVE_OFFSET UNITYSDK_OFFSET(0xA92B980)
#define CLASS_2_B4BA02D10ED2077F_1_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xA92B920)
#define CLASS_2_B4BA02D10ED2077F_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA92B9E0)

inline static constexpr unsigned int Class_2_B4BA02D10ED2077F_1_TypeDefinitionIndex = 70588;

class Class_2_B4BA02D10ED2077F_1 : public ::RPG::Client::LittleGameShare::AComponentUpdateHandler_1<::Class_1_8C3A95B582B69105*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4BA02D10ED2077F_1__CTOR_OFFSET))(this);
	}

	::System::Void OnAdd(::Entitas::IEntity* a1, ::Class_1_8C3A95B582B69105* a2, ::Class_0_16E4307DCC419505_29* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_8C3A95B582B69105*, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_B4BA02D10ED2077F_1_ONADD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnUpdate(::Entitas::IEntity* a1, ::Class_1_8C3A95B582B69105* a2, ::Class_0_16E4307DCC419505_29* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_8C3A95B582B69105*, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_B4BA02D10ED2077F_1_ONUPDATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnRemove(::Entitas::IEntity* a1, ::Class_1_8C3A95B582B69105* a2, ::Class_0_16E4307DCC419505_29* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_8C3A95B582B69105*, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_B4BA02D10ED2077F_1_ONREMOVE_OFFSET))(this, a1, a2, a3);
	}
};

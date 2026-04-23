#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/AComponentUpdateHandler_1.h"

class Class_0_16E4307DCC419505_30;
class Class_1_227E9A12C12CDD42;
namespace Entitas { class IEntity; }

#define CLASS_2_B4BA02D10ED2077F_3_ONADD_OFFSET UNITYSDK_OFFSET(0xB7D62D0)
#define CLASS_2_B4BA02D10ED2077F_3_ONREMOVE_OFFSET UNITYSDK_OFFSET(0xB7D6390)
#define CLASS_2_B4BA02D10ED2077F_3_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xB7D6330)
#define CLASS_2_B4BA02D10ED2077F_3__CTOR_OFFSET UNITYSDK_OFFSET(0xB7D63F0)

inline static constexpr unsigned int Class_2_B4BA02D10ED2077F_3_TypeDefinitionIndex = 69778;

class Class_2_B4BA02D10ED2077F_3 : public ::RPG::Client::LittleGameShare::AComponentUpdateHandler_1<::Class_1_227E9A12C12CDD42*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4BA02D10ED2077F_3__CTOR_OFFSET))(this);
	}

	::System::Void OnAdd(::Entitas::IEntity* a1, ::Class_1_227E9A12C12CDD42* a2, ::Class_0_16E4307DCC419505_30* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_227E9A12C12CDD42*, ::Class_0_16E4307DCC419505_30*))((::PBYTE)hIl2Cpp + CLASS_2_B4BA02D10ED2077F_3_ONADD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnUpdate(::Entitas::IEntity* a1, ::Class_1_227E9A12C12CDD42* a2, ::Class_0_16E4307DCC419505_30* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_227E9A12C12CDD42*, ::Class_0_16E4307DCC419505_30*))((::PBYTE)hIl2Cpp + CLASS_2_B4BA02D10ED2077F_3_ONUPDATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnRemove(::Entitas::IEntity* a1, ::Class_1_227E9A12C12CDD42* a2, ::Class_0_16E4307DCC419505_30* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_227E9A12C12CDD42*, ::Class_0_16E4307DCC419505_30*))((::PBYTE)hIl2Cpp + CLASS_2_B4BA02D10ED2077F_3_ONREMOVE_OFFSET))(this, a1, a2, a3);
	}
};

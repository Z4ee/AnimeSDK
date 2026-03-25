#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/AComponentUpdateHandler_1.h"

class Class_0_16E4307DCC419505_30;
class Class_1_26D9FE3FB25C3851;
namespace Entitas { class IEntity; }

#define CLASS_2_B4BA02D10ED2077F_5_ONADD_OFFSET UNITYSDK_OFFSET(0xB28E400)
#define CLASS_2_B4BA02D10ED2077F_5_ONREMOVE_OFFSET UNITYSDK_OFFSET(0xB28E4C0)
#define CLASS_2_B4BA02D10ED2077F_5_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xB28E460)
#define CLASS_2_B4BA02D10ED2077F_5__CTOR_OFFSET UNITYSDK_OFFSET(0xB28E520)

inline static constexpr unsigned int Class_2_B4BA02D10ED2077F_5_TypeDefinitionIndex = 62242;

class Class_2_B4BA02D10ED2077F_5 : public ::RPG::Client::LittleGameShare::AComponentUpdateHandler_1<::Class_1_26D9FE3FB25C3851*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4BA02D10ED2077F_5__CTOR_OFFSET))(this);
	}

	::System::Void OnAdd(::Entitas::IEntity* a1, ::Class_1_26D9FE3FB25C3851* a2, ::Class_0_16E4307DCC419505_30* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_26D9FE3FB25C3851*, ::Class_0_16E4307DCC419505_30*))((::PBYTE)hIl2Cpp + CLASS_2_B4BA02D10ED2077F_5_ONADD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnUpdate(::Entitas::IEntity* a1, ::Class_1_26D9FE3FB25C3851* a2, ::Class_0_16E4307DCC419505_30* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_26D9FE3FB25C3851*, ::Class_0_16E4307DCC419505_30*))((::PBYTE)hIl2Cpp + CLASS_2_B4BA02D10ED2077F_5_ONUPDATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnRemove(::Entitas::IEntity* a1, ::Class_1_26D9FE3FB25C3851* a2, ::Class_0_16E4307DCC419505_30* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_26D9FE3FB25C3851*, ::Class_0_16E4307DCC419505_30*))((::PBYTE)hIl2Cpp + CLASS_2_B4BA02D10ED2077F_5_ONREMOVE_OFFSET))(this, a1, a2, a3);
	}
};

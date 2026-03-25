#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/AComponentUpdateHandler_1.h"

class Class_0_16E4307DCC419505_30;
class Class_1_AEDED6B377F2000F;
namespace Entitas { class IEntity; }

#define CLASS_2_B4BA02D10ED2077F_4_ONADD_OFFSET UNITYSDK_OFFSET(0x8C242E0)
#define CLASS_2_B4BA02D10ED2077F_4_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x8C24550)
#define CLASS_2_B4BA02D10ED2077F_4_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x8C24340)
#define CLASS_2_B4BA02D10ED2077F_4__CTOR_OFFSET UNITYSDK_OFFSET(0x8C245B0)

inline static constexpr unsigned int Class_2_B4BA02D10ED2077F_4_TypeDefinitionIndex = 61869;

class Class_2_B4BA02D10ED2077F_4 : public ::RPG::Client::LittleGameShare::AComponentUpdateHandler_1<::Class_1_AEDED6B377F2000F*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4BA02D10ED2077F_4__CTOR_OFFSET))(this);
	}

	::System::Void OnAdd(::Entitas::IEntity* a1, ::Class_1_AEDED6B377F2000F* a2, ::Class_0_16E4307DCC419505_30* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_AEDED6B377F2000F*, ::Class_0_16E4307DCC419505_30*))((::PBYTE)hIl2Cpp + CLASS_2_B4BA02D10ED2077F_4_ONADD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnUpdate(::Entitas::IEntity* a1, ::Class_1_AEDED6B377F2000F* a2, ::Class_0_16E4307DCC419505_30* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_AEDED6B377F2000F*, ::Class_0_16E4307DCC419505_30*))((::PBYTE)hIl2Cpp + CLASS_2_B4BA02D10ED2077F_4_ONUPDATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnRemove(::Entitas::IEntity* a1, ::Class_1_AEDED6B377F2000F* a2, ::Class_0_16E4307DCC419505_30* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_AEDED6B377F2000F*, ::Class_0_16E4307DCC419505_30*))((::PBYTE)hIl2Cpp + CLASS_2_B4BA02D10ED2077F_4_ONREMOVE_OFFSET))(this, a1, a2, a3);
	}
};

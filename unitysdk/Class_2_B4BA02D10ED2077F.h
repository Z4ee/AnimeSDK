#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/AComponentUpdateHandler_1.h"

class Class_0_16E4307DCC419505_38;
class Class_1_6CB5443F9D57433E;
namespace Entitas { class IEntity; }

#define CLASS_2_B4BA02D10ED2077F_ONADD_OFFSET UNITYSDK_OFFSET(0x15B8B520)
#define CLASS_2_B4BA02D10ED2077F_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x15B8B6C0)
#define CLASS_2_B4BA02D10ED2077F_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x15B8B580)
#define CLASS_2_B4BA02D10ED2077F__CTOR_OFFSET UNITYSDK_OFFSET(0x15B8B710)

inline static constexpr unsigned int Class_2_B4BA02D10ED2077F_TypeDefinitionIndex = 75537;

class Class_2_B4BA02D10ED2077F : public ::RPG::Client::LittleGameShare::AComponentUpdateHandler_1<::Class_1_6CB5443F9D57433E*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4BA02D10ED2077F__CTOR_OFFSET))(this);
	}

	::System::Void OnAdd(::Entitas::IEntity* a1, ::Class_1_6CB5443F9D57433E* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_6CB5443F9D57433E*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_B4BA02D10ED2077F_ONADD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnUpdate(::Entitas::IEntity* a1, ::Class_1_6CB5443F9D57433E* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_6CB5443F9D57433E*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_B4BA02D10ED2077F_ONUPDATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnRemove(::Entitas::IEntity* a1, ::Class_0_16E4307DCC419505_38* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_B4BA02D10ED2077F_ONREMOVE_OFFSET))(this, a1, a2);
	}
};

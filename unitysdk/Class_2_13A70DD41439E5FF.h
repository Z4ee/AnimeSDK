#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/AComponentUpdateHandler_1.h"

class Class_0_16E4307DCC419505_38;
class Class_1_2075784BD100ED3E;
namespace Entitas { class IEntity; }

#define CLASS_2_13A70DD41439E5FF_ONADD_OFFSET UNITYSDK_OFFSET(0x1608CE60)
#define CLASS_2_13A70DD41439E5FF_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x1608D940)
#define CLASS_2_13A70DD41439E5FF_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1608D150)
#define CLASS_2_13A70DD41439E5FF__CTOR_OFFSET UNITYSDK_OFFSET(0x1608DA90)

inline static constexpr unsigned int Class_2_13A70DD41439E5FF_TypeDefinitionIndex = 78644;

class Class_2_13A70DD41439E5FF : public ::RPG::Client::LittleGameShare::AComponentUpdateHandler_1<::Class_1_2075784BD100ED3E*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13A70DD41439E5FF__CTOR_OFFSET))(this);
	}

	::System::Void OnAdd(::Entitas::IEntity* a1, ::Class_1_2075784BD100ED3E* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_2075784BD100ED3E*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_13A70DD41439E5FF_ONADD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnUpdate(::Entitas::IEntity* a1, ::Class_1_2075784BD100ED3E* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_2075784BD100ED3E*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_13A70DD41439E5FF_ONUPDATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnRemove(::Entitas::IEntity* a1, ::Class_0_16E4307DCC419505_38* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_13A70DD41439E5FF_ONREMOVE_OFFSET))(this, a1, a2);
	}
};

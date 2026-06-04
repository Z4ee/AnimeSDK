#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/AComponentUpdateHandler_1.h"

class Class_0_16E4307DCC419505_29;
class Class_1_AEDED6B377F2000F;
namespace Entitas { class IEntity; }

#define CLASS_2_7BE31BA2864AC35E_ONADD_OFFSET UNITYSDK_OFFSET(0xBF13FF0)
#define CLASS_2_7BE31BA2864AC35E_ONREMOVE_OFFSET UNITYSDK_OFFSET(0xBF141D0)
#define CLASS_2_7BE31BA2864AC35E_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xBF14050)
#define CLASS_2_7BE31BA2864AC35E__CTOR_OFFSET UNITYSDK_OFFSET(0xBF14230)

inline static constexpr unsigned int Class_2_7BE31BA2864AC35E_TypeDefinitionIndex = 70579;

class Class_2_7BE31BA2864AC35E : public ::RPG::Client::LittleGameShare::AComponentUpdateHandler_1<::Class_1_AEDED6B377F2000F*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BE31BA2864AC35E__CTOR_OFFSET))(this);
	}

	::System::Void OnAdd(::Entitas::IEntity* a1, ::Class_1_AEDED6B377F2000F* a2, ::Class_0_16E4307DCC419505_29* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_AEDED6B377F2000F*, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_7BE31BA2864AC35E_ONADD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnUpdate(::Entitas::IEntity* a1, ::Class_1_AEDED6B377F2000F* a2, ::Class_0_16E4307DCC419505_29* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_AEDED6B377F2000F*, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_7BE31BA2864AC35E_ONUPDATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnRemove(::Entitas::IEntity* a1, ::Class_1_AEDED6B377F2000F* a2, ::Class_0_16E4307DCC419505_29* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_AEDED6B377F2000F*, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_7BE31BA2864AC35E_ONREMOVE_OFFSET))(this, a1, a2, a3);
	}
};

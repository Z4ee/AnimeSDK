#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/AComponentUpdateHandler_1.h"

class Class_0_16E4307DCC419505_29;
class Class_1_67DCB99C5BB813B6;
namespace Entitas { class IEntity; }

#define CLASS_2_35F838E439F1D442_ONADD_OFFSET UNITYSDK_OFFSET(0xA557690)
#define CLASS_2_35F838E439F1D442_ONREMOVE_OFFSET UNITYSDK_OFFSET(0xA557A00)
#define CLASS_2_35F838E439F1D442_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xA557890)
#define CLASS_2_35F838E439F1D442__CTOR_OFFSET UNITYSDK_OFFSET(0xA557B60)

inline static constexpr unsigned int Class_2_35F838E439F1D442_TypeDefinitionIndex = 70576;

class Class_2_35F838E439F1D442 : public ::RPG::Client::LittleGameShare::AComponentUpdateHandler_1<::Class_1_67DCB99C5BB813B6*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35F838E439F1D442__CTOR_OFFSET))(this);
	}

	::System::Void OnAdd(::Entitas::IEntity* a1, ::Class_1_67DCB99C5BB813B6* a2, ::Class_0_16E4307DCC419505_29* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_67DCB99C5BB813B6*, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_35F838E439F1D442_ONADD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnUpdate(::Entitas::IEntity* a1, ::Class_1_67DCB99C5BB813B6* a2, ::Class_0_16E4307DCC419505_29* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_67DCB99C5BB813B6*, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_35F838E439F1D442_ONUPDATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnRemove(::Entitas::IEntity* a1, ::Class_1_67DCB99C5BB813B6* a2, ::Class_0_16E4307DCC419505_29* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_67DCB99C5BB813B6*, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_35F838E439F1D442_ONREMOVE_OFFSET))(this, a1, a2, a3);
	}
};

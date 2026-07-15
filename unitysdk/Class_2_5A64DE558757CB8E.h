#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/AComponentUpdateHandler_1.h"

class Class_0_16E4307DCC419505_38;
class Class_1_3EFA5F2E3E6738C8;
namespace Entitas { class IEntity; }

#define CLASS_2_5A64DE558757CB8E_ONADD_OFFSET UNITYSDK_OFFSET(0x16A674E0)
#define CLASS_2_5A64DE558757CB8E_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x16A678E0)
#define CLASS_2_5A64DE558757CB8E_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x16A676A0)
#define CLASS_2_5A64DE558757CB8E__CTOR_OFFSET UNITYSDK_OFFSET(0x16A67930)

inline static constexpr unsigned int Class_2_5A64DE558757CB8E_TypeDefinitionIndex = 75159;

class Class_2_5A64DE558757CB8E : public ::RPG::Client::LittleGameShare::AComponentUpdateHandler_1<::Class_1_3EFA5F2E3E6738C8*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A64DE558757CB8E__CTOR_OFFSET))(this);
	}

	::System::Void OnAdd(::Entitas::IEntity* a1, ::Class_1_3EFA5F2E3E6738C8* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_3EFA5F2E3E6738C8*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_5A64DE558757CB8E_ONADD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnUpdate(::Entitas::IEntity* a1, ::Class_1_3EFA5F2E3E6738C8* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_3EFA5F2E3E6738C8*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_5A64DE558757CB8E_ONUPDATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnRemove(::Entitas::IEntity* a1, ::Class_0_16E4307DCC419505_38* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_5A64DE558757CB8E_ONREMOVE_OFFSET))(this, a1, a2);
	}
};

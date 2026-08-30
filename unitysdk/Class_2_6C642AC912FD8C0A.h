#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/AComponentUpdateHandler_1.h"

class Class_0_16E4307DCC419505_38;
class Class_1_43870DBC16D00D60;
namespace Entitas { class IEntity; }

#define CLASS_2_6C642AC912FD8C0A_ONADD_OFFSET UNITYSDK_OFFSET(0x156DE5D0)
#define CLASS_2_6C642AC912FD8C0A_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x156DEB40)
#define CLASS_2_6C642AC912FD8C0A_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x156DE630)
#define CLASS_2_6C642AC912FD8C0A__CTOR_OFFSET UNITYSDK_OFFSET(0x156DEB90)

inline static constexpr unsigned int Class_2_6C642AC912FD8C0A_TypeDefinitionIndex = 78655;

class Class_2_6C642AC912FD8C0A : public ::RPG::Client::LittleGameShare::AComponentUpdateHandler_1<::Class_1_43870DBC16D00D60*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C642AC912FD8C0A__CTOR_OFFSET))(this);
	}

	::System::Void OnAdd(::Entitas::IEntity* a1, ::Class_1_43870DBC16D00D60* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_43870DBC16D00D60*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_6C642AC912FD8C0A_ONADD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnUpdate(::Entitas::IEntity* a1, ::Class_1_43870DBC16D00D60* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_43870DBC16D00D60*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_6C642AC912FD8C0A_ONUPDATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnRemove(::Entitas::IEntity* a1, ::Class_0_16E4307DCC419505_38* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_6C642AC912FD8C0A_ONREMOVE_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/SingleCardRefreshReason.h"
#include "unitysdk/System/Object.h"

class Class_1_D294488719556168;
class Class_2_7EA45D2647F35CDD;

#define CLASS_1_362A1DB863F4950A_CLEAR_OFFSET UNITYSDK_OFFSET(0x16E99C20)
#define CLASS_1_362A1DB863F4950A_GET_CARD_OFFSET UNITYSDK_OFFSET(0x16E99C90)
#define CLASS_1_362A1DB863F4950A_GET_REASON_OFFSET UNITYSDK_OFFSET(0x16E99CB0)
#define CLASS_1_362A1DB863F4950A_GET_SUBMODE_OFFSET UNITYSDK_OFFSET(0x16E99C70)
#define CLASS_1_362A1DB863F4950A_METHOD_1_32232FD7D6BD6E4A_OFFSET UNITYSDK_OFFSET(0x16E99AE0)
#define CLASS_1_362A1DB863F4950A_METHOD_1_3A992F658E31F082_OFFSET UNITYSDK_OFFSET(0x16E99BC0)
#define CLASS_1_362A1DB863F4950A_SET_CARD_OFFSET UNITYSDK_OFFSET(0x16E99CA0)
#define CLASS_1_362A1DB863F4950A_SET_REASON_OFFSET UNITYSDK_OFFSET(0x16E99CC0)
#define CLASS_1_362A1DB863F4950A_SET_SUBMODE_OFFSET UNITYSDK_OFFSET(0x16E99C80)
#define CLASS_1_362A1DB863F4950A__CTOR_OFFSET UNITYSDK_OFFSET(0x16E99CD0)

inline static constexpr unsigned int Class_1_362A1DB863F4950A_TypeDefinitionIndex = 79278;

class Class_1_362A1DB863F4950A : public ::System::Object
{
public:
	::Class_2_7EA45D2647F35CDD* _SubMode_k__BackingField; // 0x10
	::Class_1_D294488719556168* _Card_k__BackingField; // 0x18
	::RPG::Client::FateRin::SingleCardRefreshReason _Reason_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_362A1DB863F4950A__CTOR_OFFSET))(this);
	}

	static ::Class_1_362A1DB863F4950A* Method_1_32232FD7D6BD6E4A(::Class_2_7EA45D2647F35CDD* a1, ::Class_1_D294488719556168* a2, ::RPG::Client::FateRin::SingleCardRefreshReason a3)
	{
		return ((::Class_1_362A1DB863F4950A*(*)(::Class_2_7EA45D2647F35CDD*, ::Class_1_D294488719556168*, ::RPG::Client::FateRin::SingleCardRefreshReason))((::PBYTE)hIl2Cpp + CLASS_1_362A1DB863F4950A_METHOD_1_32232FD7D6BD6E4A_OFFSET))(a1, a2, a3);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_362A1DB863F4950A_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_3A992F658E31F082(::Class_2_7EA45D2647F35CDD* a1, ::Class_1_D294488719556168* a2, ::RPG::Client::FateRin::SingleCardRefreshReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7EA45D2647F35CDD*, ::Class_1_D294488719556168*, ::RPG::Client::FateRin::SingleCardRefreshReason))((::PBYTE)hIl2Cpp + CLASS_1_362A1DB863F4950A_METHOD_1_3A992F658E31F082_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_7EA45D2647F35CDD* get_SubMode()
	{
		return ((::Class_2_7EA45D2647F35CDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_362A1DB863F4950A_GET_SUBMODE_OFFSET))(this);
	}

	::System::Void set_SubMode(::Class_2_7EA45D2647F35CDD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7EA45D2647F35CDD*))((::PBYTE)hIl2Cpp + CLASS_1_362A1DB863F4950A_SET_SUBMODE_OFFSET))(this, a1);
	}

	::Class_1_D294488719556168* get_Card()
	{
		return ((::Class_1_D294488719556168*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_362A1DB863F4950A_GET_CARD_OFFSET))(this);
	}

	::System::Void set_Card(::Class_1_D294488719556168* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D294488719556168*))((::PBYTE)hIl2Cpp + CLASS_1_362A1DB863F4950A_SET_CARD_OFFSET))(this, a1);
	}

	::RPG::Client::FateRin::SingleCardRefreshReason get_Reason()
	{
		return ((::RPG::Client::FateRin::SingleCardRefreshReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_362A1DB863F4950A_GET_REASON_OFFSET))(this);
	}

	::System::Void set_Reason(::RPG::Client::FateRin::SingleCardRefreshReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::SingleCardRefreshReason))((::PBYTE)hIl2Cpp + CLASS_1_362A1DB863F4950A_SET_REASON_OFFSET))(this, a1);
	}
};

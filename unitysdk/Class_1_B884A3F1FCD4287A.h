#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F138DBFC3396EA15_1;
namespace System { class String; }

#define CLASS_1_B884A3F1FCD4287A_GET_FIGHTTOKEN_OFFSET UNITYSDK_OFFSET(0x13C0FF60)
#define CLASS_1_B884A3F1FCD4287A_GET_HOST_OFFSET UNITYSDK_OFFSET(0x13C0FF20)
#define CLASS_1_B884A3F1FCD4287A_GET_PORT_OFFSET UNITYSDK_OFFSET(0x13C0FF40)
#define CLASS_1_B884A3F1FCD4287A_GET_ROOMUID_OFFSET UNITYSDK_OFFSET(0x13C0FF00)
#define CLASS_1_B884A3F1FCD4287A_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x13C0FE80)
#define CLASS_1_B884A3F1FCD4287A_SET_FIGHTTOKEN_OFFSET UNITYSDK_OFFSET(0x13C0FF50)
#define CLASS_1_B884A3F1FCD4287A_SET_HOST_OFFSET UNITYSDK_OFFSET(0x13C0FF10)
#define CLASS_1_B884A3F1FCD4287A_SET_PORT_OFFSET UNITYSDK_OFFSET(0x13C0FF30)
#define CLASS_1_B884A3F1FCD4287A_SET_ROOMUID_OFFSET UNITYSDK_OFFSET(0x13C0FEF0)
#define CLASS_1_B884A3F1FCD4287A__CTOR_OFFSET UNITYSDK_OFFSET(0x13C0FF70)

inline static constexpr unsigned int Class_1_B884A3F1FCD4287A_TypeDefinitionIndex = 64856;

class Class_1_B884A3F1FCD4287A : public ::System::Object
{
public:
	::System::String* _FightToken_k__BackingField; // 0x10
	::System::String* _Host_k__BackingField; // 0x18
	::System::UInt64 _RoomUID_k__BackingField; // 0x20
	::System::UInt16 _Port_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B884A3F1FCD4287A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_F138DBFC3396EA15_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F138DBFC3396EA15_1*))((::PBYTE)hIl2Cpp + CLASS_1_B884A3F1FCD4287A_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void set_RoomUID(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_B884A3F1FCD4287A_SET_ROOMUID_OFFSET))(this, a1);
	}

	::System::UInt64 get_RoomUID()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B884A3F1FCD4287A_GET_ROOMUID_OFFSET))(this);
	}

	::System::Void set_Host(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B884A3F1FCD4287A_SET_HOST_OFFSET))(this, a1);
	}

	::System::String* get_Host()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B884A3F1FCD4287A_GET_HOST_OFFSET))(this);
	}

	::System::Void set_Port(::System::UInt16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_B884A3F1FCD4287A_SET_PORT_OFFSET))(this, a1);
	}

	::System::UInt16 get_Port()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B884A3F1FCD4287A_GET_PORT_OFFSET))(this);
	}

	::System::Void set_FightToken(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B884A3F1FCD4287A_SET_FIGHTTOKEN_OFFSET))(this, a1);
	}

	::System::String* get_FightToken()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B884A3F1FCD4287A_GET_FIGHTTOKEN_OFFSET))(this);
	}
};

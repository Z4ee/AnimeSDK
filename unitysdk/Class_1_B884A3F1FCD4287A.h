#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BBD89639E9FC96D7_1;
namespace System { class String; }

#define CLASS_1_B884A3F1FCD4287A_GET_FIGHTTOKEN_OFFSET UNITYSDK_OFFSET(0x9368B70)
#define CLASS_1_B884A3F1FCD4287A_GET_HOST_OFFSET UNITYSDK_OFFSET(0x9368B30)
#define CLASS_1_B884A3F1FCD4287A_GET_PORT_OFFSET UNITYSDK_OFFSET(0x9368B50)
#define CLASS_1_B884A3F1FCD4287A_GET_ROOMUID_OFFSET UNITYSDK_OFFSET(0x9368B10)
#define CLASS_1_B884A3F1FCD4287A_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x9368A90)
#define CLASS_1_B884A3F1FCD4287A_SET_FIGHTTOKEN_OFFSET UNITYSDK_OFFSET(0x9368B60)
#define CLASS_1_B884A3F1FCD4287A_SET_HOST_OFFSET UNITYSDK_OFFSET(0x9368B20)
#define CLASS_1_B884A3F1FCD4287A_SET_PORT_OFFSET UNITYSDK_OFFSET(0x9368B40)
#define CLASS_1_B884A3F1FCD4287A_SET_ROOMUID_OFFSET UNITYSDK_OFFSET(0x9368B00)
#define CLASS_1_B884A3F1FCD4287A__CTOR_OFFSET UNITYSDK_OFFSET(0x9368B80)

inline static constexpr unsigned int Class_1_B884A3F1FCD4287A_TypeDefinitionIndex = 63935;

class Class_1_B884A3F1FCD4287A : public ::System::Object
{
public:
	::System::String* _Host_k__BackingField; // 0x10
	::System::String* _FightToken_k__BackingField; // 0x18
	::System::UInt64 _RoomUID_k__BackingField; // 0x20
	::System::UInt16 _Port_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B884A3F1FCD4287A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_BBD89639E9FC96D7_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BBD89639E9FC96D7_1*))((::PBYTE)hIl2Cpp + CLASS_1_B884A3F1FCD4287A_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void set_RoomUID(::System::UInt64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_B884A3F1FCD4287A_SET_ROOMUID_OFFSET))(this, value);
	}

	::System::UInt64 get_RoomUID()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B884A3F1FCD4287A_GET_ROOMUID_OFFSET))(this);
	}

	::System::Void set_Host(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B884A3F1FCD4287A_SET_HOST_OFFSET))(this, value);
	}

	::System::String* get_Host()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B884A3F1FCD4287A_GET_HOST_OFFSET))(this);
	}

	::System::Void set_Port(::System::UInt16 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_B884A3F1FCD4287A_SET_PORT_OFFSET))(this, value);
	}

	::System::UInt16 get_Port()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B884A3F1FCD4287A_GET_PORT_OFFSET))(this);
	}

	::System::Void set_FightToken(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B884A3F1FCD4287A_SET_FIGHTTOKEN_OFFSET))(this, value);
	}

	::System::String* get_FightToken()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B884A3F1FCD4287A_GET_FIGHTTOKEN_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace System { class String; }

#define CLASS_1_1AA7C889AB82E323_GET_ROOMCARDBEFORE_OFFSET UNITYSDK_OFFSET(0xAFA9940)
#define CLASS_1_1AA7C889AB82E323_GET_ROOMCARD_OFFSET UNITYSDK_OFFSET(0xAFA9930)
#define CLASS_1_1AA7C889AB82E323_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAFA96C0)
#define CLASS_1_1AA7C889AB82E323_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xAFA9760)
#define CLASS_1_1AA7C889AB82E323__CTOR_OFFSET UNITYSDK_OFFSET(0xAFA96B0)
#define CLASS_1_1AA7C889AB82E323___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAFA9950)

inline static constexpr unsigned int Class_1_1AA7C889AB82E323_TypeDefinitionIndex = 62688;

class Class_1_1AA7C889AB82E323 : public ::System::Object
{
public:
	::RPG::Client::IRogueTournPersonaRoomCardInGame* _RoomCard_k__BackingField; // 0x10
	::RPG::Client::IRogueTournPersonaRoomCardInGame* _RoomCardBefore_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::Client::IRogueTournPersonaRoomCardInGame* a1, ::RPG::Client::IRogueTournPersonaRoomCardInGame* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*, ::RPG::Client::IRogueTournPersonaRoomCardInGame*))((::PBYTE)hIl2Cpp + CLASS_1_1AA7C889AB82E323__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AA7C889AB82E323_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AA7C889AB82E323_TRIGGERACTION_OFFSET))(this);
	}

	::RPG::Client::IRogueTournPersonaRoomCardInGame* get_RoomCard()
	{
		return ((::RPG::Client::IRogueTournPersonaRoomCardInGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AA7C889AB82E323_GET_ROOMCARD_OFFSET))(this);
	}

	::RPG::Client::IRogueTournPersonaRoomCardInGame* get_RoomCardBefore()
	{
		return ((::RPG::Client::IRogueTournPersonaRoomCardInGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AA7C889AB82E323_GET_ROOMCARDBEFORE_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AA7C889AB82E323___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};

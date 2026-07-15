#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace System { class String; }

#define CLASS_1_B83918E94A567BE1_GET_ROOMCARD_OFFSET UNITYSDK_OFFSET(0x17AA3960)
#define CLASS_1_B83918E94A567BE1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17AA37E0)
#define CLASS_1_B83918E94A567BE1_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x17AA3880)
#define CLASS_1_B83918E94A567BE1__CTOR_OFFSET UNITYSDK_OFFSET(0x17AA37D0)

inline static constexpr unsigned int Class_1_B83918E94A567BE1_TypeDefinitionIndex = 64058;

class Class_1_B83918E94A567BE1 : public ::System::Object
{
public:
	::RPG::Client::IRogueTournPersonaRoomCardInGame* _RoomCard_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::Client::IRogueTournPersonaRoomCardInGame* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*))((::PBYTE)hIl2Cpp + CLASS_1_B83918E94A567BE1__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B83918E94A567BE1_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B83918E94A567BE1_TRIGGERACTION_OFFSET))(this);
	}

	::RPG::Client::IRogueTournPersonaRoomCardInGame* get_RoomCard()
	{
		return ((::RPG::Client::IRogueTournPersonaRoomCardInGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B83918E94A567BE1_GET_ROOMCARD_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_525;
namespace System { class String; }

#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_BUTTONPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xB71B9F0)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_BUTTONPARAM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB71CB70)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_BUTTONPARAM_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0xB71CC20)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_BUTTONPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xB71CB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropInteractionTrigger_ButtonParam_TypeDefinitionIndex = 53024;

	class PropInteractionTrigger_ButtonParam : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_525* _Info; // 0x10
		::System::UInt32 HostRuntimeID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER_BUTTONPARAM__CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::PropInteractionTrigger_ButtonParam* Create(::Class_0_16E4307DCC419505_525* info)
		{
			return ((::RPG::GameCore::PropInteractionTrigger_ButtonParam*(*)(::Class_0_16E4307DCC419505_525*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER_BUTTONPARAM_CREATE_OFFSET))(info);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER_BUTTONPARAM_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_TextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER_BUTTONPARAM_GET_TEXTID_OFFSET))(this);
		}
	};
}

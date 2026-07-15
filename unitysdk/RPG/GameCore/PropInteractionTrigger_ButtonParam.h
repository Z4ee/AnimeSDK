#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_582;
namespace System { class String; }

#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_BUTTONPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0x127C25E0)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_BUTTONPARAM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x127C38F0)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_BUTTONPARAM_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0x127C39F0)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_BUTTONPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x127C38E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropInteractionTrigger_ButtonParam_TypeDefinitionIndex = 54953;

	class PropInteractionTrigger_ButtonParam : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_582* _Info; // 0x10
		::System::UInt32 HostRuntimeID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER_BUTTONPARAM__CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::PropInteractionTrigger_ButtonParam* Create(::Class_0_16E4307DCC419505_582* a1)
		{
			return ((::RPG::GameCore::PropInteractionTrigger_ButtonParam*(*)(::Class_0_16E4307DCC419505_582*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER_BUTTONPARAM_CREATE_OFFSET))(a1);
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

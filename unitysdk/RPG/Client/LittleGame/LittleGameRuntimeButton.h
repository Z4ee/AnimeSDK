#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ButtonListTrigger_RuntimeButton.h"

namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_LITTLEGAMERUNTIMEBUTTON_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B1CC8E0)
#define RPG_CLIENT_LITTLEGAME_LITTLEGAMERUNTIMEBUTTON_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x1B1CC8A0)
#define RPG_CLIENT_LITTLEGAME_LITTLEGAMERUNTIMEBUTTON_GET_ORIGINBUTTONNAME_OFFSET UNITYSDK_OFFSET(0x1B1CC8C0)
#define RPG_CLIENT_LITTLEGAME_LITTLEGAMERUNTIMEBUTTON_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x1B1CC8B0)
#define RPG_CLIENT_LITTLEGAME_LITTLEGAMERUNTIMEBUTTON_SET_ORIGINBUTTONNAME_OFFSET UNITYSDK_OFFSET(0x1B1CC8D0)
#define RPG_CLIENT_LITTLEGAME_LITTLEGAMERUNTIMEBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1CC940)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int LittleGameRuntimeButton_TypeDefinitionIndex = 76045;

	class LittleGameRuntimeButton : public ::RPG::GameCore::ButtonListTrigger_RuntimeButton
	{
	public:
		::System::String* _OriginButtonName_k__BackingField; // 0x40
		::System::UInt32 _EntityID_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_LITTLEGAMERUNTIMEBUTTON__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_EntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_LITTLEGAMERUNTIMEBUTTON_GET_ENTITYID_OFFSET))(this);
		}

		::System::Void set_EntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_LITTLEGAMERUNTIMEBUTTON_SET_ENTITYID_OFFSET))(this, a1);
		}

		::System::String* get_OriginButtonName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_LITTLEGAMERUNTIMEBUTTON_GET_ORIGINBUTTONNAME_OFFSET))(this);
		}

		::System::Void set_OriginButtonName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_LITTLEGAMERUNTIMEBUTTON_SET_ORIGINBUTTONNAME_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_LITTLEGAMERUNTIMEBUTTON_CLEAR_OFFSET))(this);
		}
	};
}

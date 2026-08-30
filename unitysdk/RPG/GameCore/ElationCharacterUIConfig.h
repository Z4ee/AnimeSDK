#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ELATIONCHARACTERUICONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB25400)
#define RPG_GAMECORE_ELATIONCHARACTERUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB25580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationCharacterUIConfig_TypeDefinitionIndex = 16371;

	class ElationCharacterUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID EchoPointDesc; // 0x10
		::Il2CppArray<::System::String*>* PreviewElationSkillTriggerKeyList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONCHARACTERUICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElationCharacterUIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElationCharacterUIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONCHARACTERUICONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

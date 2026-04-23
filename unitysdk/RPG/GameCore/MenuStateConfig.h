#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MENUSTATECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18ADDA50)
#define RPG_GAMECORE_MENUSTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18ADDC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MenuStateConfig_TypeDefinitionIndex = 15501;

	class MenuStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* StateGachaNormal; // 0x10
		::System::String* StateGachaGold; // 0x18
		::System::String* StateGachaResultNormal; // 0x20
		::System::String* StateGachaResultGold; // 0x28
		::System::String* StateChallenge; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUSTATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MenuStateConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MenuStateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUSTATECONFIG_FROMBINARY_OFFSET))(array, val);
		}
	};
}

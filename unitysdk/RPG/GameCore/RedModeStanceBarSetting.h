#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_REDMODESTANCEBARSETTING_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19AB86A0)
#define RPG_GAMECORE_REDMODESTANCEBARSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB87B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RedModeStanceBarSetting_TypeDefinitionIndex = 16280;

	class RedModeStanceBarSetting : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* LeftStanceBarColor; // 0x10
		::System::String* RightStanceBarColor; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDMODESTANCEBARSETTING__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RedModeStanceBarSetting*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RedModeStanceBarSetting*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDMODESTANCEBARSETTING_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLURALITYSTANCEBARSETTING_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A43670)
#define RPG_GAMECORE_PLURALITYSTANCEBARSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x19A43890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PluralityStanceBarSetting_TypeDefinitionIndex = 16281;

	class PluralityStanceBarSetting : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* LeftStanceBarColor1; // 0x10
		::System::String* LeftStanceBarColor2; // 0x18
		::System::String* LeftStanceBarColor3; // 0x20
		::System::String* RightStanceBarColor1; // 0x28
		::System::String* RightStanceBarColor2; // 0x30
		::System::String* RightStanceBarColor3; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLURALITYSTANCEBARSETTING__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PluralityStanceBarSetting*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PluralityStanceBarSetting*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLURALITYSTANCEBARSETTING_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CONVINCEGAMEPLAYSKILLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1883D2C0)
#define RPG_GAMECORE_CONVINCEGAMEPLAYSKILLCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1883D9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceGameplaySkillConfigRow_TypeDefinitionIndex = 12377;

	class ConvinceGameplaySkillConfigRow : public ::System::Object
	{
	public:
		::System::String* SkillIconPath; // 0x10
		::System::UInt32 ID; // 0x18
		::RPG::Client::TextID SkillDescriptionID; // 0x20
		::RPG::Client::TextID SkillNameText; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYSKILLCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ConvinceGameplaySkillConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceGameplaySkillConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYSKILLCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

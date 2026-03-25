#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HELIOBUSSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172A5FA0)
#define RPG_GAMECORE_HELIOBUSSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x172A6720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusSkillRow_TypeDefinitionIndex = 12591;

	class HeliobusSkillRow : public ::System::Object
	{
	public:
		::System::String* SkillIconPath; // 0x10
		::System::UInt32 UnlockToastMissionID; // 0x18
		::System::UInt32 RelatedEventID; // 0x1C
		::System::UInt32 HeliobusSkillID; // 0x20
		::RPG::GameCore::SkillEffect SkillEffect; // 0x24
		::System::UInt32 SkillUIPosition; // 0x28
		::System::UInt32 UnlockMissionID; // 0x2C
		::RPG::Client::TextID BGDescription; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSKILLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::HeliobusSkillRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeliobusSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSKILLROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

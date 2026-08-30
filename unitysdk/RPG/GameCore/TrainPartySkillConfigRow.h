#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYSKILLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5E1630)
#define RPG_GAMECORE_TRAINPARTYSKILLCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E1930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartySkillConfigRow_TypeDefinitionIndex = 15150;

	class TrainPartySkillConfigRow : public ::System::Object
	{
	public:
		::System::String* SkillIconPath; // 0x10
		::System::String* SkillFigurePath; // 0x18
		::RPG::Client::TextID SkillDescription; // 0x20
		::RPG::Client::TextID SkillName; // 0x30
		::System::UInt32 SKillID; // 0x40
		::System::Boolean IsRare; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSKILLCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartySkillConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartySkillConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSKILLCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

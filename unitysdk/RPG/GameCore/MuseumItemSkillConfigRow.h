#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MuseumItemSkillType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MUSEUMITEMSKILLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x199BD330)
#define RPG_GAMECORE_MUSEUMITEMSKILLCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x199BD520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumItemSkillConfigRow_TypeDefinitionIndex = 13558;

	class MuseumItemSkillConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TypeParameter; // 0x10
		::RPG::Client::TextID SkillDesc; // 0x18
		::RPG::GameCore::MuseumItemSkillType Type; // 0x28
		::System::UInt32 ItemSkillID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMITEMSKILLCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MuseumItemSkillConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MuseumItemSkillConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMITEMSKILLCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

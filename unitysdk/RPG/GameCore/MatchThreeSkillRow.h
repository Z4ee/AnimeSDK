#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREESKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173B65F0)
#define RPG_GAMECORE_MATCHTHREESKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x173B68E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeSkillRow_TypeDefinitionIndex = 10942;

	class MatchThreeSkillRow : public ::System::Object
	{
	public:
		::System::String* SkillChargedImg; // 0x10
		::System::String* DescFigure; // 0x18
		::System::String* BirdSkillTrailEffectPath; // 0x20
		::System::String* SkillJson; // 0x28
		::System::String* SkillUnchangedImg; // 0x30
		::RPG::Client::TextID Desc; // 0x38
		::System::UInt32 SkillID; // 0x48
		::System::UInt32 VideoID; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREESKILLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MatchThreeSkillRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREESKILLROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

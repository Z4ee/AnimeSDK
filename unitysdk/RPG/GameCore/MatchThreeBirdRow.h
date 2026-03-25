#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEBIRDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173AF750)
#define RPG_GAMECORE_MATCHTHREEBIRDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x173AFC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeBirdRow_TypeDefinitionIndex = 10940;

	class MatchThreeBirdRow : public ::System::Object
	{
	public:
		::System::String* ModelPath; // 0x10
		::System::String* FaceMat; // 0x18
		::System::String* ImagePath; // 0x20
		::System::String* IconPath; // 0x28
		::System::UInt32 GuideID; // 0x30
		::System::UInt32 BirdID; // 0x34
		::RPG::Client::TextID BirdName; // 0x38
		::RPG::Client::TextID BirdDesc; // 0x48
		::System::UInt32 SkillID; // 0x58
		::System::UInt32 DefaultEmo; // 0x5C
		::System::Boolean IsShow; // 0x60
		::System::UInt32 WinEmo; // 0x64
		::System::UInt32 LoseEmo; // 0x68
		::System::UInt32 DrawEmo; // 0x6C
		::System::UInt32 UnlockLevel; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBIRDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MatchThreeBirdRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeBirdRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBIRDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

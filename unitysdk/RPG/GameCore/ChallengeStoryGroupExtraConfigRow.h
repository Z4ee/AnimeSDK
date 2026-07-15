#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeStoryType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B7160E0)
#define RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7168A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeStoryGroupExtraConfigRow_TypeDefinitionIndex = 12494;

	class ChallengeStoryGroupExtraConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BuffList; // 0x10
		::System::String* ThemePosterEffectPrefabPath; // 0x18
		::Il2CppArray<::System::UInt32>* SubMazeBuffList; // 0x20
		::System::String* ThemeIconPicPath; // 0x28
		::System::String* ThemePosterTabPicPath; // 0x30
		::System::String* ThemePosterBgPicPath; // 0x38
		::System::String* ThemeToastPicPath; // 0x40
		::RPG::GameCore::ChallengeStoryType StoryType; // 0x48
		::System::UInt32 GroupID; // 0x4C
		::System::UInt32 ThemeID; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChallengeStoryGroupExtraConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChallengeStoryGroupExtraConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

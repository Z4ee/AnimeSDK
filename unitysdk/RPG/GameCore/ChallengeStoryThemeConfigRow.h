#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHALLENGESTORYTHEMECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B716A60)
#define RPG_GAMECORE_CHALLENGESTORYTHEMECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B716CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeStoryThemeConfigRow_TypeDefinitionIndex = 12500;

	class ChallengeStoryThemeConfigRow : public ::System::Object
	{
	public:
		::System::String* ThemeSubColor1; // 0x10
		::System::String* ThemeSubColor2; // 0x18
		::System::String* ThemePanelPrefabPath; // 0x20
		::System::String* ThemeMainColor; // 0x28
		::System::String* ThemeBgPrefabPath; // 0x30
		::System::String* ThemeEffColor; // 0x38
		::System::UInt32 ThemeID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGESTORYTHEMECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChallengeStoryThemeConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChallengeStoryThemeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGESTORYTHEMECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

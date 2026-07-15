#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B06C1C0)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B06CC10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialGuideGroupTypeRow_TypeDefinitionIndex = 14776;

	class TutorialGuideGroupTypeRow : public ::System::Object
	{
	public:
		::System::String* MessageIconPath; // 0x10
		::System::UInt32 TutorialType; // 0x18
		::RPG::Client::TextID MessageTitle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialGuideGroupTypeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialGuideGroupTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

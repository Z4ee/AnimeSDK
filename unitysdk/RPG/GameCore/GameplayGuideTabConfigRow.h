#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GuideType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D142DE0)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D143C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameplayGuideTabConfigRow_TypeDefinitionIndex = 13272;

	class GameplayGuideTabConfigRow : public ::System::Object
	{
	public:
		::System::String* ResBarKey; // 0x10
		::System::String* IconPath; // 0x18
		::RPG::GameCore::GuideType GuideType; // 0x20
		::RPG::Client::TextID Desc; // 0x28
		::System::UInt32 UnlockID; // 0x38
		::System::UInt32 IntroDataID; // 0x3C
		::System::UInt32 Priority; // 0x40
		::System::UInt32 ID; // 0x44
		::RPG::Client::TextID Name; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GameplayGuideTabConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameplayGuideTabConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

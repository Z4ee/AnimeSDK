#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TutorialPlatformType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALGUIDEDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19E28870)
#define RPG_GAMECORE_TUTORIALGUIDEDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19E293A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialGuideDataRow_TypeDefinitionIndex = 14620;

	class TutorialGuideDataRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::RPG::Client::TextID DescText; // 0x18
		::RPG::GameCore::TutorialPlatformType PlatformType; // 0x28
		::System::UInt32 ID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialGuideDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialGuideDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

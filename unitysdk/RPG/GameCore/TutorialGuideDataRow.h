#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TutorialPlatformType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALGUIDEDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190D7960)
#define RPG_GAMECORE_TUTORIALGUIDEDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x190D8060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialGuideDataRow_TypeDefinitionIndex = 14600;

	class TutorialGuideDataRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::RPG::Client::TextID DescText; // 0x18
		::System::UInt32 ID; // 0x28
		::RPG::GameCore::TutorialPlatformType PlatformType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TutorialGuideDataRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialGuideDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEDATAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

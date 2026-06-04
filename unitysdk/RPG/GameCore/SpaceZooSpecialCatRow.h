#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SPACEZOOSPECIALCATROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19C98120)
#define RPG_GAMECORE_SPACEZOOSPECIALCATROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19C98A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooSpecialCatRow_TypeDefinitionIndex = 11793;

	class SpaceZooSpecialCatRow : public ::System::Object
	{
	public:
		::System::String* MatPath; // 0x10
		::System::String* ImagePath; // 0x18
		::Il2CppArray<::System::String*>* ColorBar; // 0x20
		::System::String* LargeImagePath; // 0x28
		::Il2CppArray<::System::UInt32>* TipsCustomizedCat; // 0x30
		::Il2CppArray<::System::UInt32>* MatchedChannelFeature; // 0x38
		::RPG::Client::TextID Name; // 0x40
		::System::UInt32 TipsMissionID; // 0x50
		::System::UInt32 SpecialCatID; // 0x54
		::System::Boolean IsHide; // 0x58
		::System::UInt32 SpecialItem; // 0x5C
		::System::UInt32 PhotoSubmissionID; // 0x60
		::System::UInt32 ResearchPointSSR; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpaceZooSpecialCatRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpaceZooSpecialCatRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

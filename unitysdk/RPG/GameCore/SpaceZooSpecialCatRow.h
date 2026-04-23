#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SPACEZOOSPECIALCATROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18E7C970)
#define RPG_GAMECORE_SPACEZOOSPECIALCATROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18E7D2B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooSpecialCatRow_TypeDefinitionIndex = 11694;

	class SpaceZooSpecialCatRow : public ::System::Object
	{
	public:
		::System::String* LargeImagePath; // 0x10
		::Il2CppArray<::System::UInt32>* TipsCustomizedCat; // 0x18
		::System::String* MatPath; // 0x20
		::Il2CppArray<::System::UInt32>* MatchedChannelFeature; // 0x28
		::Il2CppArray<::System::String*>* ColorBar; // 0x30
		::System::String* ImagePath; // 0x38
		::System::Boolean IsHide; // 0x40
		::System::UInt32 ResearchPointSSR; // 0x44
		::System::UInt32 TipsMissionID; // 0x48
		::System::UInt32 SpecialCatID; // 0x4C
		::RPG::Client::TextID Name; // 0x50
		::System::UInt32 SpecialItem; // 0x60
		::System::UInt32 PhotoSubmissionID; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SpaceZooSpecialCatRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpaceZooSpecialCatRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

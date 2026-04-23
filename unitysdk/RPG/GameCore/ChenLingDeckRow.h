#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGDECKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x187E98F0)
#define RPG_GAMECORE_CHENLINGDECKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x187E9E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingDeckRow_TypeDefinitionIndex = 10570;

	class ChenLingDeckRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* ShowCardList; // 0x18
		::Il2CppArray<::System::UInt32>* InitialCardList; // 0x20
		::System::String* DeckIconPath; // 0x28
		::Il2CppArray<::System::UInt32>* CardList; // 0x30
		::Il2CppArray<::System::UInt32>* RelatedCardList; // 0x38
		::Il2CppArray<::System::UInt32>* InitialEffectList; // 0x40
		::Il2CppArray<::System::UInt32>* ActivityPanelSoldieList; // 0x48
		::RPG::Client::TextID BGDesc; // 0x50
		::System::UInt32 GuideGroupID; // 0x60
		::System::UInt32 ID; // 0x64
		::RPG::Client::TextID Name; // 0x68
		::RPG::Client::TextID Desc; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGDECKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChenLingDeckRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingDeckRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGDECKROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

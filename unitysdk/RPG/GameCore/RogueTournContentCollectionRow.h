#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNCONTENTCOLLECTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D6FD10)
#define RPG_GAMECORE_ROGUETOURNCONTENTCOLLECTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D70110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournContentCollectionRow_TypeDefinitionIndex = 14243;

	class RogueTournContentCollectionRow : public ::System::Object
	{
	public:
		::System::String* SlotIconPath; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x18
		::System::String* IconPath; // 0x20
		::RPG::Client::TextID CollectionName; // 0x28
		::System::UInt32 CollectionID; // 0x38
		::RPG::Client::TextID CollectionEffectDesc; // 0x40
		::System::UInt32 UnlockID; // 0x50
		::System::Int32 EntityRuntimeReplaceArtPrefabID; // 0x54
		::RPG::Client::TextID CollectionDesc; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTCOLLECTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournContentCollectionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournContentCollectionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTCOLLECTIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

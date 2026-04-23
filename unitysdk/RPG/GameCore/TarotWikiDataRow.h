#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TAROTWIKIDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EFDD00)
#define RPG_GAMECORE_TAROTWIKIDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18EFE010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotWikiDataRow_TypeDefinitionIndex = 14457;

	class TarotWikiDataRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SubdataList; // 0x10
		::Il2CppArray<::System::UInt32>* ChangeID; // 0x18
		::RPG::Client::TextID Title; // 0x20
		::System::UInt32 ID; // 0x30
		::System::UInt32 UnlockID; // 0x34
		::RPG::Client::TextID Details; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTWIKIDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TarotWikiDataRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotWikiDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTWIKIDATAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TITANATLASGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178A0D20)
#define RPG_GAMECORE_TITANATLASGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x178A0F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TitanAtlasGroupRow_TypeDefinitionIndex = 14021;

	class TitanAtlasGroupRow : public ::System::Object
	{
	public:
		::System::String* TitleBGColor; // 0x10
		::RPG::Client::TextID TitanGroupName; // 0x18
		::RPG::Client::TextID TitanGroupDesc; // 0x28
		::System::UInt32 TitanGroupID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TITANATLASGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TitanAtlasGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TitanAtlasGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TITANATLASGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

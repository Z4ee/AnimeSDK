#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TAROTWIKITIMELINEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x177D83D0)
#define RPG_GAMECORE_TAROTWIKITIMELINEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x177D8670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotWikiTimelineRow_TypeDefinitionIndex = 13980;

	class TarotWikiTimelineRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DataList; // 0x10
		::RPG::Client::TextID Title; // 0x18
		::System::UInt32 UnlockID; // 0x28
		::System::UInt32 SpecialType; // 0x2C
		::System::Single Progress; // 0x30
		::System::UInt32 ID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTWIKITIMELINEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TarotWikiTimelineRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotWikiTimelineRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTWIKITIMELINEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

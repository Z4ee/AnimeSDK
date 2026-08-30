#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TAROTWIKITIMELINEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E1C9E00)
#define RPG_GAMECORE_TAROTWIKITIMELINEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1CA090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotWikiTimelineRow_TypeDefinitionIndex = 15071;

	class TarotWikiTimelineRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DataList; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Single Progress; // 0x1C
		::System::UInt32 UnlockID; // 0x20
		::System::UInt32 SpecialType; // 0x24
		::RPG::Client::TextID Title; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTWIKITIMELINEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TarotWikiTimelineRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotWikiTimelineRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTWIKITIMELINEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

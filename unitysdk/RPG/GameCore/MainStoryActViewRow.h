#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAINSTORYACTVIEWROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BCDBA50)
#define RPG_GAMECORE_MAINSTORYACTVIEWROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCDBCD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainStoryActViewRow_TypeDefinitionIndex = 13476;

	class MainStoryActViewRow : public ::System::Object
	{
	public:
		::System::String* BannerPicPath; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 SortID; // 0x1C
		::RPG::Client::TextID Name; // 0x20
		::System::UInt32 IsCompletionOverride; // 0x30
		::System::UInt32 IsCompleted; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINSTORYACTVIEWROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MainStoryActViewRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MainStoryActViewRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINSTORYACTVIEWROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

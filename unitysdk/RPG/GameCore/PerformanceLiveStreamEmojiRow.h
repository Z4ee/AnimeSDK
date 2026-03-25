#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PerformanceLiveStreamAtmosphereType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCELIVESTREAMEMOJIROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17498440)
#define RPG_GAMECORE_PERFORMANCELIVESTREAMEMOJIROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17498A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceLiveStreamEmojiRow_TypeDefinitionIndex = 13117;

	class PerformanceLiveStreamEmojiRow : public ::System::Object
	{
	public:
		::System::String* MainEmojiPath; // 0x10
		::System::String* SubEmojiPath1; // 0x18
		::System::String* SubEmojiPath2; // 0x20
		::RPG::GameCore::PerformanceLiveStreamAtmosphereType Atmosphere; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCELIVESTREAMEMOJIROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PerformanceLiveStreamEmojiRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceLiveStreamEmojiRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCELIVESTREAMEMOJIROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

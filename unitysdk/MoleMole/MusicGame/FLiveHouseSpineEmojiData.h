#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_MUSICGAME_FLIVEHOUSESPINEEMOJIDATA_ISNULLOREMPTY_OFFSET UNITYSDK_OFFSET(0x7A35C0)
#define MOLEMOLE_MUSICGAME_FLIVEHOUSESPINEEMOJIDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1303EDA0)

namespace MoleMole::MusicGame
{
	inline static constexpr unsigned int FLiveHouseSpineEmojiData_TypeDefinitionIndex = 65355;

	struct alignas(8) FLiveHouseSpineEmojiData
	{
		static ::MoleMole::MusicGame::FLiveHouseSpineEmojiData* StaticGet_Empty()
		{
			return (::MoleMole::MusicGame::FLiveHouseSpineEmojiData*)Il2CppClass::FromTypeDefinitionIndex(FLiveHouseSpineEmojiData_TypeDefinitionIndex)->GetStaticField(0x4F450);
		}
		::System::Single duration; // 0x10
		::System::String* skinName; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MUSICGAME_FLIVEHOUSESPINEEMOJIDATA__CCTOR_OFFSET))();
		}

		::System::Boolean IsNullOrEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MUSICGAME_FLIVEHOUSESPINEEMOJIDATA_ISNULLOREMPTY_OFFSET))(this);
		}
	};
}

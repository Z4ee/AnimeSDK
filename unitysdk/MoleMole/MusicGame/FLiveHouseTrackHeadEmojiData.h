#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_MUSICGAME_FLIVEHOUSETRACKHEADEMOJIDATA_ISNULLOREMPTY_OFFSET UNITYSDK_OFFSET(0x79BA50)
#define MOLEMOLE_MUSICGAME_FLIVEHOUSETRACKHEADEMOJIDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BD7790)

namespace MoleMole::MusicGame
{
	inline static constexpr unsigned int FLiveHouseTrackHeadEmojiData_TypeDefinitionIndex = 62434;

	struct alignas(8) FLiveHouseTrackHeadEmojiData
	{
		static ::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData* StaticGet_Empty()
		{
			return (::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData*)Il2CppClass::FromTypeDefinitionIndex(FLiveHouseTrackHeadEmojiData_TypeDefinitionIndex)->GetStaticField(0x471F0);
		}
		::System::Single duration; // 0x10
		::Foundation::AssetPath assetPath; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MUSICGAME_FLIVEHOUSETRACKHEADEMOJIDATA__CCTOR_OFFSET))();
		}

		::System::Boolean IsNullOrEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MUSICGAME_FLIVEHOUSETRACKHEADEMOJIDATA_ISNULLOREMPTY_OFFSET))(this);
		}
	};
}

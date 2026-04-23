#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrackPhotoShotTargetResult.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class TrackPhotoTrashCanConfigRow; }

#define RPG_CLIENT_TRACKPHOTOSHOTPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xB324560)
#define RPG_CLIENT_TRACKPHOTOSHOTPARAM_GET_EXTRASCORE_OFFSET UNITYSDK_OFFSET(0xDF3E0)
#define RPG_CLIENT_TRACKPHOTOSHOTPARAM_GET_SCORE_OFFSET UNITYSDK_OFFSET(0xDF380)

namespace RPG::Client
{
	inline static constexpr unsigned int TrackPhotoShotParam_TypeDefinitionIndex = 56186;

	struct alignas(8) TrackPhotoShotParam
	{
		::RPG::GameCore::TrackPhotoTrashCanConfigRow* ConfigRow; // 0x10
		::System::UInt32 EntityID; // 0x18
		::System::UInt32 NPCGroupInstanceID; // 0x1C
		::System::Boolean isExtra; // 0x20
		::RPG::Client::TrackPhotoShotTargetResult Result; // 0x24

		static ::RPG::Client::TrackPhotoShotParam Create(::RPG::GameCore::TrackPhotoTrashCanConfigRow* row, ::System::UInt32 entityID, ::System::UInt32 npcGroupInstanceID, ::System::Boolean isExtra, ::RPG::Client::TrackPhotoShotTargetResult result)
		{
			return ((::RPG::Client::TrackPhotoShotParam(*)(::RPG::GameCore::TrackPhotoTrashCanConfigRow*, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::RPG::Client::TrackPhotoShotTargetResult))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRACKPHOTOSHOTPARAM_CREATE_OFFSET))(row, entityID, npcGroupInstanceID, isExtra, result);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRACKPHOTOSHOTPARAM_GET_SCORE_OFFSET))(this);
		}

		::System::UInt32 get_ExtraScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRACKPHOTOSHOTPARAM_GET_EXTRASCORE_OFFSET))(this);
		}
	};
}

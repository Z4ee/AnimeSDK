#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrackPhotoShotTargetResult.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class TrackPhotoTrashCanConfigRow; }

#define RPG_CLIENT_TRACKPHOTOSHOTPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0x178ADA30)
#define RPG_CLIENT_TRACKPHOTOSHOTPARAM_GET_EXTRASCORE_OFFSET UNITYSDK_OFFSET(0x395CE20)
#define RPG_CLIENT_TRACKPHOTOSHOTPARAM_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x395CDC0)

namespace RPG::Client
{
	inline static constexpr unsigned int TrackPhotoShotParam_TypeDefinitionIndex = 58195;

	struct alignas(8) TrackPhotoShotParam
	{
		::RPG::GameCore::TrackPhotoTrashCanConfigRow* ConfigRow; // 0x10
		::System::UInt32 EntityID; // 0x18
		::System::UInt32 NPCGroupInstanceID; // 0x1C
		::System::Boolean isExtra; // 0x20
		::RPG::Client::TrackPhotoShotTargetResult Result; // 0x24

		static ::RPG::Client::TrackPhotoShotParam Create(::RPG::GameCore::TrackPhotoTrashCanConfigRow* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4, ::RPG::Client::TrackPhotoShotTargetResult a5)
		{
			return ((::RPG::Client::TrackPhotoShotParam(*)(::RPG::GameCore::TrackPhotoTrashCanConfigRow*, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::RPG::Client::TrackPhotoShotTargetResult))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRACKPHOTOSHOTPARAM_CREATE_OFFSET))(a1, a2, a3, a4, a5);
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

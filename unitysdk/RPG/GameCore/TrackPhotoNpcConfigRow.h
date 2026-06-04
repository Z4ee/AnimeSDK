#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrackPhotoCanType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRACKPHOTONPCCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19DEE0C0)
#define RPG_GAMECORE_TRACKPHOTONPCCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19DEE2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackPhotoNpcConfigRow_TypeDefinitionIndex = 11906;

	class TrackPhotoNpcConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 NpcID; // 0x10
		::System::UInt32 GroupID; // 0x14
		::System::UInt32 StageID; // 0x18
		::RPG::GameCore::TrackPhotoCanType CanTypeID; // 0x1C
		::System::Boolean IsExtraNpc; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTONPCCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrackPhotoNpcConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrackPhotoNpcConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTONPCCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

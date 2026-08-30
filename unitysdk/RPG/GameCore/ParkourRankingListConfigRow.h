#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_3745C69C00F04B7D_4;
class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PARKOURRANKINGLISTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D30CCB0)
#define RPG_GAMECORE_PARKOURRANKINGLISTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D30CED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParkourRankingListConfigRow_TypeDefinitionIndex = 12025;

	class ParkourRankingListConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_3745C69C00F04B7D_4*>* LevelBestRecordList; // 0x10
		::System::String* NPCIconPath; // 0x18
		::System::UInt32 RailBallID; // 0x20
		::RPG::Client::TextID NPCName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURRANKINGLISTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParkourRankingListConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParkourRankingListConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURRANKINGLISTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

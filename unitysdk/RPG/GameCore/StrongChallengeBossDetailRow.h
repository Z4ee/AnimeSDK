#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STRONGCHALLENGEBOSSDETAILROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17783440)
#define RPG_GAMECORE_STRONGCHALLENGEBOSSDETAILROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17783630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StrongChallengeBossDetailRow_TypeDefinitionIndex = 11329;

	class StrongChallengeBossDetailRow : public ::System::Object
	{
	public:
		::System::UInt32 BossDetailID; // 0x10
		::RPG::Client::TextID Detail; // 0x18
		::RPG::Client::TextID Name; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGEBOSSDETAILROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::StrongChallengeBossDetailRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StrongChallengeBossDetailRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGEBOSSDETAILROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

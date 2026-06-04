#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STRONGCHALLENGEBOSSDETAILROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19CC64D0)
#define RPG_GAMECORE_STRONGCHALLENGEBOSSDETAILROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19CC66C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StrongChallengeBossDetailRow_TypeDefinitionIndex = 11828;

	class StrongChallengeBossDetailRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Detail; // 0x10
		::RPG::Client::TextID Name; // 0x20
		::System::UInt32 BossDetailID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGEBOSSDETAILROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StrongChallengeBossDetailRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StrongChallengeBossDetailRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGEBOSSDETAILROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

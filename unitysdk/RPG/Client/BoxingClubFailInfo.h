#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_BOXINGCLUBFAILINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A108F50)

namespace RPG::Client
{
	inline static constexpr unsigned int BoxingClubFailInfo_TypeDefinitionIndex = 63025;

	class BoxingClubFailInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* Weakness; // 0x10
		::System::UInt32 RecommendLevel; // 0x18
		::System::UInt32 CurStageIndex; // 0x1C
		::System::UInt32 TotalStageIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBFAILINFO__CTOR_OFFSET))(this);
		}
	};
}

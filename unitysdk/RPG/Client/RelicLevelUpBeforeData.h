#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_RELICLEVELUPBEFOREDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0xC6DD840)
#define RPG_CLIENT_RELICLEVELUPBEFOREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC6DD920)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicLevelUpBeforeData_TypeDefinitionIndex = 62522;

	class RelicLevelUpBeforeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* SubAffixPropertyValueBefore; // 0x10
		::System::UInt32 ExpBefore; // 0x18
		::System::UInt32 LevelBefore; // 0x1C
		::RPG::GameCore::FixPoint MainAffixPropertyValueBefore; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICLEVELUPBEFOREDATA__CTOR_OFFSET))(this);
		}

		::System::Void CopyTo(::RPG::Client::RelicLevelUpBeforeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicLevelUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICLEVELUPBEFOREDATA_COPYTO_OFFSET))(this, a1);
		}
	};
}

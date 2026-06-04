#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYCHECKSEALID_METHOD_4_431940B0C0B51EE3_OFFSET UNITYSDK_OFFSET(0x198CA530)
#define RPG_GAMECORE_MARBLEBYCHECKSEALID_METHOD_4_9122196773D85BE6_OFFSET UNITYSDK_OFFSET(0x198CA610)
#define RPG_GAMECORE_MARBLEBYCHECKSEALID__CTOR_OFFSET UNITYSDK_OFFSET(0x198CA5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByCheckSealId_TypeDefinitionIndex = 16030;

	class MarbleByCheckSealId : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x28
		::System::UInt32 SealId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCHECKSEALID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_431940B0C0B51EE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByCheckSealId*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByCheckSealId*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCHECKSEALID_METHOD_4_431940B0C0B51EE3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9122196773D85BE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByCheckSealId* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByCheckSealId*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCHECKSEALID_METHOD_4_9122196773D85BE6_OFFSET))(a1, a2);
		}
	};
}

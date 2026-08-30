#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureDyingStyle.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVENTUREDYINGPARAM_METHOD_2_2162C1CE5E1F5107_OFFSET UNITYSDK_OFFSET(0x1CBB8900)
#define RPG_GAMECORE_ADVENTUREDYINGPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB8A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureDyingParam_TypeDefinitionIndex = 19980;

	class AdventureDyingParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AdventureDyingStyle DyingStyle; // 0x10
		::System::Single FreezeDuration; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREDYINGPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2162C1CE5E1F5107(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureDyingParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureDyingParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREDYINGPARAM_METHOD_2_2162C1CE5E1F5107_OFFSET))(a1, a2);
		}
	};
}

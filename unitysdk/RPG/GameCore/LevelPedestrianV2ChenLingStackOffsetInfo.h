#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELPEDESTRIANV2CHENLINGSTACKOFFSETINFO_METHOD_2_931A0613C0AF1A20_OFFSET UNITYSDK_OFFSET(0x1D1E6370)
#define RPG_GAMECORE_LEVELPEDESTRIANV2CHENLINGSTACKOFFSETINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E64A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2ChenLingStackOffsetInfo_TypeDefinitionIndex = 17127;

	class LevelPedestrianV2ChenLingStackOffsetInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 OffsetPosition; // 0x10
		::RPG::MVector3 OffsetRotation; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2CHENLINGSTACKOFFSETINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_931A0613C0AF1A20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2ChenLingStackOffsetInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2ChenLingStackOffsetInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2CHENLINGSTACKOFFSETINFO_METHOD_2_931A0613C0AF1A20_OFFSET))(a1, a2);
		}
	};
}

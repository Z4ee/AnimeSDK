#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ERAFLIPGROUPCONFIG_METHOD_2_780220646BAABBAD_OFFSET UNITYSDK_OFFSET(0x188B7370)
#define RPG_GAMECORE_ERAFLIPGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188B7430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EraFlipGroupConfig_TypeDefinitionIndex = 15734;

	class EraFlipGroupConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ERAFLIPGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_780220646BAABBAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EraFlipGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EraFlipGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ERAFLIPGROUPCONFIG_METHOD_2_780220646BAABBAD_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STAGEPRELOADCONFIG_METHOD_2_AAAA35FEB5F9620D_OFFSET UNITYSDK_OFFSET(0x1B0B3980)
#define RPG_GAMECORE_STAGEPRELOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0B3A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StagePreloadConfig_TypeDefinitionIndex = 15708;

	class StagePreloadConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* MonsterIdList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPRELOADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_AAAA35FEB5F9620D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StagePreloadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StagePreloadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPRELOADCONFIG_METHOD_2_AAAA35FEB5F9620D_OFFSET))(a1, a2);
		}
	};
}

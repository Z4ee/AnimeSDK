#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STAGEPRELOADCONFIG_METHOD_2_7201E095BFB49FD8_OFFSET UNITYSDK_OFFSET(0x18E914B0)
#define RPG_GAMECORE_STAGEPRELOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18E91590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StagePreloadConfig_TypeDefinitionIndex = 15474;

	class StagePreloadConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* MonsterIdList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPRELOADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7201E095BFB49FD8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StagePreloadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StagePreloadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPRELOADCONFIG_METHOD_2_7201E095BFB49FD8_OFFSET))(a1, a2);
		}
	};
}

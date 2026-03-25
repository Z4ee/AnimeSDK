#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EFFECTUSAGEJSONCONFIG_METHOD_2_6FE3F2A951EA6161_OFFSET UNITYSDK_OFFSET(0x1718A1F0)
#define RPG_GAMECORE_EFFECTUSAGEJSONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1718A2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectUsageJsonConfig_TypeDefinitionIndex = 15106;

	class EffectUsageJsonConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* APMMonoEffectUsageList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTUSAGEJSONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6FE3F2A951EA6161(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EffectUsageJsonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EffectUsageJsonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTUSAGEJSONCONFIG_METHOD_2_6FE3F2A951EA6161_OFFSET))(a1, a2);
		}
	};
}

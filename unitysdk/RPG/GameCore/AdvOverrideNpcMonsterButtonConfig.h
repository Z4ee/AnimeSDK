#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropButtonConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVOVERRIDENPCMONSTERBUTTONCONFIG_METHOD_3_7518CE06E56A2266_OFFSET UNITYSDK_OFFSET(0x19430060)
#define RPG_GAMECORE_ADVOVERRIDENPCMONSTERBUTTONCONFIG_METHOD_3_9F9DE189F35BC00F_OFFSET UNITYSDK_OFFSET(0x194300E0)
#define RPG_GAMECORE_ADVOVERRIDENPCMONSTERBUTTONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x194300B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvOverrideNpcMonsterButtonConfig_TypeDefinitionIndex = 20992;

	class AdvOverrideNpcMonsterButtonConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::PropButtonConfig*>* ButtonConfigs; // 0x20
		::System::Boolean Refresh; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVOVERRIDENPCMONSTERBUTTONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7518CE06E56A2266(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvOverrideNpcMonsterButtonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvOverrideNpcMonsterButtonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVOVERRIDENPCMONSTERBUTTONCONFIG_METHOD_3_7518CE06E56A2266_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9F9DE189F35BC00F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvOverrideNpcMonsterButtonConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvOverrideNpcMonsterButtonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVOVERRIDENPCMONSTERBUTTONCONFIG_METHOD_3_9F9DE189F35BC00F_OFFSET))(a1, a2);
		}
	};
}

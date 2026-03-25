#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameModeParamNotifyType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_NOTIFYGAMEMODEPARAMCHANGE_METHOD_3_D0A12265E64E32E3_OFFSET UNITYSDK_OFFSET(0x17475AF0)
#define RPG_GAMECORE_NOTIFYGAMEMODEPARAMCHANGE_METHOD_3_DFD85B0D9CDB5912_OFFSET UNITYSDK_OFFSET(0x17475B70)
#define RPG_GAMECORE_NOTIFYGAMEMODEPARAMCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x17475B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NotifyGameModeParamChange_TypeDefinitionIndex = 21954;

	class NotifyGameModeParamChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::GameModeParamNotifyType ParamType; // 0x18
		::RPG::GameCore::DynamicFloat* ParamValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYGAMEMODEPARAMCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D0A12265E64E32E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NotifyGameModeParamChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NotifyGameModeParamChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYGAMEMODEPARAMCHANGE_METHOD_3_D0A12265E64E32E3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DFD85B0D9CDB5912(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NotifyGameModeParamChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NotifyGameModeParamChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYGAMEMODEPARAMCHANGE_METHOD_3_DFD85B0D9CDB5912_OFFSET))(a1, a2);
		}
	};
}

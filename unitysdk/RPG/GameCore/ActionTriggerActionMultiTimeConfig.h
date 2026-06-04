#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define RPG_GAMECORE_ACTIONTRIGGERACTIONMULTITIMECONFIG_METHOD_4_0997F8B176ED00BE_OFFSET UNITYSDK_OFFSET(0x193CF9F0)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONMULTITIMECONFIG_METHOD_4_D66C6130E0653A01_OFFSET UNITYSDK_OFFSET(0x193CFC70)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONMULTITIMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x193CFB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionTriggerActionMultiTimeConfig_TypeDefinitionIndex = 16183;

	class ActionTriggerActionMultiTimeConfig : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::RPG::GameCore::MiActionConfigBase* Action; // 0x18
		::RPG::GameCore::MiParameterConfigBase* TriggerCountParam; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONMULTITIMECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0997F8B176ED00BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionTriggerActionMultiTimeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionTriggerActionMultiTimeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONMULTITIMECONFIG_METHOD_4_0997F8B176ED00BE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D66C6130E0653A01(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionTriggerActionMultiTimeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionTriggerActionMultiTimeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONMULTITIMECONFIG_METHOD_4_D66C6130E0653A01_OFFSET))(a1, a2);
		}
	};
}

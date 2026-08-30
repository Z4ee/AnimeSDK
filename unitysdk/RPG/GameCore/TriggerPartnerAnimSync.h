#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERPARTNERANIMSYNC_METHOD_3_8D643D1D3720164D_OFFSET UNITYSDK_OFFSET(0x1D6033A0)
#define RPG_GAMECORE_TRIGGERPARTNERANIMSYNC_METHOD_3_9358CD7A822E0E0E_OFFSET UNITYSDK_OFFSET(0x1D6033E0)
#define RPG_GAMECORE_TRIGGERPARTNERANIMSYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6033D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerPartnerAnimSync_TypeDefinitionIndex = 23183;

	class TriggerPartnerAnimSync : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean DoSync; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPARTNERANIMSYNC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8D643D1D3720164D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerPartnerAnimSync*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerPartnerAnimSync*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPARTNERANIMSYNC_METHOD_3_8D643D1D3720164D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9358CD7A822E0E0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerPartnerAnimSync* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerPartnerAnimSync*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPARTNERANIMSYNC_METHOD_3_9358CD7A822E0E0E_OFFSET))(a1, a2);
		}
	};
}

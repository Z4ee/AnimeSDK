#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AidType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_TRYTRIGGERAID_METHOD_3_1682F96EAB3AF4F4_OFFSET UNITYSDK_OFFSET(0x1B063550)
#define RPG_GAMECORE_TRYTRIGGERAID_METHOD_3_FD5896B3643212D9_OFFSET UNITYSDK_OFFSET(0x1B063510)
#define RPG_GAMECORE_TRYTRIGGERAID__CTOR_OFFSET UNITYSDK_OFFSET(0x1B063540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TryTriggerAid_TypeDefinitionIndex = 22792;

	class TryTriggerAid : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AidType AidType; // 0x18
		::RPG::GameCore::DynamicFloat* Probility; // 0x20
		::RPG::GameCore::DynamicFloat* LimitCountPerTurn; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYTRIGGERAID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FD5896B3643212D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TryTriggerAid*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TryTriggerAid*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYTRIGGERAID_METHOD_3_FD5896B3643212D9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1682F96EAB3AF4F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TryTriggerAid* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TryTriggerAid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYTRIGGERAID_METHOD_3_1682F96EAB3AF4F4_OFFSET))(a1, a2);
		}
	};
}

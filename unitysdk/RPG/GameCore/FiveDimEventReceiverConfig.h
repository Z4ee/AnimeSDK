#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimEventReceiverItem; }

#define RPG_GAMECORE_FIVEDIMEVENTRECEIVERCONFIG_METHOD_3_563623CBB152C1FB_OFFSET UNITYSDK_OFFSET(0x188FFDF0)
#define RPG_GAMECORE_FIVEDIMEVENTRECEIVERCONFIG_METHOD_3_A8668E666C88E992_OFFSET UNITYSDK_OFFSET(0x188FFD50)
#define RPG_GAMECORE_FIVEDIMEVENTRECEIVERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188FFDB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEventReceiverConfig_TypeDefinitionIndex = 17703;

	class FiveDimEventReceiverConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsEventReceiver; // 0x10
		::Il2CppArray<::RPG::GameCore::FiveDimEventReceiverItem*>* ReceiverItems; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVENTRECEIVERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A8668E666C88E992(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEventReceiverConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEventReceiverConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVENTRECEIVERCONFIG_METHOD_3_A8668E666C88E992_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_563623CBB152C1FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEventReceiverConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEventReceiverConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVENTRECEIVERCONFIG_METHOD_3_563623CBB152C1FB_OFFSET))(a1, a2);
		}
	};
}

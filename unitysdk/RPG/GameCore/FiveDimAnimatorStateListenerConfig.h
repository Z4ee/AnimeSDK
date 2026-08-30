#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimAnimatorListenConfig; }

#define RPG_GAMECORE_FIVEDIMANIMATORSTATELISTENERCONFIG_METHOD_3_51221D810D30EE76_OFFSET UNITYSDK_OFFSET(0x1E0E1170)
#define RPG_GAMECORE_FIVEDIMANIMATORSTATELISTENERCONFIG_METHOD_3_F445F653D695AC0D_OFFSET UNITYSDK_OFFSET(0x1E0E11B0)
#define RPG_GAMECORE_FIVEDIMANIMATORSTATELISTENERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E11A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAnimatorStateListenerConfig_TypeDefinitionIndex = 18432;

	class FiveDimAnimatorStateListenerConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsAnimatorStateListener; // 0x10
		::Il2CppArray<::RPG::GameCore::FiveDimAnimatorListenConfig*>* ListenerList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMANIMATORSTATELISTENERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_51221D810D30EE76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAnimatorStateListenerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAnimatorStateListenerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMANIMATORSTATELISTENERCONFIG_METHOD_3_51221D810D30EE76_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F445F653D695AC0D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAnimatorStateListenerConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAnimatorStateListenerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMANIMATORSTATELISTENERCONFIG_METHOD_3_F445F653D695AC0D_OFFSET))(a1, a2);
		}
	};
}

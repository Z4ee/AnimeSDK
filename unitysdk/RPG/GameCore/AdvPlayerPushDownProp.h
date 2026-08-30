#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVPLAYERPUSHDOWNPROP_METHOD_3_84D68CD05091C96D_OFFSET UNITYSDK_OFFSET(0x1D6C3B10)
#define RPG_GAMECORE_ADVPLAYERPUSHDOWNPROP_METHOD_3_DAF2F3C0D58D81F2_OFFSET UNITYSDK_OFFSET(0x1D6C3B50)
#define RPG_GAMECORE_ADVPLAYERPUSHDOWNPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C3B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvPlayerPushDownProp_TypeDefinitionIndex = 21989;

	class AdvPlayerPushDownProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnHitStage; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnHitMonster; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERPUSHDOWNPROP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_84D68CD05091C96D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPlayerPushDownProp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPlayerPushDownProp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERPUSHDOWNPROP_METHOD_3_84D68CD05091C96D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DAF2F3C0D58D81F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPlayerPushDownProp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPlayerPushDownProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERPUSHDOWNPROP_METHOD_3_DAF2F3C0D58D81F2_OFFSET))(a1, a2);
		}
	};
}

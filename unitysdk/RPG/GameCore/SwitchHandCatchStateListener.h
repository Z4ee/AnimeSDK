#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWITCHHANDCATCHSTATELISTENER_METHOD_3_9E829A2D5918927C_OFFSET UNITYSDK_OFFSET(0x17794570)
#define RPG_GAMECORE_SWITCHHANDCATCHSTATELISTENER_METHOD_3_FC37EE12B42B086C_OFFSET UNITYSDK_OFFSET(0x177945F0)
#define RPG_GAMECORE_SWITCHHANDCATCHSTATELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x177945C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchHandCatchStateListener_TypeDefinitionIndex = 19297;

	class SwitchHandCatchStateListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCatch; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLay; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCATCHSTATELISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9E829A2D5918927C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchHandCatchStateListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchHandCatchStateListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCATCHSTATELISTENER_METHOD_3_9E829A2D5918927C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FC37EE12B42B086C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchHandCatchStateListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchHandCatchStateListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCATCHSTATELISTENER_METHOD_3_FC37EE12B42B086C_OFFSET))(a1, a2);
		}
	};
}

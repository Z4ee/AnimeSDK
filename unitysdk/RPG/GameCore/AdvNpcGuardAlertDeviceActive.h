#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVNPCGUARDALERTDEVICEACTIVE_METHOD_3_0DA80098E6015B4C_OFFSET UNITYSDK_OFFSET(0x1CDD1BA0)
#define RPG_GAMECORE_ADVNPCGUARDALERTDEVICEACTIVE_METHOD_3_2117AB2227B0BC99_OFFSET UNITYSDK_OFFSET(0x1CDD1B60)
#define RPG_GAMECORE_ADVNPCGUARDALERTDEVICEACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDD1B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcGuardAlertDeviceActive_TypeDefinitionIndex = 19759;

	class AdvNpcGuardAlertDeviceActive : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TargetPlayerWhenActive; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* AlertClearWhenActive; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPlayerEnterAgain; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCGUARDALERTDEVICEACTIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2117AB2227B0BC99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcGuardAlertDeviceActive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcGuardAlertDeviceActive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCGUARDALERTDEVICEACTIVE_METHOD_3_2117AB2227B0BC99_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0DA80098E6015B4C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcGuardAlertDeviceActive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcGuardAlertDeviceActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCGUARDALERTDEVICEACTIVE_METHOD_3_0DA80098E6015B4C_OFFSET))(a1, a2);
		}
	};
}

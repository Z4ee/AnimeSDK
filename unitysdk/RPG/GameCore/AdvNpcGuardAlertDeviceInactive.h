#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVNPCGUARDALERTDEVICEINACTIVE_METHOD_3_CA4F564734979F63_OFFSET UNITYSDK_OFFSET(0x1942DA40)
#define RPG_GAMECORE_ADVNPCGUARDALERTDEVICEINACTIVE_METHOD_3_E5BC83204142692D_OFFSET UNITYSDK_OFFSET(0x1942DAC0)
#define RPG_GAMECORE_ADVNPCGUARDALERTDEVICEINACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1942DA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcGuardAlertDeviceInactive_TypeDefinitionIndex = 18867;

	class AdvNpcGuardAlertDeviceInactive : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPlayerEnter; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnActiveByAlertValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCGUARDALERTDEVICEINACTIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CA4F564734979F63(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcGuardAlertDeviceInactive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcGuardAlertDeviceInactive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCGUARDALERTDEVICEINACTIVE_METHOD_3_CA4F564734979F63_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E5BC83204142692D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcGuardAlertDeviceInactive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcGuardAlertDeviceInactive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCGUARDALERTDEVICEINACTIVE_METHOD_3_E5BC83204142692D_OFFSET))(a1, a2);
		}
	};
}

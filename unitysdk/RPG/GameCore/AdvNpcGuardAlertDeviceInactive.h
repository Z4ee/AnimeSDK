#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVNPCGUARDALERTDEVICEINACTIVE_METHOD_3_719C8C130B9FB8F1_OFFSET UNITYSDK_OFFSET(0x18659F60)
#define RPG_GAMECORE_ADVNPCGUARDALERTDEVICEINACTIVE_METHOD_3_73D63B50449284AF_OFFSET UNITYSDK_OFFSET(0x18659FE0)
#define RPG_GAMECORE_ADVNPCGUARDALERTDEVICEINACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x18659FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcGuardAlertDeviceInactive_TypeDefinitionIndex = 18911;

	class AdvNpcGuardAlertDeviceInactive : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPlayerEnter; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnActiveByAlertValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCGUARDALERTDEVICEINACTIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_719C8C130B9FB8F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcGuardAlertDeviceInactive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcGuardAlertDeviceInactive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCGUARDALERTDEVICEINACTIVE_METHOD_3_719C8C130B9FB8F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_73D63B50449284AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcGuardAlertDeviceInactive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcGuardAlertDeviceInactive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCGUARDALERTDEVICEINACTIVE_METHOD_3_73D63B50449284AF_OFFSET))(a1, a2);
		}
	};
}

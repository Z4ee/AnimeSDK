#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PingPongEnemyGroupEventBase; }
namespace System { class String; }

#define RPG_GAMECORE_PINGPONGENEMYGROUPCONFIG_METHOD_2_D36C0767BFBE7FE7_OFFSET UNITYSDK_OFFSET(0x1D78CAB0)
#define RPG_GAMECORE_PINGPONGENEMYGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D78CC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemyGroupConfig_TypeDefinitionIndex = 16801;

	class PingPongEnemyGroupConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::Il2CppArray<::System::String*>* UnitNameList; // 0x18
		::Il2CppArray<::RPG::GameCore::PingPongEnemyGroupEventBase*>* EventList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D36C0767BFBE7FE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemyGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemyGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPCONFIG_METHOD_2_D36C0767BFBE7FE7_OFFSET))(a1, a2);
		}
	};
}

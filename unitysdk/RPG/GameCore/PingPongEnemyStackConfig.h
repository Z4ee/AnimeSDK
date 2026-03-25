#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PINGPONGENEMYSTACKCONFIG_METHOD_2_968F8BD808C06A62_OFFSET UNITYSDK_OFFSET(0x174B08E0)
#define RPG_GAMECORE_PINGPONGENEMYSTACKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x174B0A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemyStackConfig_TypeDefinitionIndex = 15561;

	class PingPongEnemyStackConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 StackID; // 0x10
		::Il2CppArray<::System::String*>* NodeNameList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYSTACKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_968F8BD808C06A62(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemyStackConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemyStackConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYSTACKCONFIG_METHOD_2_968F8BD808C06A62_OFFSET))(a1, a2);
		}
	};
}

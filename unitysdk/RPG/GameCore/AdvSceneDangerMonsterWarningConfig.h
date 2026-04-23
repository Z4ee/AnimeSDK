#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameModeType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ADVSCENEDANGERMONSTERWARNINGCONFIG_METHOD_2_7699D64B1F3CA3DD_OFFSET UNITYSDK_OFFSET(0x186602E0)
#define RPG_GAMECORE_ADVSCENEDANGERMONSTERWARNINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18660520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSceneDangerMonsterWarningConfig_TypeDefinitionIndex = 16725;

	class AdvSceneDangerMonsterWarningConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Height; // 0x10
		::System::Single Radius; // 0x14
		::System::Single WarnCD; // 0x18
		::Il2CppArray<::RPG::GameCore::GameModeType>* ShowHintBlackList; // 0x20
		::System::String* WarnTextID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSCENEDANGERMONSTERWARNINGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7699D64B1F3CA3DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSceneDangerMonsterWarningConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSceneDangerMonsterWarningConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSCENEDANGERMONSTERWARNINGCONFIG_METHOD_2_7699D64B1F3CA3DD_OFFSET))(a1, a2);
		}
	};
}

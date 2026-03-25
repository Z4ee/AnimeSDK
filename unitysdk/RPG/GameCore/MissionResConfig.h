#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MISSIONRESCONFIG_METHOD_2_D78FA622F4325B8E_OFFSET UNITYSDK_OFFSET(0x174222C0)
#define RPG_GAMECORE_MISSIONRESCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17422450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionResConfig_TypeDefinitionIndex = 17441;

	class MissionResConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MainMissionID; // 0x10
		::Il2CppArray<::System::String*>* VideoList; // 0x18
		::Il2CppArray<::System::String*>* AudioList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONRESCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D78FA622F4325B8E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MissionResConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MissionResConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONRESCONFIG_METHOD_2_D78FA622F4325B8E_OFFSET))(a1, a2);
		}
	};
}

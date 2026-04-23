#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SubMissionInfoConfig; }

#define RPG_GAMECORE_MAINMISSIONPARTIALINFOCONFIG_METHOD_2_C1F17315E1F138F5_OFFSET UNITYSDK_OFFSET(0x18A82B90)
#define RPG_GAMECORE_MAINMISSIONPARTIALINFOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A82C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainMissionPartialInfoConfig_TypeDefinitionIndex = 18046;

	class MainMissionPartialInfoConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SubMissionInfoConfig*>* SubMissionList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONPARTIALINFOCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C1F17315E1F138F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MainMissionPartialInfoConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MainMissionPartialInfoConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONPARTIALINFOCONFIG_METHOD_2_C1F17315E1F138F5_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIONCHECKACTIONCONFIG_METHOD_4_73CE6B3C960F5826_OFFSET UNITYSDK_OFFSET(0x193CA770)
#define RPG_GAMECORE_ACTIONCHECKACTIONCONFIG_METHOD_4_D0D6C304CFE08799_OFFSET UNITYSDK_OFFSET(0x193CA850)
#define RPG_GAMECORE_ACTIONCHECKACTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x193CA800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionCheckActionConfig_TypeDefinitionIndex = 16191;

	class ActionCheckActionConfig : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::RPG::GameCore::MiActionConfigBase* Action; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONCHECKACTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_73CE6B3C960F5826(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionCheckActionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionCheckActionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONCHECKACTIONCONFIG_METHOD_4_73CE6B3C960F5826_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D0D6C304CFE08799(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionCheckActionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionCheckActionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONCHECKACTIONCONFIG_METHOD_4_D0D6C304CFE08799_OFFSET))(a1, a2);
		}
	};
}

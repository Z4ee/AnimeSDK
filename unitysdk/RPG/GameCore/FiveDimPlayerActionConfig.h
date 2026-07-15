#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimBaseEventAction; }

#define RPG_GAMECORE_FIVEDIMPLAYERACTIONCONFIG_METHOD_2_B8A1118F3314097E_OFFSET UNITYSDK_OFFSET(0x1BEA8C50)
#define RPG_GAMECORE_FIVEDIMPLAYERACTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEA8D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPlayerActionConfig_TypeDefinitionIndex = 16014;

	class FiveDimPlayerActionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* Actions; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERACTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B8A1118F3314097E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlayerActionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlayerActionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERACTIONCONFIG_METHOD_2_B8A1118F3314097E_OFFSET))(a1, a2);
		}
	};
}

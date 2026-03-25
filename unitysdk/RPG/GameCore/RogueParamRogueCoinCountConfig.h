#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUECOINCOUNTCONFIG_METHOD_6_9FB9E28037B43BE7_OFFSET UNITYSDK_OFFSET(0x1764C9A0)
#define RPG_GAMECORE_ROGUEPARAMROGUECOINCOUNTCONFIG_METHOD_6_D93C8AA5047C6331_OFFSET UNITYSDK_OFFSET(0x1764C6F0)
#define RPG_GAMECORE_ROGUEPARAMROGUECOINCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1764C870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueCoinCountConfig_TypeDefinitionIndex = 18169;

	class RogueParamRogueCoinCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUECOINCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_D93C8AA5047C6331(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueCoinCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueCoinCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUECOINCOUNTCONFIG_METHOD_6_D93C8AA5047C6331_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_9FB9E28037B43BE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueCoinCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueCoinCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUECOINCOUNTCONFIG_METHOD_6_9FB9E28037B43BE7_OFFSET))(a1, a2);
		}
	};
}

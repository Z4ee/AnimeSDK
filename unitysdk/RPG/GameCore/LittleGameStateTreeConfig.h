#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AIVariableValueSource; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMESTATETREECONFIG_METHOD_3_77AA48EEF1F02CD7_OFFSET UNITYSDK_OFFSET(0x1D206660)
#define RPG_GAMECORE_LITTLEGAMESTATETREECONFIG_METHOD_3_ED767096AF184840_OFFSET UNITYSDK_OFFSET(0x1D206620)
#define RPG_GAMECORE_LITTLEGAMESTATETREECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D206650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameStateTreeConfig_TypeDefinitionIndex = 18638;

	class LittleGameStateTreeConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean EnableStateTree; // 0x10
		::System::String* AIConfigPath; // 0x18
		::RPG::GameCore::AIVariableValueSource* OverrideVariables; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESTATETREECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ED767096AF184840(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameStateTreeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameStateTreeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESTATETREECONFIG_METHOD_3_ED767096AF184840_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_77AA48EEF1F02CD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameStateTreeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameStateTreeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESTATETREECONFIG_METHOD_3_77AA48EEF1F02CD7_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPSETUPOPTIONSTRIGGER_METHOD_3_5B74FE14D2CD2285_OFFSET UNITYSDK_OFFSET(0x1D36F8C0)
#define RPG_GAMECORE_PROPSETUPOPTIONSTRIGGER_METHOD_3_AE0CEE5ED87698C6_OFFSET UNITYSDK_OFFSET(0x1D36F840)
#define RPG_GAMECORE_PROPSETUPOPTIONSTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D36F890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSetupOptionsTrigger_TypeDefinitionIndex = 21347;

	class PropSetupOptionsTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean DestroyAfterTriggered; // 0x18
		::System::Boolean DisableAfterTriggered; // 0x19
		::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* OptionList; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPOPTIONSTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AE0CEE5ED87698C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetupOptionsTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetupOptionsTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPOPTIONSTRIGGER_METHOD_3_AE0CEE5ED87698C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5B74FE14D2CD2285(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetupOptionsTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetupOptionsTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPOPTIONSTRIGGER_METHOD_3_5B74FE14D2CD2285_OFFSET))(a1, a2);
		}
	};
}

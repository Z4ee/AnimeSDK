#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENABLEBUTTONS_METHOD_3_33C2AC6AB402EF2F_OFFSET UNITYSDK_OFFSET(0x1864DA30)
#define RPG_GAMECORE_ADVENABLEBUTTONS_METHOD_3_ADF9FAD9A9C842F2_OFFSET UNITYSDK_OFFSET(0x1864DAB0)
#define RPG_GAMECORE_ADVENABLEBUTTONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1864DA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEnableButtons_TypeDefinitionIndex = 19503;

	class AdvEnableButtons : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* TriggerName; // 0x20
		::Il2CppArray<::System::String*>* ButtonsByName; // 0x28
		::System::Boolean IsEnable; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEBUTTONS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_33C2AC6AB402EF2F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEnableButtons*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEnableButtons*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEBUTTONS_METHOD_3_33C2AC6AB402EF2F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ADF9FAD9A9C842F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEnableButtons* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEnableButtons*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEBUTTONS_METHOD_3_ADF9FAD9A9C842F2_OFFSET))(a1, a2);
		}
	};
}

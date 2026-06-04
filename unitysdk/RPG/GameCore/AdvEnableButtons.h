#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENABLEBUTTONS_METHOD_3_8AE91ED941698DD1_OFFSET UNITYSDK_OFFSET(0x19421290)
#define RPG_GAMECORE_ADVENABLEBUTTONS_METHOD_3_D3537D15BB5606B6_OFFSET UNITYSDK_OFFSET(0x19421210)
#define RPG_GAMECORE_ADVENABLEBUTTONS__CTOR_OFFSET UNITYSDK_OFFSET(0x19421260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEnableButtons_TypeDefinitionIndex = 19398;

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

		static ::System::Void Method_3_D3537D15BB5606B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEnableButtons*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEnableButtons*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEBUTTONS_METHOD_3_D3537D15BB5606B6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8AE91ED941698DD1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEnableButtons* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEnableButtons*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEBUTTONS_METHOD_3_8AE91ED941698DD1_OFFSET))(a1, a2);
		}
	};
}

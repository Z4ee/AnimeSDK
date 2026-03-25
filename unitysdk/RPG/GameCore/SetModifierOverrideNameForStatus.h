#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETMODIFIEROVERRIDENAMEFORSTATUS_METHOD_3_BA99AC15F45183D5_OFFSET UNITYSDK_OFFSET(0x176D6540)
#define RPG_GAMECORE_SETMODIFIEROVERRIDENAMEFORSTATUS_METHOD_3_C4EA8DDF2B654BD6_OFFSET UNITYSDK_OFFSET(0x176D64C0)
#define RPG_GAMECORE_SETMODIFIEROVERRIDENAMEFORSTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x176D6510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetModifierOverrideNameForStatus_TypeDefinitionIndex = 20813;

	class SetModifierOverrideNameForStatus : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* ModifierOwner; // 0x18
		::System::String* ModifierName; // 0x20
		::System::String* ModifierNameForStatus; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMODIFIEROVERRIDENAMEFORSTATUS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C4EA8DDF2B654BD6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetModifierOverrideNameForStatus*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetModifierOverrideNameForStatus*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMODIFIEROVERRIDENAMEFORSTATUS_METHOD_3_C4EA8DDF2B654BD6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BA99AC15F45183D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetModifierOverrideNameForStatus* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetModifierOverrideNameForStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMODIFIEROVERRIDENAMEFORSTATUS_METHOD_3_BA99AC15F45183D5_OFFSET))(a1, a2);
		}
	};
}

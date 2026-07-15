#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_REVIVECHARACTER_METHOD_3_0A109FFE2C251108_OFFSET UNITYSDK_OFFSET(0x1D02A020)
#define RPG_GAMECORE_REVIVECHARACTER_METHOD_3_B4EAF08CE95CEB6A_OFFSET UNITYSDK_OFFSET(0x1D02A250)
#define RPG_GAMECORE_REVIVECHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D02A150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReviveCharacter_TypeDefinitionIndex = 21899;

	class ReviveCharacter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* HPRatio; // 0x20
		::RPG::GameCore::DynamicFloat* SPRatio; // 0x28
		::RPG::GameCore::DynamicFloat* ActionDelayRatio; // 0x30
		::System::String* AnimStateName; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REVIVECHARACTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0A109FFE2C251108(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReviveCharacter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReviveCharacter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REVIVECHARACTER_METHOD_3_0A109FFE2C251108_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B4EAF08CE95CEB6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReviveCharacter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReviveCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REVIVECHARACTER_METHOD_3_B4EAF08CE95CEB6A_OFFSET))(a1, a2);
		}
	};
}

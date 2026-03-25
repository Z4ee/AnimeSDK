#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVSETAIMOVETO_METHOD_3_0EC027BCFBEBBEEB_OFFSET UNITYSDK_OFFSET(0x16F3F8F0)
#define RPG_GAMECORE_ADVSETAIMOVETO_METHOD_3_B7A004F1CB05CD21_OFFSET UNITYSDK_OFFSET(0x16F3F980)
#define RPG_GAMECORE_ADVSETAIMOVETO__CTOR_OFFSET UNITYSDK_OFFSET(0x16F3F950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetAIMoveTo_TypeDefinitionIndex = 20386;

	class AdvSetAIMoveTo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* EntityInstanceID; // 0x20
		::System::UInt32 GroupId; // 0x28
		::System::UInt32 PointID; // 0x2C
		::RPG::GameCore::CharacterMotionFlag MotionFlag; // 0x30
		::System::Boolean AlignRotation; // 0x34
		::System::Boolean AccurateStop; // 0x35
		::System::Boolean SkipStartTurn; // 0x36
		::System::Boolean FinishAfterStop; // 0x37
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnReach; // 0x38
		::System::Single SpeedScale; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETAIMOVETO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0EC027BCFBEBBEEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetAIMoveTo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetAIMoveTo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETAIMOVETO_METHOD_3_0EC027BCFBEBBEEB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B7A004F1CB05CD21(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetAIMoveTo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetAIMoveTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETAIMOVETO_METHOD_3_B7A004F1CB05CD21_OFFSET))(a1, a2);
		}
	};
}

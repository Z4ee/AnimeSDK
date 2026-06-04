#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVCHASEBAILU_METHOD_3_3A445E2F7AC24116_OFFSET UNITYSDK_OFFSET(0x1941EB00)
#define RPG_GAMECORE_ADVCHASEBAILU_METHOD_3_51A49F37820B5931_OFFSET UNITYSDK_OFFSET(0x1941EA60)
#define RPG_GAMECORE_ADVCHASEBAILU__CTOR_OFFSET UNITYSDK_OFFSET(0x1941EAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvChaseBailu_TypeDefinitionIndex = 21004;

	class AdvChaseBailu : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* PrefabPath; // 0x20
		::System::Single StartMoveDistance; // 0x28
		::System::Single AheadMoveDistance; // 0x2C
		::RPG::GameCore::CharacterMotionFlag MotionFlag; // 0x30
		::System::Single StartRunDistance; // 0x34
		::System::Single StartSprintDistance; // 0x38
		::System::Single FreeScaleDistance; // 0x3C
		::System::Single ScaleInterval; // 0x40
		::System::Single TransitionTime; // 0x44
		::System::Single PlayerSpeedRatio; // 0x48
		::System::Single ScaleStep; // 0x4C
		::System::Single OverSpeed; // 0x50
		::System::Single OverSpeedCD; // 0x54
		::System::String* OverSpeedEffect; // 0x58
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* WaitAction; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHASEBAILU__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_51A49F37820B5931(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvChaseBailu*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvChaseBailu*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHASEBAILU_METHOD_3_51A49F37820B5931_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3A445E2F7AC24116(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvChaseBailu* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvChaseBailu*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHASEBAILU_METHOD_3_3A445E2F7AC24116_OFFSET))(a1, a2);
		}
	};
}

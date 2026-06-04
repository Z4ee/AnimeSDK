#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EWaitFaceToTaskFinishMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVNPCFACETOPLAYER_METHOD_3_23607FD499CBD3DE_OFFSET UNITYSDK_OFFSET(0x1942C230)
#define RPG_GAMECORE_ADVNPCFACETOPLAYER_METHOD_3_5661A0069DE296B6_OFFSET UNITYSDK_OFFSET(0x1942C2F0)
#define RPG_GAMECORE_ADVNPCFACETOPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1942C2A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcFaceToPlayer_TypeDefinitionIndex = 19198;

	class AdvNpcFaceToPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean FromDialog; // 0x18
		::System::UInt32 GroupID; // 0x1C
		::System::UInt32 GroupNpcID; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetNpcType; // 0x28
		::System::UInt32 PlayerInGroupID; // 0x30
		::System::UInt32 PlayerInGroupNpcID; // 0x34
		::RPG::GameCore::TargetEvaluator* TargetPlayerType; // 0x38
		::System::Single Duration; // 0x40
		::System::Boolean TryFaceToFace; // 0x44
		::System::Boolean OnlyPlayerFaceToNpc; // 0x45
		::System::Boolean NpcLookAtPlayer; // 0x46
		::System::Boolean PlayerLookAtNpc; // 0x47
		::System::Boolean StopLookAtOnGraphEnd; // 0x48
		::System::Boolean TurnBackOnGraphEnd; // 0x49
		::System::Boolean SteerImmediately; // 0x4A
		::System::Boolean FinishImmadiate; // 0x4B
		::RPG::GameCore::EWaitFaceToTaskFinishMode WaitFinishMode; // 0x4C
		::System::Boolean ForceToStandBy; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCFACETOPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_23607FD499CBD3DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcFaceToPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcFaceToPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCFACETOPLAYER_METHOD_3_23607FD499CBD3DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5661A0069DE296B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcFaceToPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcFaceToPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCFACETOPLAYER_METHOD_3_5661A0069DE296B6_OFFSET))(a1, a2);
		}
	};
}

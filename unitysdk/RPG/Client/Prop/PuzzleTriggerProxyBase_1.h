#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_705B862E649BF345;
namespace RPG::Client::Prop { class PuzzleBoardBase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PuzzleTriggerProxyBase_1_TypeDefinitionIndex = 72381;

	template <typename T>
	class PuzzleTriggerProxyBase_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::OptionTriggerInfo*>* _OptionTriggerInfoDict; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>*>* _OptionInfosCache; // 0x0
		T _Trigger; // 0x0
		static ::System::Int32* StaticGet__UniqueID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PuzzleTriggerProxyBase_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::RPG::GameCore::GameEntity* _Player; // 0x0
		::UnityEngine::Transform* _SelfTransform; // 0x0
		::RPG::GameCore::TransformComponent* _PlayerTransformComponent; // 0x0
		::Class_2_705B862E649BF345* _CharacterAnimEvent; // 0x0
		::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* _OptionInfos; // 0x0
		::System::Single _EnableOptionAngle; // 0x0
		::System::Boolean _EnableOption; // 0x0
		::System::Int32 _WaitPlayerAnimStateNameHash; // 0x0
		::System::Single _ExecuteDelayAfterWaitAnimStart; // 0x0
		::RPG::Client::Prop::PuzzleBoardBase* _PuzzleBoard; // 0x0
		::System::UInt32 _IconID; // 0x0
		::System::Single _DelayTimer; // 0x0
		::System::Action* _OnPlayerAnimStateChangeCallback; // 0x0
		::RPG::GameCore::GameEntity* _ObjectEntity; // 0x0
		::RPG::GameCore::GameEntity* _OwnerEntity; // 0x0
		::System::Boolean _IsInTurnMode; // 0x0
		::System::Boolean _EnableTurnInteractMode; // 0x0
		::System::Int32 _WaitAnimHash; // 0x0
		static ::Il2CppArray<::System::Int32>** StaticGet__DefaultShowBit()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PuzzleTriggerProxyBase_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::String* _TriggerName; // 0x0
		::System::Boolean _UseNewTrigger; // 0x0
	};
}

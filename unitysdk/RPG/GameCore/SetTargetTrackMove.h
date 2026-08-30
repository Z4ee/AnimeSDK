#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class EntityMoveTrack; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTARGETTRACKMOVE_METHOD_3_2EDB580E08743F56_OFFSET UNITYSDK_OFFSET(0x1D511D40)
#define RPG_GAMECORE_SETTARGETTRACKMOVE_METHOD_3_31FF36CFC9611CDA_OFFSET UNITYSDK_OFFSET(0x1D511C60)
#define RPG_GAMECORE_SETTARGETTRACKMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D511CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetTrackMove_TypeDefinitionIndex = 19934;

	class SetTargetTrackMove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* StartPosTarget; // 0x20
		::RPG::MVector3 StartOffset; // 0x28
		::Il2CppArray<::RPG::GameCore::EntityMoveTrack*>* Tracks; // 0x38
		::RPG::GameCore::DynamicFloat* Speed; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETTRACKMOVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_31FF36CFC9611CDA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetTrackMove*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetTrackMove*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETTRACKMOVE_METHOD_3_31FF36CFC9611CDA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2EDB580E08743F56(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetTrackMove* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetTrackMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETTRACKMOVE_METHOD_3_2EDB580E08743F56_OFFSET))(a1, a2);
		}
	};
}

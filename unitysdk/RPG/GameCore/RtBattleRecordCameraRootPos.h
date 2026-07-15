#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RTBATTLERECORDCAMERAROOTPOS_METHOD_3_7C8E3494E0F5D598_OFFSET UNITYSDK_OFFSET(0x1BB88BF0)
#define RPG_GAMECORE_RTBATTLERECORDCAMERAROOTPOS_METHOD_3_B14D4A871359181A_OFFSET UNITYSDK_OFFSET(0x1BB88C90)
#define RPG_GAMECORE_RTBATTLERECORDCAMERAROOTPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB88C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleRecordCameraRootPos_TypeDefinitionIndex = 23242;

	class RtBattleRecordCameraRootPos : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean UseGridPos; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLERECORDCAMERAROOTPOS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7C8E3494E0F5D598(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleRecordCameraRootPos*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleRecordCameraRootPos*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLERECORDCAMERAROOTPOS_METHOD_3_7C8E3494E0F5D598_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B14D4A871359181A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleRecordCameraRootPos* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleRecordCameraRootPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLERECORDCAMERAROOTPOS_METHOD_3_B14D4A871359181A_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EWaitFaceToTaskFinishMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTITYFACETO_METHOD_3_5DBDC8DAC9FF3214_OFFSET UNITYSDK_OFFSET(0x1CDC7C10)
#define RPG_GAMECORE_ADVENTITYFACETO_METHOD_3_FD7CC3790F63D229_OFFSET UNITYSDK_OFFSET(0x1CDC7C90)
#define RPG_GAMECORE_ADVENTITYFACETO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC7C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEntityFaceTo_TypeDefinitionIndex = 20307;

	class AdvEntityFaceTo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean EnableSteer; // 0x28
		::System::Boolean EnableLookAt; // 0x29
		::System::String* LookAtPoint; // 0x30
		::System::Boolean SteerImmediately; // 0x38
		::System::Boolean FinishImmediately; // 0x39
		::RPG::GameCore::EWaitFaceToTaskFinishMode WaitFinishMode; // 0x3C
		::System::Boolean ForceToStandBy; // 0x40
		::System::Boolean TurnBackOnGraphEnd; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYFACETO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5DBDC8DAC9FF3214(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEntityFaceTo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEntityFaceTo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYFACETO_METHOD_3_5DBDC8DAC9FF3214_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FD7CC3790F63D229(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEntityFaceTo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEntityFaceTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYFACETO_METHOD_3_FD7CC3790F63D229_OFFSET))(a1, a2);
		}
	};
}

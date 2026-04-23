#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EWaitFaceToTaskFinishMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTITYFACETO_METHOD_3_204FF613057FA30A_OFFSET UNITYSDK_OFFSET(0x1864EED0)
#define RPG_GAMECORE_ADVENTITYFACETO_METHOD_3_FD7CC3790F63D229_OFFSET UNITYSDK_OFFSET(0x1864EF90)
#define RPG_GAMECORE_ADVENTITYFACETO__CTOR_OFFSET UNITYSDK_OFFSET(0x1864EF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEntityFaceTo_TypeDefinitionIndex = 19508;

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

		static ::System::Void Method_3_204FF613057FA30A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEntityFaceTo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEntityFaceTo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYFACETO_METHOD_3_204FF613057FA30A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FD7CC3790F63D229(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEntityFaceTo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEntityFaceTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYFACETO_METHOD_3_FD7CC3790F63D229_OFFSET))(a1, a2);
		}
	};
}

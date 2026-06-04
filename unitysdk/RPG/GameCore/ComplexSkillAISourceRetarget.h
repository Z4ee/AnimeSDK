#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AISourceRetargetType.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIListCombineType.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAISOURCERETARGET_METHOD_3_D75DB2ED5030EDF5_OFFSET UNITYSDK_OFFSET(0x1966E5C0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCERETARGET_METHOD_3_FD541A8F3F7D1424_OFFSET UNITYSDK_OFFSET(0x19670080)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCERETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1966E5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceRetarget_TypeDefinitionIndex = 14772;

	class ComplexSkillAISourceRetarget : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::RPG::GameCore::AISourceRetargetType Retarget; // 0x10
		::RPG::GameCore::TeamTypeMask TeamTypeMask; // 0x14
		::RPG::GameCore::ComplexSkillAISource* Evaluator; // 0x18
		::RPG::GameCore::ComplexSkillAIListCombineType ListCombineType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCERETARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FD541A8F3F7D1424(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceRetarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceRetarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCERETARGET_METHOD_3_FD541A8F3F7D1424_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D75DB2ED5030EDF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceRetarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceRetarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCERETARGET_METHOD_3_D75DB2ED5030EDF5_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEREMOVESKILL_METHOD_3_0261C3DE0E96E59B_OFFSET UNITYSDK_OFFSET(0x1BD20250)
#define RPG_GAMECORE_MARBLEREMOVESKILL_METHOD_3_2553FE71EAEC6085_OFFSET UNITYSDK_OFFSET(0x1BD202B0)
#define RPG_GAMECORE_MARBLEREMOVESKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD202A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleRemoveSkill_TypeDefinitionIndex = 16193;

	class MarbleRemoveSkill : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::UInt32 SkillId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEREMOVESKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0261C3DE0E96E59B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleRemoveSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleRemoveSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEREMOVESKILL_METHOD_3_0261C3DE0E96E59B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2553FE71EAEC6085(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleRemoveSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleRemoveSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEREMOVESKILL_METHOD_3_2553FE71EAEC6085_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEREMOVESKILL_METHOD_3_2553FE71EAEC6085_OFFSET UNITYSDK_OFFSET(0x18AA4FA0)
#define RPG_GAMECORE_MARBLEREMOVESKILL_METHOD_3_740AE8D9F5EA34D3_OFFSET UNITYSDK_OFFSET(0x18AA4EC0)
#define RPG_GAMECORE_MARBLEREMOVESKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x18AA4F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleRemoveSkill_TypeDefinitionIndex = 15957;

	class MarbleRemoveSkill : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::UInt32 SkillId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEREMOVESKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_740AE8D9F5EA34D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleRemoveSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleRemoveSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEREMOVESKILL_METHOD_3_740AE8D9F5EA34D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2553FE71EAEC6085(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleRemoveSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleRemoveSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEREMOVESKILL_METHOD_3_2553FE71EAEC6085_OFFSET))(a1, a2);
		}
	};
}

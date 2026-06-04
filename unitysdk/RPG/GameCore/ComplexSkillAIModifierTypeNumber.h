#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAIMODIFIERTYPENUMBER_METHOD_3_914BC893603734EB_OFFSET UNITYSDK_OFFSET(0x1966B620)
#define RPG_GAMECORE_COMPLEXSKILLAIMODIFIERTYPENUMBER_METHOD_3_B6977E2EB11E27AC_OFFSET UNITYSDK_OFFSET(0x1966B690)
#define RPG_GAMECORE_COMPLEXSKILLAIMODIFIERTYPENUMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1966B670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIModifierTypeNumber_TypeDefinitionIndex = 14782;

	class ComplexSkillAIModifierTypeNumber : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::RPG::GameCore::EnumStatusType ModifierType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMODIFIERTYPENUMBER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_914BC893603734EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIModifierTypeNumber*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIModifierTypeNumber*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMODIFIERTYPENUMBER_METHOD_3_914BC893603734EB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B6977E2EB11E27AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIModifierTypeNumber* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIModifierTypeNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMODIFIERTYPENUMBER_METHOD_3_B6977E2EB11E27AC_OFFSET))(a1, a2);
		}
	};
}

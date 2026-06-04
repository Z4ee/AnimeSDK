#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWULTRASKILLALTERNATIVE_METHOD_3_1E8DBE193337542F_OFFSET UNITYSDK_OFFSET(0x19C86D80)
#define RPG_GAMECORE_SHOWULTRASKILLALTERNATIVE_METHOD_3_C82E2027BEB3D5BE_OFFSET UNITYSDK_OFFSET(0x19C86D00)
#define RPG_GAMECORE_SHOWULTRASKILLALTERNATIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C86D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowUltraSkillAlternative_TypeDefinitionIndex = 21673;

	class ShowUltraSkillAlternative : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWULTRASKILLALTERNATIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C82E2027BEB3D5BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowUltraSkillAlternative*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowUltraSkillAlternative*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWULTRASKILLALTERNATIVE_METHOD_3_C82E2027BEB3D5BE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1E8DBE193337542F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowUltraSkillAlternative* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowUltraSkillAlternative*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWULTRASKILLALTERNATIVE_METHOD_3_1E8DBE193337542F_OFFSET))(a1, a2);
		}
	};
}

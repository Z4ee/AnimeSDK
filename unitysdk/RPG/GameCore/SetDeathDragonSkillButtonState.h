#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDEATHDRAGONSKILLBUTTONSTATE_METHOD_3_0AF10FAF6332C4DE_OFFSET UNITYSDK_OFFSET(0x1D4EA7F0)
#define RPG_GAMECORE_SETDEATHDRAGONSKILLBUTTONSTATE_METHOD_3_4AF13B1A19BDA67D_OFFSET UNITYSDK_OFFSET(0x1D4EA7A0)
#define RPG_GAMECORE_SETDEATHDRAGONSKILLBUTTONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4EA7E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDeathDragonSkillButtonState_TypeDefinitionIndex = 22594;

	class SetDeathDragonSkillButtonState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 Level; // 0x18
		::RPG::GameCore::BoolEx ShowBoomEffect; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDEATHDRAGONSKILLBUTTONSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4AF13B1A19BDA67D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDeathDragonSkillButtonState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDeathDragonSkillButtonState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDEATHDRAGONSKILLBUTTONSTATE_METHOD_3_4AF13B1A19BDA67D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0AF10FAF6332C4DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDeathDragonSkillButtonState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDeathDragonSkillButtonState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDEATHDRAGONSKILLBUTTONSTATE_METHOD_3_0AF10FAF6332C4DE_OFFSET))(a1, a2);
		}
	};
}

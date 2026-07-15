#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterEnhancedStateType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCHARACTERENHANCEDSTATE_METHOD_3_762E59E72FF0B6C7_OFFSET UNITYSDK_OFFSET(0x1C2D7D50)
#define RPG_GAMECORE_SETCHARACTERENHANCEDSTATE_METHOD_3_8CF3D1FF02D2CF78_OFFSET UNITYSDK_OFFSET(0x1C2D7DF0)
#define RPG_GAMECORE_SETCHARACTERENHANCEDSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2D7DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterEnhancedState_TypeDefinitionIndex = 22366;

	class SetCharacterEnhancedState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::CharacterEnhancedStateType Type; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERENHANCEDSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_762E59E72FF0B6C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterEnhancedState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterEnhancedState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERENHANCEDSTATE_METHOD_3_762E59E72FF0B6C7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8CF3D1FF02D2CF78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterEnhancedState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterEnhancedState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERENHANCEDSTATE_METHOD_3_8CF3D1FF02D2CF78_OFFSET))(a1, a2);
		}
	};
}

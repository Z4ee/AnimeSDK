#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETCHARACTERVISIBLE_METHOD_3_579501D15629D45E_OFFSET UNITYSDK_OFFSET(0x18E11CB0)
#define RPG_GAMECORE_SETCHARACTERVISIBLE_METHOD_3_A381E1D33CA9B285_OFFSET UNITYSDK_OFFSET(0x18E11D30)
#define RPG_GAMECORE_SETCHARACTERVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E11D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterVisible_TypeDefinitionIndex = 19572;

	class SetCharacterVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean Visible; // 0x28
		::System::Boolean MuteColliderWhenInvisible; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERVISIBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_579501D15629D45E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterVisible*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterVisible*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERVISIBLE_METHOD_3_579501D15629D45E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A381E1D33CA9B285(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterVisible* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERVISIBLE_METHOD_3_A381E1D33CA9B285_OFFSET))(a1, a2);
		}
	};
}

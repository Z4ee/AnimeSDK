#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERHEADRESETLOOKATSPEED_METHOD_3_43259C2829057634_OFFSET UNITYSDK_OFFSET(0x1B724430)
#define RPG_GAMECORE_CHARACTERHEADRESETLOOKATSPEED_METHOD_3_FDE47A0733DFEC4F_OFFSET UNITYSDK_OFFSET(0x1B724470)
#define RPG_GAMECORE_CHARACTERHEADRESETLOOKATSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x1B724460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterHeadResetLookAtSpeed_TypeDefinitionIndex = 20082;

	class CharacterHeadResetLookAtSpeed : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHEADRESETLOOKATSPEED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_43259C2829057634(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterHeadResetLookAtSpeed*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterHeadResetLookAtSpeed*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHEADRESETLOOKATSPEED_METHOD_3_43259C2829057634_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FDE47A0733DFEC4F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterHeadResetLookAtSpeed* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterHeadResetLookAtSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHEADRESETLOOKATSPEED_METHOD_3_FDE47A0733DFEC4F_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETMECHANISMBARSTATE_METHOD_3_1FB655EBD3C81A5C_OFFSET UNITYSDK_OFFSET(0x176D4F00)
#define RPG_GAMECORE_SETMECHANISMBARSTATE_METHOD_3_3F66443C19DDC5C3_OFFSET UNITYSDK_OFFSET(0x176D4F80)
#define RPG_GAMECORE_SETMECHANISMBARSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x176D4F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMechanismBarState_TypeDefinitionIndex = 18822;

	class SetMechanismBarState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ID; // 0x18
		::System::Boolean Active; // 0x1C
		::System::UInt32 Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMECHANISMBARSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1FB655EBD3C81A5C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMechanismBarState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMechanismBarState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMECHANISMBARSTATE_METHOD_3_1FB655EBD3C81A5C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3F66443C19DDC5C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMechanismBarState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMechanismBarState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMECHANISMBARSTATE_METHOD_3_3F66443C19DDC5C3_OFFSET))(a1, a2);
		}
	};
}

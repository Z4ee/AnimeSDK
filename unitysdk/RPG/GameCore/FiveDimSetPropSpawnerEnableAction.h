#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETPROPSPAWNERENABLEACTION_METHOD_3_505FDDF2550B811A_OFFSET UNITYSDK_OFFSET(0x19755A70)
#define RPG_GAMECORE_FIVEDIMSETPROPSPAWNERENABLEACTION_METHOD_3_B641117A633C7C23_OFFSET UNITYSDK_OFFSET(0x19755A00)
#define RPG_GAMECORE_FIVEDIMSETPROPSPAWNERENABLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19755A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetPropSpawnerEnableAction_TypeDefinitionIndex = 17766;

	class FiveDimSetPropSpawnerEnableAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enabled; // 0x10
		::System::Boolean DontDestroyMinion; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPROPSPAWNERENABLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B641117A633C7C23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetPropSpawnerEnableAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetPropSpawnerEnableAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPROPSPAWNERENABLEACTION_METHOD_3_B641117A633C7C23_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_505FDDF2550B811A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetPropSpawnerEnableAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetPropSpawnerEnableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPROPSPAWNERENABLEACTION_METHOD_3_505FDDF2550B811A_OFFSET))(a1, a2);
		}
	};
}

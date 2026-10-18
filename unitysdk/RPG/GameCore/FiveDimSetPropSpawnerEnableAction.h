#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETPROPSPAWNERENABLEACTION_METHOD_4_6D4C8B84FAAAF15C_OFFSET UNITYSDK_OFFSET(0x1D6DA920)
#define RPG_GAMECORE_FIVEDIMSETPROPSPAWNERENABLEACTION_METHOD_4_F91D7DAF08D8CA17_OFFSET UNITYSDK_OFFSET(0x1D6DA960)
#define RPG_GAMECORE_FIVEDIMSETPROPSPAWNERENABLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DA950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetPropSpawnerEnableAction_TypeDefinitionIndex = 18672;

	class FiveDimSetPropSpawnerEnableAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enabled; // 0x10
		::System::Boolean DontDestroyMinion; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPROPSPAWNERENABLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6D4C8B84FAAAF15C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetPropSpawnerEnableAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetPropSpawnerEnableAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPROPSPAWNERENABLEACTION_METHOD_4_6D4C8B84FAAAF15C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F91D7DAF08D8CA17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetPropSpawnerEnableAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetPropSpawnerEnableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPROPSPAWNERENABLEACTION_METHOD_4_F91D7DAF08D8CA17_OFFSET))(a1, a2);
		}
	};
}

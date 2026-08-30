#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITDIALOGUEFINISH_METHOD_3_32DAE2C3099244B1_OFFSET UNITYSDK_OFFSET(0x1D6A0FB0)
#define RPG_GAMECORE_WAITDIALOGUEFINISH_METHOD_3_8CF24C15668A67BA_OFFSET UNITYSDK_OFFSET(0x1D6A1000)
#define RPG_GAMECORE_WAITDIALOGUEFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A0FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitDialogueFinish_TypeDefinitionIndex = 20607;

	class WaitDialogueFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsOwnerEntity; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_32DAE2C3099244B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitDialogueFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitDialogueFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEFINISH_METHOD_3_32DAE2C3099244B1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8CF24C15668A67BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitDialogueFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitDialogueFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEFINISH_METHOD_3_8CF24C15668A67BA_OFFSET))(a1, a2);
		}
	};
}

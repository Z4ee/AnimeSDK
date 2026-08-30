#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITROGUEFINISHDIALOGUE_METHOD_3_037A20EB4FA1DF7F_OFFSET UNITYSDK_OFFSET(0x1DEBFF30)
#define RPG_GAMECORE_WAITROGUEFINISHDIALOGUE_METHOD_3_EA3D5794E0C6AAFB_OFFSET UNITYSDK_OFFSET(0x1DEBFEE0)
#define RPG_GAMECORE_WAITROGUEFINISHDIALOGUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBFF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRogueFinishDialogue_TypeDefinitionIndex = 20251;

	class WaitRogueFinishDialogue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEFINISHDIALOGUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EA3D5794E0C6AAFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueFinishDialogue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueFinishDialogue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEFINISHDIALOGUE_METHOD_3_EA3D5794E0C6AAFB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_037A20EB4FA1DF7F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueFinishDialogue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueFinishDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEFINISHDIALOGUE_METHOD_3_037A20EB4FA1DF7F_OFFSET))(a1, a2);
		}
	};
}

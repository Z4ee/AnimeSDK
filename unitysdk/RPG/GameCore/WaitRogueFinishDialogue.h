#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITROGUEFINISHDIALOGUE_METHOD_3_037A20EB4FA1DF7F_OFFSET UNITYSDK_OFFSET(0x17902B80)
#define RPG_GAMECORE_WAITROGUEFINISHDIALOGUE_METHOD_3_64AC53AD089992EF_OFFSET UNITYSDK_OFFSET(0x17902AF0)
#define RPG_GAMECORE_WAITROGUEFINISHDIALOGUE__CTOR_OFFSET UNITYSDK_OFFSET(0x17902B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRogueFinishDialogue_TypeDefinitionIndex = 18787;

	class WaitRogueFinishDialogue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEFINISHDIALOGUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_64AC53AD089992EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueFinishDialogue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueFinishDialogue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEFINISHDIALOGUE_METHOD_3_64AC53AD089992EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_037A20EB4FA1DF7F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueFinishDialogue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueFinishDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEFINISHDIALOGUE_METHOD_3_037A20EB4FA1DF7F_OFFSET))(a1, a2);
		}
	};
}

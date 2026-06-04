#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETASROGUEDIALOGUE_METHOD_3_908A9821CFB8550B_OFFSET UNITYSDK_OFFSET(0x19C28330)
#define RPG_GAMECORE_SETASROGUEDIALOGUE_METHOD_3_BF620B0AE7EB747F_OFFSET UNITYSDK_OFFSET(0x19C28440)
#define RPG_GAMECORE_SETASROGUEDIALOGUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C28410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAsRogueDialogue_TypeDefinitionIndex = 19952;

	class SetAsRogueDialogue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETASROGUEDIALOGUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_908A9821CFB8550B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAsRogueDialogue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAsRogueDialogue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETASROGUEDIALOGUE_METHOD_3_908A9821CFB8550B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BF620B0AE7EB747F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAsRogueDialogue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAsRogueDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETASROGUEDIALOGUE_METHOD_3_BF620B0AE7EB747F_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETUPPAMAIDIALOGUE_METHOD_3_14421D5CABE283AA_OFFSET UNITYSDK_OFFSET(0x1E094CF0)
#define RPG_GAMECORE_SETUPPAMAIDIALOGUE_METHOD_3_2266F0BC0893EE47_OFFSET UNITYSDK_OFFSET(0x1E094C20)
#define RPG_GAMECORE_SETUPPAMAIDIALOGUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E094CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetUpPamAIDialogue_TypeDefinitionIndex = 20862;

	class SetUpPamAIDialogue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPPAMAIDIALOGUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2266F0BC0893EE47(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetUpPamAIDialogue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetUpPamAIDialogue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPPAMAIDIALOGUE_METHOD_3_2266F0BC0893EE47_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_14421D5CABE283AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetUpPamAIDialogue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetUpPamAIDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPPAMAIDIALOGUE_METHOD_3_14421D5CABE283AA_OFFSET))(a1, a2);
		}
	};
}

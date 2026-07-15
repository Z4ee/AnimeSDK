#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOSERUBBINGUI_METHOD_3_7DAA4EBDE9A27CDA_OFFSET UNITYSDK_OFFSET(0x1BC1EE10)
#define RPG_GAMECORE_CLOSERUBBINGUI_METHOD_3_8144917EAC27C137_OFFSET UNITYSDK_OFFSET(0x1BC1ED40)
#define RPG_GAMECORE_CLOSERUBBINGUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC1EE00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CloseRubbingUI_TypeDefinitionIndex = 21364;

	class CloseRubbingUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSERUBBINGUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8144917EAC27C137(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CloseRubbingUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CloseRubbingUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSERUBBINGUI_METHOD_3_8144917EAC27C137_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7DAA4EBDE9A27CDA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CloseRubbingUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CloseRubbingUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSERUBBINGUI_METHOD_3_7DAA4EBDE9A27CDA_OFFSET))(a1, a2);
		}
	};
}

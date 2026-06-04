#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWRUBBINGUI_METHOD_3_111172B90AE9F92D_OFFSET UNITYSDK_OFFSET(0x19C82700)
#define RPG_GAMECORE_SHOWRUBBINGUI_METHOD_3_9302574D5FFE5BB9_OFFSET UNITYSDK_OFFSET(0x19C825F0)
#define RPG_GAMECORE_SHOWRUBBINGUI__CTOR_OFFSET UNITYSDK_OFFSET(0x19C826D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowRubbingUI_TypeDefinitionIndex = 20948;

	class ShowRubbingUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWRUBBINGUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9302574D5FFE5BB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowRubbingUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowRubbingUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWRUBBINGUI_METHOD_3_9302574D5FFE5BB9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_111172B90AE9F92D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowRubbingUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowRubbingUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWRUBBINGUI_METHOD_3_111172B90AE9F92D_OFFSET))(a1, a2);
		}
	};
}

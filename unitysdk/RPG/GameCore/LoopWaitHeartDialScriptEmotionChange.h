#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPWAITHEARTDIALSCRIPTEMOTIONCHANGE_METHOD_3_2C6081F99449DE82_OFFSET UNITYSDK_OFFSET(0x18A7E9E0)
#define RPG_GAMECORE_LOOPWAITHEARTDIALSCRIPTEMOTIONCHANGE_METHOD_3_88A653BC4551A0C2_OFFSET UNITYSDK_OFFSET(0x18A7E950)
#define RPG_GAMECORE_LOOPWAITHEARTDIALSCRIPTEMOTIONCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A7E9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitHeartDialScriptEmotionChange_TypeDefinitionIndex = 20192;

	class LoopWaitHeartDialScriptEmotionChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITHEARTDIALSCRIPTEMOTIONCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_88A653BC4551A0C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitHeartDialScriptEmotionChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitHeartDialScriptEmotionChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITHEARTDIALSCRIPTEMOTIONCHANGE_METHOD_3_88A653BC4551A0C2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2C6081F99449DE82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitHeartDialScriptEmotionChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitHeartDialScriptEmotionChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITHEARTDIALSCRIPTEMOTIONCHANGE_METHOD_3_2C6081F99449DE82_OFFSET))(a1, a2);
		}
	};
}

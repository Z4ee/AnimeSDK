#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITHEARTDIALSCRIPTEMOTIONCHANGE_METHOD_3_6256947F0D3C78F4_OFFSET UNITYSDK_OFFSET(0x1DEBA590)
#define RPG_GAMECORE_WAITHEARTDIALSCRIPTEMOTIONCHANGE_METHOD_3_8102F7E378FCC978_OFFSET UNITYSDK_OFFSET(0x1DEBA540)
#define RPG_GAMECORE_WAITHEARTDIALSCRIPTEMOTIONCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBA580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitHeartDialScriptEmotionChange_TypeDefinitionIndex = 20971;

	class WaitHeartDialScriptEmotionChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITHEARTDIALSCRIPTEMOTIONCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8102F7E378FCC978(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitHeartDialScriptEmotionChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitHeartDialScriptEmotionChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITHEARTDIALSCRIPTEMOTIONCHANGE_METHOD_3_8102F7E378FCC978_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6256947F0D3C78F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitHeartDialScriptEmotionChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitHeartDialScriptEmotionChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITHEARTDIALSCRIPTEMOTIONCHANGE_METHOD_3_6256947F0D3C78F4_OFFSET))(a1, a2);
		}
	};
}

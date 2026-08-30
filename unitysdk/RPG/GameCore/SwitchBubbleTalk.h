#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWITCHBUBBLETALK_METHOD_3_9039C7676C21521A_OFFSET UNITYSDK_OFFSET(0x1D588B70)
#define RPG_GAMECORE_SWITCHBUBBLETALK_METHOD_3_CB47E451C927CC91_OFFSET UNITYSDK_OFFSET(0x1D588B30)
#define RPG_GAMECORE_SWITCHBUBBLETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D588B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchBubbleTalk_TypeDefinitionIndex = 22046;

	class SwitchBubbleTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHBUBBLETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CB47E451C927CC91(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchBubbleTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchBubbleTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHBUBBLETALK_METHOD_3_CB47E451C927CC91_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9039C7676C21521A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchBubbleTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHBUBBLETALK_METHOD_3_9039C7676C21521A_OFFSET))(a1, a2);
		}
	};
}

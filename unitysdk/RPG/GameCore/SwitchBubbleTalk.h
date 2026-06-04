#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWITCHBUBBLETALK_METHOD_3_9039C7676C21521A_OFFSET UNITYSDK_OFFSET(0x19CD7EC0)
#define RPG_GAMECORE_SWITCHBUBBLETALK_METHOD_3_F61AFAEF7A524D23_OFFSET UNITYSDK_OFFSET(0x19CD7E40)
#define RPG_GAMECORE_SWITCHBUBBLETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x19CD7E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchBubbleTalk_TypeDefinitionIndex = 21069;

	class SwitchBubbleTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHBUBBLETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F61AFAEF7A524D23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchBubbleTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchBubbleTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHBUBBLETALK_METHOD_3_F61AFAEF7A524D23_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9039C7676C21521A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchBubbleTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHBUBBLETALK_METHOD_3_9039C7676C21521A_OFFSET))(a1, a2);
		}
	};
}

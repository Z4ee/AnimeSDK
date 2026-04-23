#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_UNLOADBACKGROUNDPLAYER_METHOD_3_2800F9CD013DB176_OFFSET UNITYSDK_OFFSET(0x190E53A0)
#define RPG_GAMECORE_UNLOADBACKGROUNDPLAYER_METHOD_3_F0D34E654A8B0777_OFFSET UNITYSDK_OFFSET(0x190E5310)
#define RPG_GAMECORE_UNLOADBACKGROUNDPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x190E5370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnloadBackgroundPlayer_TypeDefinitionIndex = 19159;

	class UnloadBackgroundPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 UnloadCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADBACKGROUNDPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F0D34E654A8B0777(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnloadBackgroundPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnloadBackgroundPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADBACKGROUNDPLAYER_METHOD_3_F0D34E654A8B0777_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2800F9CD013DB176(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnloadBackgroundPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnloadBackgroundPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADBACKGROUNDPLAYER_METHOD_3_2800F9CD013DB176_OFFSET))(a1, a2);
		}
	};
}

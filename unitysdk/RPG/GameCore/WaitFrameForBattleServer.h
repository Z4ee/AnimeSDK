#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITFRAMEFORBATTLESERVER_METHOD_3_BCF9AB2A0F1C68B4_OFFSET UNITYSDK_OFFSET(0x1B8A5CD0)
#define RPG_GAMECORE_WAITFRAMEFORBATTLESERVER_METHOD_3_F0602D528E7B9CE7_OFFSET UNITYSDK_OFFSET(0x1B8A5C80)
#define RPG_GAMECORE_WAITFRAMEFORBATTLESERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A5CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitFrameForBattleServer_TypeDefinitionIndex = 22934;

	class WaitFrameForBattleServer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 WaitFrameCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFRAMEFORBATTLESERVER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F0602D528E7B9CE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFrameForBattleServer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFrameForBattleServer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFRAMEFORBATTLESERVER_METHOD_3_F0602D528E7B9CE7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BCF9AB2A0F1C68B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFrameForBattleServer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFrameForBattleServer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFRAMEFORBATTLESERVER_METHOD_3_BCF9AB2A0F1C68B4_OFFSET))(a1, a2);
		}
	};
}

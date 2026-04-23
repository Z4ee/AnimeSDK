#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITFRAMEFORBATTLESERVER_METHOD_3_BCF9AB2A0F1C68B4_OFFSET UNITYSDK_OFFSET(0x190FEB80)
#define RPG_GAMECORE_WAITFRAMEFORBATTLESERVER_METHOD_3_FC955290DEDC8135_OFFSET UNITYSDK_OFFSET(0x190FEAF0)
#define RPG_GAMECORE_WAITFRAMEFORBATTLESERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x190FEB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitFrameForBattleServer_TypeDefinitionIndex = 22777;

	class WaitFrameForBattleServer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 WaitFrameCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFRAMEFORBATTLESERVER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FC955290DEDC8135(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFrameForBattleServer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFrameForBattleServer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFRAMEFORBATTLESERVER_METHOD_3_FC955290DEDC8135_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BCF9AB2A0F1C68B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFrameForBattleServer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFrameForBattleServer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFRAMEFORBATTLESERVER_METHOD_3_BCF9AB2A0F1C68B4_OFFSET))(a1, a2);
		}
	};
}

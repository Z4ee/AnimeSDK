#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STARTMUSICRHYTHM_METHOD_3_8B615E765BE4D788_OFFSET UNITYSDK_OFFSET(0x19CB85C0)
#define RPG_GAMECORE_STARTMUSICRHYTHM_METHOD_3_BD72BE5125A02360_OFFSET UNITYSDK_OFFSET(0x19CB8640)
#define RPG_GAMECORE_STARTMUSICRHYTHM__CTOR_OFFSET UNITYSDK_OFFSET(0x19CB8610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartMusicRhythm_TypeDefinitionIndex = 20831;

	class StartMusicRhythm : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnShowUi; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TutorialFlow; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FormalFlow; // 0x28
		::System::UInt32 LevelId; // 0x30
		::System::Boolean ShowSkipBtn; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8B615E765BE4D788(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartMusicRhythm*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartMusicRhythm*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHM_METHOD_3_8B615E765BE4D788_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BD72BE5125A02360(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartMusicRhythm* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartMusicRhythm*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHM_METHOD_3_BD72BE5125A02360_OFFSET))(a1, a2);
		}
	};
}

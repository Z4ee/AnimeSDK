#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETMUSICRHYTHMCAMERA_METHOD_3_354DC175E0290D7F_OFFSET UNITYSDK_OFFSET(0x19C59590)
#define RPG_GAMECORE_SETMUSICRHYTHMCAMERA_METHOD_3_D7B1F896DEBCF539_OFFSET UNITYSDK_OFFSET(0x19C59510)
#define RPG_GAMECORE_SETMUSICRHYTHMCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x19C59560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMusicRhythmCamera_TypeDefinitionIndex = 20833;

	class SetMusicRhythmCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ForNormal; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ForPad; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUSICRHYTHMCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D7B1F896DEBCF539(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMusicRhythmCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMusicRhythmCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUSICRHYTHMCAMERA_METHOD_3_D7B1F896DEBCF539_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_354DC175E0290D7F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMusicRhythmCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMusicRhythmCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUSICRHYTHMCAMERA_METHOD_3_354DC175E0290D7F_OFFSET))(a1, a2);
		}
	};
}

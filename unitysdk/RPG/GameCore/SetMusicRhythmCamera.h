#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETMUSICRHYTHMCAMERA_METHOD_3_38F54F1A339797BD_OFFSET UNITYSDK_OFFSET(0x176D9310)
#define RPG_GAMECORE_SETMUSICRHYTHMCAMERA_METHOD_3_DD6A9962528EF4DB_OFFSET UNITYSDK_OFFSET(0x176D9290)
#define RPG_GAMECORE_SETMUSICRHYTHMCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x176D92E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMusicRhythmCamera_TypeDefinitionIndex = 20238;

	class SetMusicRhythmCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ForNormal; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ForPad; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUSICRHYTHMCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DD6A9962528EF4DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMusicRhythmCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMusicRhythmCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUSICRHYTHMCAMERA_METHOD_3_DD6A9962528EF4DB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_38F54F1A339797BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMusicRhythmCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMusicRhythmCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUSICRHYTHMCAMERA_METHOD_3_38F54F1A339797BD_OFFSET))(a1, a2);
		}
	};
}

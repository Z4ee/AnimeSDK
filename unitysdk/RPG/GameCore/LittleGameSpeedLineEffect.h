#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpeedLineEffectMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMESPEEDLINEEFFECT_METHOD_3_5E80ABABA492070E_OFFSET UNITYSDK_OFFSET(0x1BCC5010)
#define RPG_GAMECORE_LITTLEGAMESPEEDLINEEFFECT_METHOD_3_EAF5D0BAFFBD5171_OFFSET UNITYSDK_OFFSET(0x1BCC50C0)
#define RPG_GAMECORE_LITTLEGAMESPEEDLINEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC5080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameSpeedLineEffect_TypeDefinitionIndex = 20691;

	class LittleGameSpeedLineEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean HiendOnly; // 0x18
		::RPG::GameCore::SpeedLineEffectMode Mode; // 0x1C
		::System::Boolean Active; // 0x20
		::System::Single Speed; // 0x24
		::System::Boolean UseTwoTone; // 0x28
		::System::Single WhitePercent; // 0x2C
		::System::Single Divide; // 0x30
		::System::Single Offset; // 0x34
		::System::Single Start; // 0x38
		::System::Single End; // 0x3C
		::System::Single Brightness; // 0x40
		::System::Single Density; // 0x44
		::System::Single Rotation; // 0x48
		::System::Single PosX; // 0x4C
		::System::Single PosY; // 0x50
		::System::String* SpeedlineSeedPath; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESPEEDLINEEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5E80ABABA492070E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameSpeedLineEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameSpeedLineEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESPEEDLINEEFFECT_METHOD_3_5E80ABABA492070E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EAF5D0BAFFBD5171(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameSpeedLineEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameSpeedLineEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESPEEDLINEEFFECT_METHOD_3_EAF5D0BAFFBD5171_OFFSET))(a1, a2);
		}
	};
}

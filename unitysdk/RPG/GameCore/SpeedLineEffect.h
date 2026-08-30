#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpeedLineEffectMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SPEEDLINEEFFECT_METHOD_3_36EB6499B889FE37_OFFSET UNITYSDK_OFFSET(0x1D0B6BC0)
#define RPG_GAMECORE_SPEEDLINEEFFECT_METHOD_3_8D8C99BB0A24037B_OFFSET UNITYSDK_OFFSET(0x1D0B6CE0)
#define RPG_GAMECORE_SPEEDLINEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0B6C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpeedLineEffect_TypeDefinitionIndex = 20025;

	class SpeedLineEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean HiendOnly; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::SpeedLineEffectMode Mode; // 0x28
		::System::Boolean Active; // 0x2C
		::System::Single Speed; // 0x30
		::System::Boolean UseTwoTone; // 0x34
		::System::Single WhitePercent; // 0x38
		::System::Single Divide; // 0x3C
		::System::Single Offset; // 0x40
		::System::Single Start; // 0x44
		::System::Single End; // 0x48
		::System::Single Brightness; // 0x4C
		::System::Single Density; // 0x50
		::System::Single Rotation; // 0x54
		::System::Single PosX; // 0x58
		::System::Single PosY; // 0x5C
		::System::String* SpeedlineSeedPath; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPEEDLINEEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_36EB6499B889FE37(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpeedLineEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpeedLineEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPEEDLINEEFFECT_METHOD_3_36EB6499B889FE37_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8D8C99BB0A24037B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpeedLineEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpeedLineEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPEEDLINEEFFECT_METHOD_3_8D8C99BB0A24037B_OFFSET))(a1, a2);
		}
	};
}

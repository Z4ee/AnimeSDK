#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMERADIALBLUREFFECT_METHOD_3_46F11802D43930B8_OFFSET UNITYSDK_OFFSET(0x1BCC45F0)
#define RPG_GAMECORE_LITTLEGAMERADIALBLUREFFECT_METHOD_3_EFB99690947A30F4_OFFSET UNITYSDK_OFFSET(0x1BCC4560)
#define RPG_GAMECORE_LITTLEGAMERADIALBLUREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC45C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameRadialBlurEffect_TypeDefinitionIndex = 20690;

	class LittleGameRadialBlurEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean HiendOnly; // 0x18
		::System::Boolean Active; // 0x19
		::System::Single Duration; // 0x1C
		::System::Single BlurX; // 0x20
		::System::Single BlurY; // 0x24
		::System::Single BlurRadius; // 0x28
		::System::Int32 Iteration; // 0x2C
		::System::Single BlurStart; // 0x30
		::System::Single BlurFeather; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMERADIALBLUREFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EFB99690947A30F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameRadialBlurEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameRadialBlurEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMERADIALBLUREFFECT_METHOD_3_EFB99690947A30F4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_46F11802D43930B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameRadialBlurEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameRadialBlurEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMERADIALBLUREFFECT_METHOD_3_46F11802D43930B8_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATIONPRELOADCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x77D250)
#define MOLEMOLE_CONFIG_ANIMATIONPRELOADCONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x77D1C0)
#define MOLEMOLE_CONFIG_ANIMATIONPRELOADCONFIG_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0x77D1B0)
#define MOLEMOLE_CONFIG_ANIMATIONPRELOADCONFIG_METHOD_2_B9F93B03B69BDD87_OFFSET UNITYSDK_OFFSET(0x77D2E0)
#define MOLEMOLE_CONFIG_ANIMATIONPRELOADCONFIG_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x77D2B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimationPreloadConfig_TypeDefinitionIndex = 74537;

	struct alignas(8) AnimationPreloadConfig
	{
		::System::String* Name; // 0x10
		::System::String* AnimationClipPath; // 0x18

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATIONPRELOADCONFIG_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}

		/*
		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATIONPRELOADCONFIG_FROMFLX_OFFSET))(this, a1);
		}
		*/

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATIONPRELOADCONFIG_FROMBINARY_OFFSET))(this, a1, a2);
		}

		/*
		::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATIONPRELOADCONFIG_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Method_2_B9F93B03B69BDD87(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATIONPRELOADCONFIG_METHOD_2_B9F93B03B69BDD87_OFFSET))(this, a1, a2);
		}
	};
}

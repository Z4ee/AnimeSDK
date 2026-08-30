#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ENPCE07ANIMCLIPOVERRIDECONFIG_METHOD_2_7D4E5E5876D55247_OFFSET UNITYSDK_OFFSET(0x1DB20CA0)
#define RPG_GAMECORE_ENPCE07ANIMCLIPOVERRIDECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB20DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ENpcE07AnimClipOverrideConfig_TypeDefinitionIndex = 16348;

	class ENpcE07AnimClipOverrideConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* OriginClipName; // 0x10
		::System::String* OverrideClipPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENPCE07ANIMCLIPOVERRIDECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7D4E5E5876D55247(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ENpcE07AnimClipOverrideConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ENpcE07AnimClipOverrideConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENPCE07ANIMCLIPOVERRIDECONFIG_METHOD_2_7D4E5E5876D55247_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCEBGEFFECTFRAMECONFIG_METHOD_2_D97B4160686F457A_OFFSET UNITYSDK_OFFSET(0x1D41CBE0)
#define RPG_GAMECORE_PERFORMANCEBGEFFECTFRAMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D41CD20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceBgEffectFrameConfig_TypeDefinitionIndex = 18823;

	class PerformanceBgEffectFrameConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::String* Comment; // 0x18
		::System::UInt32 PrefabLoadMetaIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEBGEFFECTFRAMECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D97B4160686F457A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceBgEffectFrameConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceBgEffectFrameConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEBGEFFECTFRAMECONFIG_METHOD_2_D97B4160686F457A_OFFSET))(a1, a2);
		}
	};
}

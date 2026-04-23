#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMEVILSMILESTATEEVENTCONFIG_METHOD_2_7C045AE181E256B0_OFFSET UNITYSDK_OFFSET(0x18900E50)
#define RPG_GAMECORE_FIVEDIMEVILSMILESTATEEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18900F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEvilSmileStateEventConfig_TypeDefinitionIndex = 15818;

	class FiveDimEvilSmileStateEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single EventTime; // 0x10
		::System::String* EventName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILESTATEEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7C045AE181E256B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEvilSmileStateEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEvilSmileStateEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILESTATEEVENTCONFIG_METHOD_2_7C045AE181E256B0_OFFSET))(a1, a2);
		}
	};
}

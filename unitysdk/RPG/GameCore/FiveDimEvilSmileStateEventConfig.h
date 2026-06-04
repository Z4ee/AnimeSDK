#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMEVILSMILESTATEEVENTCONFIG_METHOD_2_9A92DC066F89ECF7_OFFSET UNITYSDK_OFFSET(0x1973C900)
#define RPG_GAMECORE_FIVEDIMEVILSMILESTATEEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1973CA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEvilSmileStateEventConfig_TypeDefinitionIndex = 15873;

	class FiveDimEvilSmileStateEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single EventTime; // 0x10
		::System::String* EventName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILESTATEEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9A92DC066F89ECF7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEvilSmileStateEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEvilSmileStateEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILESTATEEVENTCONFIG_METHOD_2_9A92DC066F89ECF7_OFFSET))(a1, a2);
		}
	};
}

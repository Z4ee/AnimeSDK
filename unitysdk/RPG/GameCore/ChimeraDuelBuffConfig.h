#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelBuffType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }
namespace RPG::GameCore { class ChimeraDuelBuffDisplayConfig; }
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELBUFFCONFIG_METHOD_2_C30DE13E6FA324E0_OFFSET UNITYSDK_OFFSET(0x1CFC0620)
#define RPG_GAMECORE_CHIMERADUELBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC07D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelBuffConfig_TypeDefinitionIndex = 15831;

	class ChimeraDuelBuffConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraDuelBuffType BuffType; // 0x10
		::RPG::GameCore::ChimeraDuelEffectConfig* EffectConfig; // 0x18
		::RPG::GameCore::BaseChimeraDuelValueGetter* DurationValueGetter; // 0x20
		::System::String* UniqueName; // 0x28
		::RPG::GameCore::ChimeraDuelBuffDisplayConfig* Display; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C30DE13E6FA324E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBUFFCONFIG_METHOD_2_C30DE13E6FA324E0_OFFSET))(a1, a2);
		}
	};
}

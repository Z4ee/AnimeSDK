#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RtCharacterVisual; }

#define RPG_GAMECORE_RTCHARACTERFLAGVISUAL_METHOD_2_5B13D1AF976017D0_OFFSET UNITYSDK_OFFSET(0x18DCBB10)
#define RPG_GAMECORE_RTCHARACTERFLAGVISUAL__CTOR_OFFSET UNITYSDK_OFFSET(0x18DCBC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtCharacterFlagVisual_TypeDefinitionIndex = 23086;

	class RtCharacterFlagVisual : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* Flags; // 0x10
		::RPG::GameCore::RtCharacterVisual* Visual; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCHARACTERFLAGVISUAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5B13D1AF976017D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtCharacterFlagVisual*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtCharacterFlagVisual*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCHARACTERFLAGVISUAL_METHOD_2_5B13D1AF976017D0_OFFSET))(a1, a2);
		}
	};
}

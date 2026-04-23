#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TriggerEffect.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERSDFTEXTEFFECT_METHOD_4_9421631F6D1AAFE9_OFFSET UNITYSDK_OFFSET(0x190C2FC0)
#define RPG_GAMECORE_TRIGGERSDFTEXTEFFECT_METHOD_4_AC06E073EA27CF75_OFFSET UNITYSDK_OFFSET(0x190CC7A0)
#define RPG_GAMECORE_TRIGGERSDFTEXTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x190C2F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerSDFTextEffect_TypeDefinitionIndex = 22618;

	class TriggerSDFTextEffect : public ::RPG::GameCore::TriggerEffect
	{
	public:
		::RPG::Client::TextID TextContent; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSDFTEXTEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AC06E073EA27CF75(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerSDFTextEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerSDFTextEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSDFTEXTEFFECT_METHOD_4_AC06E073EA27CF75_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9421631F6D1AAFE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerSDFTextEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerSDFTextEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSDFTEXTEFFECT_METHOD_4_9421631F6D1AAFE9_OFFSET))(a1, a2);
		}
	};
}

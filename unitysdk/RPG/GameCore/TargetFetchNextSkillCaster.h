#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHNEXTSKILLCASTER_METHOD_4_5C8D2A1C277BEB9C_OFFSET UNITYSDK_OFFSET(0x18EDE4B0)
#define RPG_GAMECORE_TARGETFETCHNEXTSKILLCASTER_METHOD_4_836481C249B5C29E_OFFSET UNITYSDK_OFFSET(0x18EE4E90)
#define RPG_GAMECORE_TARGETFETCHNEXTSKILLCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDE460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchNextSkillCaster_TypeDefinitionIndex = 22966;

	class TargetFetchNextSkillCaster : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNEXTSKILLCASTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_836481C249B5C29E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchNextSkillCaster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchNextSkillCaster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNEXTSKILLCASTER_METHOD_4_836481C249B5C29E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5C8D2A1C277BEB9C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchNextSkillCaster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchNextSkillCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNEXTSKILLCASTER_METHOD_4_5C8D2A1C277BEB9C_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER_METHOD_4_8CEAF60DC65EB4E2_OFFSET UNITYSDK_OFFSET(0x177B34F0)
#define RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER_METHOD_4_F17D451F28FB4790_OFFSET UNITYSDK_OFFSET(0x177BD860)
#define RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x177B34A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchCallBackModifierCaster_TypeDefinitionIndex = 22196;

	class TargetFetchCallBackModifierCaster : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F17D451F28FB4790(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCallBackModifierCaster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCallBackModifierCaster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER_METHOD_4_F17D451F28FB4790_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8CEAF60DC65EB4E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCallBackModifierCaster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCallBackModifierCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER_METHOD_4_8CEAF60DC65EB4E2_OFFSET))(a1, a2);
		}
	};
}

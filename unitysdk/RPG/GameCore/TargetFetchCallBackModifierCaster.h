#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER_METHOD_4_6626940828AF1B9A_OFFSET UNITYSDK_OFFSET(0x19D0BFC0)
#define RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER_METHOD_4_7A050EAA0D81E89A_OFFSET UNITYSDK_OFFSET(0x19D04BF0)
#define RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER_METHOD_4_8CEAF60DC65EB4E2_OFFSET UNITYSDK_OFFSET(0x19CF7E60)
#define RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER_METHOD_4_F17D451F28FB4790_OFFSET UNITYSDK_OFFSET(0x19D0BF00)
#define RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF7E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchCallBackModifierCaster_TypeDefinitionIndex = 22601;

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

		static ::System::Void Method_4_7A050EAA0D81E89A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCallBackModifierCaster*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCallBackModifierCaster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER_METHOD_4_7A050EAA0D81E89A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6626940828AF1B9A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCallBackModifierCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCallBackModifierCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER_METHOD_4_6626940828AF1B9A_OFFSET))(a1, a2);
		}
	};
}

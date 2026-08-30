#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER_METHOD_4_2ADF4B0C9F36FB63_OFFSET UNITYSDK_OFFSET(0x1D5A9FE0)
#define RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER_METHOD_4_6626940828AF1B9A_OFFSET UNITYSDK_OFFSET(0x1D5AA0E0)
#define RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER_METHOD_4_8CEAF60DC65EB4E2_OFFSET UNITYSDK_OFFSET(0x1D5AA060)
#define RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER_METHOD_4_E113E2D629CB5E67_OFFSET UNITYSDK_OFFSET(0x1D5AA0C0)
#define RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AA050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchCallBackModifierCaster_TypeDefinitionIndex = 23644;

	class TargetFetchCallBackModifierCaster : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2ADF4B0C9F36FB63(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCallBackModifierCaster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCallBackModifierCaster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER_METHOD_4_2ADF4B0C9F36FB63_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8CEAF60DC65EB4E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCallBackModifierCaster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCallBackModifierCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER_METHOD_4_8CEAF60DC65EB4E2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E113E2D629CB5E67(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCallBackModifierCaster*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCallBackModifierCaster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER_METHOD_4_E113E2D629CB5E67_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6626940828AF1B9A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCallBackModifierCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCallBackModifierCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCALLBACKMODIFIERCASTER_METHOD_4_6626940828AF1B9A_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY_METHOD_4_A11B81032D874802_OFFSET UNITYSDK_OFFSET(0x19D0F650)
#define RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY_METHOD_4_B95471B175C55B48_OFFSET UNITYSDK_OFFSET(0x19D0F590)
#define RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY_METHOD_4_C28B2D6E951406DA_OFFSET UNITYSDK_OFFSET(0x19CFCE50)
#define RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY_METHOD_4_FD6152C5DE8F0A42_OFFSET UNITYSDK_OFFSET(0x19D078B0)
#define RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19CFCE00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchTurnActionEntity_TypeDefinitionIndex = 22680;

	class TargetFetchTurnActionEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B95471B175C55B48(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTurnActionEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTurnActionEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY_METHOD_4_B95471B175C55B48_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C28B2D6E951406DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTurnActionEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTurnActionEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY_METHOD_4_C28B2D6E951406DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FD6152C5DE8F0A42(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTurnActionEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTurnActionEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY_METHOD_4_FD6152C5DE8F0A42_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A11B81032D874802(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTurnActionEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTurnActionEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY_METHOD_4_A11B81032D874802_OFFSET))(a1, a2);
		}
	};
}
